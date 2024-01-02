/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QPushButton *btn;
    QPushButton *newBtn;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(400, 300);
        btn = new QPushButton(Form);
        btn->setObjectName(QString::fromUtf8("btn"));
        btn->setGeometry(QRect(150, 90, 80, 22));
        btn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: red;\n"
"}"));
        newBtn = new QPushButton(Form);
        newBtn->setObjectName(QString::fromUtf8("newBtn"));
        newBtn->setGeometry(QRect(60, 170, 232, 52));
        newBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"  align-items: center;\n"
"  background-clip: padding-box;\n"
"  background-color: #fa6400;\n"
"  border: 1px solid transparent;\n"
"  border-radius: 20px;\n"
"  box-shadow: rgba(0, 0, 0, 0.02) 0 1px 3px 0;\n"
"  box-sizing: border-box;\n"
"  color: #000;\n"
"  cursor: pointer;\n"
"  display: inline-flex;\n"
"  font-family: system-ui,-apple-system,system-ui,\"Helvetica Neue\",Helvetica,Arial,sans-serif;\n"
"  font-size: 16px;\n"
"  font-weight: 600;\n"
"  justify-content: center;\n"
"  line-height: 1.25;\n"
"  margin: 0;\n"
"  min-height: 3rem;\n"
"  padding: 5px;\n"
"  position: relative;\n"
"  text-decoration: none;\n"
"  transition: all 250ms;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;\n"
"  vertical-align: baseline;\n"
"  width: auto;\n"
"}\n"
"\n"
"QPushButton:hover,\n"
"QPushButton:focus {\n"
"  background-color: #fb8332;\n"
"  box-shadow: rgba(0, 0, 0, 0.1) 0 4px 12px;\n"
"}\n"
""));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        btn->setText(QCoreApplication::translate("Form", "PushButton", nullptr));
        newBtn->setText(QCoreApplication::translate("Form", "New", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
