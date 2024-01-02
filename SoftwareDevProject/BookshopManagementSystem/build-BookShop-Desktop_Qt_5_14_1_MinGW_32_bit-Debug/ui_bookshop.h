/********************************************************************************
** Form generated from reading UI file 'bookshop.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKSHOP_H
#define UI_BOOKSHOP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BookShop
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *allBtn;
    QPushButton *newBtn;
    QPushButton *view;
    QPushButton *exit;
    QWidget *widget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *welcomePage;
    QLabel *label_2;
    QWidget *newBook;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *bookIDLineEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *bookNameLineEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *authorNameLineEdit;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *numberOfBooksLineEdit;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer;
    QPushButton *submitBtn;
    QPushButton *pushButton_7;
    QWidget *viewBooks_2;
    QHBoxLayout *horizontalLayout_2;
    QTableWidget *bookTable;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *BookShop)
    {
        if (BookShop->objectName().isEmpty())
            BookShop->setObjectName(QString::fromUtf8("BookShop"));
        BookShop->resize(727, 476);
        BookShop->setStyleSheet(QString::fromUtf8("background-color: #8ecae6;"));
        centralwidget = new QWidget(BookShop);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        allBtn = new QHBoxLayout();
        allBtn->setObjectName(QString::fromUtf8("allBtn"));
        allBtn->setContentsMargins(-1, 0, -1, 0);
        newBtn = new QPushButton(centralwidget);
        newBtn->setObjectName(QString::fromUtf8("newBtn"));
        newBtn->setStyleSheet(QString::fromUtf8("background-color: #219ebc;\n"
"color:#023047;\n"
"font-size:18px ;\n"
"font-weight:bold;\n"
"padding:15px;\n"
"\n"
"\n"
""));

        allBtn->addWidget(newBtn);

        view = new QPushButton(centralwidget);
        view->setObjectName(QString::fromUtf8("view"));
        view->setStyleSheet(QString::fromUtf8("background-color: #219ebc;\n"
"color:#023047;\n"
"font-size:18px ;\n"
"font-weight:bold;\n"
"padding:15px;\n"
"\n"
"\n"
""));

        allBtn->addWidget(view);

        exit = new QPushButton(centralwidget);
        exit->setObjectName(QString::fromUtf8("exit"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(exit->sizePolicy().hasHeightForWidth());
        exit->setSizePolicy(sizePolicy);
        exit->setStyleSheet(QString::fromUtf8("background-color: #219ebc;\n"
"color:#023047;\n"
"font-size:18px ;\n"
"font-weight:bold;\n"
"padding:15px;\n"
"\n"
"\n"
""));

        allBtn->addWidget(exit);


        verticalLayout->addLayout(allBtn);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        stackedWidget = new QStackedWidget(widget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        welcomePage = new QWidget();
        welcomePage->setObjectName(QString::fromUtf8("welcomePage"));
        label_2 = new QLabel(welcomePage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 10, 641, 341));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/icons/resource/bg.png")));
        label_2->setScaledContents(true);
        label_2->setWordWrap(false);
        stackedWidget->addWidget(welcomePage);
        newBook = new QWidget();
        newBook->setObjectName(QString::fromUtf8("newBook"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(newBook->sizePolicy().hasHeightForWidth());
        newBook->setSizePolicy(sizePolicy2);
        verticalLayout_3 = new QVBoxLayout(newBook);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_4 = new QLabel(newBook);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy3);
        label_4->setStyleSheet(QString::fromUtf8("font-size:16px;\n"
"margin:10px;\n"
"color:#023047;\n"
"font-weight:bold;"));

        horizontalLayout->addWidget(label_4);

        horizontalSpacer_2 = new QSpacerItem(4, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        bookIDLineEdit = new QLineEdit(newBook);
        bookIDLineEdit->setObjectName(QString::fromUtf8("bookIDLineEdit"));
        sizePolicy1.setHeightForWidth(bookIDLineEdit->sizePolicy().hasHeightForWidth());
        bookIDLineEdit->setSizePolicy(sizePolicy1);
        bookIDLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(33, 158, 188,.3);\n"
"color:#023047;\n"
"font-size:14px ;\n"
"font-weight:bold;\n"
"padding:8px;\n"
"border :none;\n"
"border-radius:5px;\n"
"\n"
""));

        horizontalLayout->addWidget(bookIDLineEdit);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(newBook);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);
        label->setStyleSheet(QString::fromUtf8("font-size:16px;\n"
"margin:10px;\n"
"color:#023047;\n"
"font-weight:bold;"));

        horizontalLayout_4->addWidget(label);

        horizontalSpacer_3 = new QSpacerItem(32, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        bookNameLineEdit = new QLineEdit(newBook);
        bookNameLineEdit->setObjectName(QString::fromUtf8("bookNameLineEdit"));
        sizePolicy1.setHeightForWidth(bookNameLineEdit->sizePolicy().hasHeightForWidth());
        bookNameLineEdit->setSizePolicy(sizePolicy1);
        bookNameLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(33, 158, 188,.3);\n"
"color:#023047;\n"
"font-size:14px ;\n"
"font-weight:bold;\n"
"padding:8px;\n"
"border :none;\n"
"border-radius:5px;\n"
"\n"
""));

        horizontalLayout_4->addWidget(bookNameLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(newBook);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy3.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy3);
        label_5->setStyleSheet(QString::fromUtf8("font-size:16px;\n"
"margin:10px;\n"
"color:#023047;\n"
"font-weight:bold;"));

        horizontalLayout_5->addWidget(label_5);

        horizontalSpacer_5 = new QSpacerItem(13, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        authorNameLineEdit = new QLineEdit(newBook);
        authorNameLineEdit->setObjectName(QString::fromUtf8("authorNameLineEdit"));
        sizePolicy1.setHeightForWidth(authorNameLineEdit->sizePolicy().hasHeightForWidth());
        authorNameLineEdit->setSizePolicy(sizePolicy1);
        authorNameLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(33, 158, 188,.3);\n"
"color:#023047;\n"
"font-size:14px ;\n"
"font-weight:bold;\n"
"padding:8px;\n"
"border :none;\n"
"border-radius:5px;\n"
"\n"
""));

        horizontalLayout_5->addWidget(authorNameLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_7 = new QLabel(newBook);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy3.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy3);
        label_7->setStyleSheet(QString::fromUtf8("font-size:16px;\n"
"margin:10px;\n"
"color:#023047;\n"
"font-weight:bold;"));

        horizontalLayout_7->addWidget(label_7);

        horizontalSpacer_4 = new QSpacerItem(18, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);

        numberOfBooksLineEdit = new QLineEdit(newBook);
        numberOfBooksLineEdit->setObjectName(QString::fromUtf8("numberOfBooksLineEdit"));
        sizePolicy1.setHeightForWidth(numberOfBooksLineEdit->sizePolicy().hasHeightForWidth());
        numberOfBooksLineEdit->setSizePolicy(sizePolicy1);
        numberOfBooksLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(33, 158, 188,.3);\n"
"color:#023047;\n"
"font-size:14px ;\n"
"font-weight:bold;\n"
"padding:8px;\n"
"border :none;\n"
"border-radius:5px;\n"
"\n"
""));

        horizontalLayout_7->addWidget(numberOfBooksLineEdit);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        submitBtn = new QPushButton(newBook);
        submitBtn->setObjectName(QString::fromUtf8("submitBtn"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(submitBtn->sizePolicy().hasHeightForWidth());
        submitBtn->setSizePolicy(sizePolicy4);
        submitBtn->setStyleSheet(QString::fromUtf8("background-color: #219ebc;\n"
"color:#023047;\n"
"font-size:12px ;\n"
"font-weight:bold;\n"
"padding:8px 25px;\n"
"\n"
"\n"
""));

        horizontalLayout_6->addWidget(submitBtn);

        pushButton_7 = new QPushButton(newBook);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy4.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy4);
        pushButton_7->setStyleSheet(QString::fromUtf8("background-color: #219ebc;\n"
"color:#023047;\n"
"font-size:12px ;\n"
"font-weight:bold;\n"
"padding:8px 25px;\n"
"\n"
"\n"
""));

        horizontalLayout_6->addWidget(pushButton_7);


        verticalLayout_2->addLayout(horizontalLayout_6);


        verticalLayout_3->addLayout(verticalLayout_2);

        stackedWidget->addWidget(newBook);
        viewBooks_2 = new QWidget();
        viewBooks_2->setObjectName(QString::fromUtf8("viewBooks_2"));
        horizontalLayout_2 = new QHBoxLayout(viewBooks_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        bookTable = new QTableWidget(viewBooks_2);
        if (bookTable->columnCount() < 8)
            bookTable->setColumnCount(8);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem->setFont(font);
        bookTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        bookTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font);
        bookTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font);
        bookTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setTextAlignment(Qt::AlignCenter);
        bookTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setTextAlignment(Qt::AlignCenter);
        bookTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setTextAlignment(Qt::AlignCenter);
        bookTable->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setTextAlignment(Qt::AlignCenter);
        bookTable->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        bookTable->setObjectName(QString::fromUtf8("bookTable"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(bookTable->sizePolicy().hasHeightForWidth());
        bookTable->setSizePolicy(sizePolicy5);
        QFont font1;
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        bookTable->setFont(font1);
        bookTable->setStyleSheet(QString::fromUtf8(""));
        bookTable->setFrameShadow(QFrame::Raised);
        bookTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        bookTable->setGridStyle(Qt::SolidLine);
        bookTable->setSortingEnabled(true);
        bookTable->setWordWrap(true);
        bookTable->setCornerButtonEnabled(false);
        bookTable->setRowCount(0);
        bookTable->setColumnCount(8);

        horizontalLayout_2->addWidget(bookTable);

        stackedWidget->addWidget(viewBooks_2);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);


        verticalLayout->addWidget(widget);

        BookShop->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(BookShop);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        statusbar->setFont(font2);
        statusbar->setStyleSheet(QString::fromUtf8("QStatusBar{\n"
"color:rgb(0, 255, 0);\n"
"}"));
        BookShop->setStatusBar(statusbar);
        QWidget::setTabOrder(bookIDLineEdit, bookNameLineEdit);
        QWidget::setTabOrder(bookNameLineEdit, authorNameLineEdit);
        QWidget::setTabOrder(authorNameLineEdit, numberOfBooksLineEdit);
        QWidget::setTabOrder(numberOfBooksLineEdit, submitBtn);
        QWidget::setTabOrder(submitBtn, pushButton_7);
        QWidget::setTabOrder(pushButton_7, view);
        QWidget::setTabOrder(view, newBtn);
        QWidget::setTabOrder(newBtn, exit);
        QWidget::setTabOrder(exit, bookTable);

        retranslateUi(BookShop);
        QObject::connect(exit, SIGNAL(clicked()), BookShop, SLOT(close()));

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(BookShop);
    } // setupUi

    void retranslateUi(QMainWindow *BookShop)
    {
        BookShop->setWindowTitle(QCoreApplication::translate("BookShop", "BookShop", nullptr));
        newBtn->setText(QCoreApplication::translate("BookShop", "New", nullptr));
        view->setText(QCoreApplication::translate("BookShop", "View", nullptr));
        exit->setText(QCoreApplication::translate("BookShop", "Exit", nullptr));
        label_2->setText(QString());
        label_4->setText(QCoreApplication::translate("BookShop", "Book ID", nullptr));
        bookIDLineEdit->setPlaceholderText(QCoreApplication::translate("BookShop", " Enter a unique book ID (Ex. 1,2,....99)", nullptr));
        label->setText(QCoreApplication::translate("BookShop", "Title", nullptr));
        bookNameLineEdit->setText(QString());
        bookNameLineEdit->setPlaceholderText(QCoreApplication::translate("BookShop", "Enter the full title of the book (Ex. The Lord of the Rings, The Hobbit, Harry Potter )", nullptr));
        label_5->setText(QCoreApplication::translate("BookShop", "Author", nullptr));
        authorNameLineEdit->setPlaceholderText(QCoreApplication::translate("BookShop", "Enter the author's full name (Ex. J.R.R. Tolkien, J.K. Rowling, Paulo Coelho )", nullptr));
        label_7->setText(QCoreApplication::translate("BookShop", "Genre", nullptr));
        numberOfBooksLineEdit->setPlaceholderText(QCoreApplication::translate("BookShop", "Write the genre of the book (Ex.Fantasy, Fiction, Adventure, Science Fiction )", nullptr));
        submitBtn->setText(QCoreApplication::translate("BookShop", "Submit", nullptr));
        pushButton_7->setText(QCoreApplication::translate("BookShop", "Clear", nullptr));
        QTableWidgetItem *___qtablewidgetitem = bookTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("BookShop", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = bookTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("BookShop", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = bookTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("BookShop", "Author", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = bookTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("BookShop", "Genre", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BookShop: public Ui_BookShop {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKSHOP_H
