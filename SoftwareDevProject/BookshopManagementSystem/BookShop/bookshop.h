#ifndef BOOKSHOP_H
#define BOOKSHOP_H

#include <QMainWindow>

class QPushButton;
class QLabel;

QT_BEGIN_NAMESPACE
namespace Ui {
    class BookShop;
}
QT_END_NAMESPACE

class BookShop : public QMainWindow {
    Q_OBJECT

public:
    explicit BookShop(QWidget *parent = nullptr);
    ~BookShop();
    void addIconsToRow(int row);
       void toggleIcon(QPushButton *icon1, QLabel *icon4);




private slots:
    void on_newBtn_clicked();
    void on_pushButton_7_clicked();
    void on_submitBtn_clicked();
    void on_view_clicked();

private:
    Ui::BookShop *ui;

    // Define a structure to hold book information
    struct Book {
        int bookID;
        QString bookName;
        QString authorName;
        QString numberOfBooks;
    };

    // Declare an instance of the Book structure to hold current book information
    Book currentBook;

    // Function to read book data from a file
    void readBookDataFromFile();
    void saveToFile();
    void updateFileFromTable();
    void addIconsToTable();
    void onCellClicked(int row, int col);
    int activeRow;
//    bool deleteConfirmationInProgress = false;
    std::map<int, bool> deleteConfirmationInProgressMap;
     bool refreshTableFlag = false;
    void onRowDeleted();


    // Other member functions and variables
};

#endif // BOOKSHOP_H
