#include "bookshop.h"
#include "ui_bookshop.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QMessageBox>

BookShop::BookShop(QWidget *parent) : QMainWindow(parent), ui(new Ui::BookShop) {
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::WindowTitleHint | Qt::CustomizeWindowHint | Qt::MSWindowsFixedSizeDialogHint);
    ui->stackedWidget->setCurrentIndex(0);
    readBookDataFromFile();
    addIconsToTable();

  //  connect(ui->bookTable, &QTableWidget::cellClicked, this, &BookShop::onCellClicked);
   // deleteConfirmationInProgress = false;
    ui->bookTable->verticalHeader()->setVisible(false);


}

BookShop::~BookShop() {
    delete ui;
}

void BookShop::on_newBtn_clicked() {
    ui->stackedWidget->setCurrentIndex(1);
}

void BookShop::on_pushButton_7_clicked() {
    ui->bookIDLineEdit->clear();
    ui->bookNameLineEdit->clear();
    ui->authorNameLineEdit->clear();
    ui->numberOfBooksLineEdit->clear();
}
void BookShop::on_submitBtn_clicked() {
    // Validate book ID
    bool validBookID = false;
    QString bookIDText = ui->bookIDLineEdit->text();
    if (!bookIDText.isEmpty()) {
        int bookID = bookIDText.toInt();
        if (bookID > 0 && bookID <= 99) { // Limit book ID to 1 to 99
            validBookID = true;
        }
    }

    // Proceed with data submission only if all fields are filled and book ID is valid
    if (validBookID && !ui->bookNameLineEdit->text().isEmpty() && !ui->authorNameLineEdit->text().isEmpty() && !ui->numberOfBooksLineEdit->text().isEmpty()) {
        // Populate book information
        currentBook.bookID = ui->bookIDLineEdit->text().toInt();
        currentBook.bookName = ui->bookNameLineEdit->text();
        currentBook.authorName = ui->authorNameLineEdit->text();
        currentBook.numberOfBooks = ui->numberOfBooksLineEdit->text();

        // Add a new row to the table and populate cells
        int row = ui->bookTable->rowCount();
        ui->bookTable->insertRow(row);

        QTableWidgetItem *idItem = new QTableWidgetItem(QString::number(currentBook.bookID));
        QTableWidgetItem *titleItem = new QTableWidgetItem(currentBook.bookName);
        QTableWidgetItem *authorItem = new QTableWidgetItem(currentBook.authorName);
        QTableWidgetItem *numBooksItem = new QTableWidgetItem(currentBook.numberOfBooks);

        ui->bookTable->setItem(row, 0, idItem);
        ui->bookTable->setItem(row, 1, titleItem);
        ui->bookTable->setItem(row, 2, authorItem);
        ui->bookTable->setItem(row, 3, numBooksItem);

        // Save data to file
        saveToFile();

        // Clear input fields
        ui->bookIDLineEdit->clear();
        ui->bookNameLineEdit->clear();
        ui->authorNameLineEdit->clear();
        ui->numberOfBooksLineEdit->clear();

        // Add icons to the table
        addIconsToTable();

        // Display success message
        ui->statusbar->setStyleSheet("QStatusBar{color: green;}");
        ui->statusbar->showMessage("Book submitted successfully", 2000);
    } else {
        // Display error message if any fields are empty or book ID is invalid
        if (!validBookID) {
            QString errorMessage = "Invalid book ID";
            ui->statusbar->setStyleSheet("QStatusBar{color: red;}");
            ui->statusbar->showMessage(errorMessage, 2000);
        } else {
            QString warningMessage = "Please fill in all the fields";
            ui->statusbar->setStyleSheet("QStatusBar{color: red;}");
            ui->statusbar->showMessage(warningMessage, 2000);
        }
    }

}






void BookShop::addIconsToTable() {
    int rowCount = ui->bookTable->rowCount();
    QStringList iconPaths = {
        ":/icons/resource/cancel.png",
        ":/icons/resource/delete.png",
        ":/icons/resource/save.png",
        ":/icons/resource/edit.png"
    };

    for (int row = 0; row < rowCount; ++row) {
        for (int i = 0; i < 4; ++i) {
            QTableWidgetItem* iconItem = new QTableWidgetItem();
            QIcon icon(iconPaths.at(i));
            iconItem->setIcon(icon);
            iconItem->setTextAlignment(Qt::AlignCenter);
            ui->bookTable->setItem(row, ui->bookTable->columnCount() - 1 - i, iconItem);
            ui->bookTable->setColumnWidth(ui->bookTable->columnCount() - 1 - i, 24);
        }
    }

    connect(ui->bookTable, &QTableWidget::cellClicked, this, &BookShop::onCellClicked);
}



void BookShop::onCellClicked(int row, int col) {
  if (col == ui->bookTable->columnCount() - 2) { // Action for the delete icon
    if (!deleteConfirmationInProgressMap[1]) { // Check if confirmation was already shown for this row
      deleteConfirmationInProgressMap[1] = true; // Set flag to prevent further confirmation for this row
      QMessageBox::StandardButton reply;
      reply = QMessageBox::question(this, "Delete Confirmation", "Are you sure you want to delete this row?",
                                    QMessageBox::Yes | QMessageBox::No);

      if (reply == QMessageBox::Yes) {
        ui->bookTable->removeRow(row); // Remove the selected row
        refreshTableFlag = true; // Set flag to refresh the table
        onRowDeleted();
        deleteConfirmationInProgressMap[row] = false; // Reset the flag for the specific row
      }
    }
  }
}

void BookShop::onRowDeleted() {
  if (refreshTableFlag) {
    saveToFile(); // Save data to file
    addIconsToTable(); // Refresh table
    refreshTableFlag = false; // Reset the flag
  }
}











void BookShop::saveToFile() {
    QFile file("bookData.txt");
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);
        for (int row = 0; row < ui->bookTable->rowCount(); ++row) {
            for (int col = 0; col < ui->bookTable->columnCount(); ++col) {
                QTableWidgetItem *item = ui->bookTable->item(row, col);
                if (item) {
                    out << item->text();
                }
                if (col < ui->bookTable->columnCount() - 1) {
                    out << "|"; // Separate columns with tabs except for the last column
                }
            }
            out << "\n"; // Terminate each row with a newline character
        }
        file.close();
    } else {
        qDebug() << "Failed to open file for writing.";
    }
}


void BookShop::readBookDataFromFile() {
    QFile file("bookData.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        int row = 0;
        while (!in.atEnd()) {
            QString line = in.readLine();
            QStringList fields = line.split("|");
            if (fields.size() == 8) {
                ui->bookTable->insertRow(row);
                for (int col = 0; col < fields.size(); ++col) {
                    QTableWidgetItem *item = new QTableWidgetItem(fields.at(col));
                    item->setFlags(item->flags() & ~Qt::ItemIsEditable);
                    ui->bookTable->setItem(row, col, item);
                }
                ui->bookTable->setColumnWidth(0, 24);
                ui->bookTable->setColumnWidth(1, 181);
                ui->bookTable->setColumnWidth(2, 180);
                ui->bookTable->setColumnWidth(3, 115);
                addIconsToTable();
                ++row;
            }
        }
        file.close();
    } else {
        qDebug() << "Failed to open file for reading.";
    }
}

void BookShop::on_view_clicked() {
    ui->stackedWidget->setCurrentIndex(2);

}
