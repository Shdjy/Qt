/********************************************************************************
** Form generated from reading UI file 'ChatWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATWIDGET_H
#define UI_CHATWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatWidget
{
public:
    QTextBrowser *textBrowser;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QLabel *labelFriendName;

    void setupUi(QWidget *ChatWidget)
    {
        if (ChatWidget->objectName().isEmpty())
            ChatWidget->setObjectName(QString::fromUtf8("ChatWidget"));
        ChatWidget->resize(450, 508);
        textBrowser = new QTextBrowser(ChatWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 40, 431, 301));
        QFont font;
        font.setPointSize(11);
        textBrowser->setFont(font);
        textEdit = new QTextEdit(ChatWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 350, 431, 151));
        textEdit->setFont(font);
        pushButton = new QPushButton(ChatWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(350, 470, 80, 20));
        pushButton->setMinimumSize(QSize(0, 20));
        pushButton->setMaximumSize(QSize(16777215, 20));
        labelFriendName = new QLabel(ChatWidget);
        labelFriendName->setObjectName(QString::fromUtf8("labelFriendName"));
        labelFriendName->setGeometry(QRect(10, 10, 431, 31));
        QFont font1;
        font1.setPointSize(12);
        labelFriendName->setFont(font1);
        labelFriendName->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        retranslateUi(ChatWidget);

        QMetaObject::connectSlotsByName(ChatWidget);
    } // setupUi

    void retranslateUi(QWidget *ChatWidget)
    {
        ChatWidget->setWindowTitle(QCoreApplication::translate("ChatWidget", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("ChatWidget", "\345\217\221\351\200\201", nullptr));
        labelFriendName->setText(QCoreApplication::translate("ChatWidget", "FriendName", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChatWidget: public Ui_ChatWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATWIDGET_H
