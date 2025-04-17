/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *userNameEdit;
    QSpacerItem *horizontalSpacer_5;
    QLabel *statusLabel;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *LoginButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *ExitButton;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QString::fromUtf8("LoginDialog"));
        LoginDialog->resize(384, 177);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LoginDialog->sizePolicy().hasHeightForWidth());
        LoginDialog->setSizePolicy(sizePolicy);
        LoginDialog->setMinimumSize(QSize(384, 177));
        LoginDialog->setMaximumSize(QSize(384, 177));
        verticalLayout = new QVBoxLayout(LoginDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget_2 = new QWidget(LoginDialog);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_2->addItem(verticalSpacer);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMinimumSize(QSize(0, 0));
        label_2->setMaximumSize(QSize(16777215, 100));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(15);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_2->addWidget(label_2);

        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(60, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        userNameEdit = new QLineEdit(widget_3);
        userNameEdit->setObjectName(QString::fromUtf8("userNameEdit"));
        userNameEdit->setEnabled(true);
        userNameEdit->setMinimumSize(QSize(200, 30));
        userNameEdit->setMaximumSize(QSize(200, 16777215));
        QFont font1;
        font1.setPointSize(11);
        userNameEdit->setFont(font1);
        userNameEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(userNameEdit);

        horizontalSpacer_5 = new QSpacerItem(59, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout_2->addWidget(widget_3);


        verticalLayout->addWidget(widget_2);

        statusLabel = new QLabel(LoginDialog);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        QFont font2;
        font2.setPointSize(10);
        statusLabel->setFont(font2);
        statusLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(statusLabel);

        widget = new QWidget(LoginDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        LoginButton = new QPushButton(widget);
        LoginButton->setObjectName(QString::fromUtf8("LoginButton"));
        LoginButton->setFont(font2);

        horizontalLayout->addWidget(LoginButton);

        horizontalSpacer = new QSpacerItem(80, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        ExitButton = new QPushButton(widget);
        ExitButton->setObjectName(QString::fromUtf8("ExitButton"));
        ExitButton->setFont(font2);

        horizontalLayout->addWidget(ExitButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(widget);


        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QCoreApplication::translate("LoginDialog", "AirChat: Login/Logon", nullptr));
        label_2->setText(QCoreApplication::translate("LoginDialog", "Your Nickname: ", nullptr));
        statusLabel->setText(QString());
        LoginButton->setText(QCoreApplication::translate("LoginDialog", "Login/Logon", nullptr));
        ExitButton->setText(QCoreApplication::translate("LoginDialog", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
