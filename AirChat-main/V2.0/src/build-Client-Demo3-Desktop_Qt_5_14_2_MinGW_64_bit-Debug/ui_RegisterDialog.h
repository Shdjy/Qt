/********************************************************************************
** Form generated from reading UI file 'RegisterDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERDIALOG_H
#define UI_REGISTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RegisterDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *EditEmail;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *EditVerify;
    QPushButton *ButtonVerify;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *EditUsername;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *EditPasswd;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *ButtonRegister;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QDialog *RegisterDialog)
    {
        if (RegisterDialog->objectName().isEmpty())
            RegisterDialog->setObjectName(QString::fromUtf8("RegisterDialog"));
        RegisterDialog->resize(423, 207);
        RegisterDialog->setMinimumSize(QSize(423, 207));
        RegisterDialog->setMaximumSize(QSize(423, 207));
        verticalLayout_2 = new QVBoxLayout(RegisterDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(RegisterDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(70, 0));
        label->setMaximumSize(QSize(60, 16777215));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label);

        EditEmail = new QLineEdit(RegisterDialog);
        EditEmail->setObjectName(QString::fromUtf8("EditEmail"));
        EditEmail->setMinimumSize(QSize(100, 30));
        EditEmail->setFont(font);
        EditEmail->setMaxLength(30);

        horizontalLayout->addWidget(EditEmail);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(RegisterDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(70, 0));
        label_2->setMaximumSize(QSize(70, 16777215));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_2);

        EditVerify = new QLineEdit(RegisterDialog);
        EditVerify->setObjectName(QString::fromUtf8("EditVerify"));
        EditVerify->setMinimumSize(QSize(100, 30));
        EditVerify->setFont(font);
        EditVerify->setMaxLength(6);

        horizontalLayout_2->addWidget(EditVerify);

        ButtonVerify = new QPushButton(RegisterDialog);
        ButtonVerify->setObjectName(QString::fromUtf8("ButtonVerify"));
        ButtonVerify->setMinimumSize(QSize(50, 0));
        ButtonVerify->setMaximumSize(QSize(50, 25));

        horizontalLayout_2->addWidget(ButtonVerify);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(RegisterDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(70, 0));
        label_4->setMaximumSize(QSize(60, 16777215));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_4);

        EditUsername = new QLineEdit(RegisterDialog);
        EditUsername->setObjectName(QString::fromUtf8("EditUsername"));
        EditUsername->setMinimumSize(QSize(150, 30));
        EditUsername->setFont(font);
        EditUsername->setMaxLength(15);
        EditUsername->setEchoMode(QLineEdit::Normal);

        horizontalLayout_4->addWidget(EditUsername);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(RegisterDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(70, 0));
        label_3->setMaximumSize(QSize(60, 16777215));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_3);

        EditPasswd = new QLineEdit(RegisterDialog);
        EditPasswd->setObjectName(QString::fromUtf8("EditPasswd"));
        EditPasswd->setMinimumSize(QSize(150, 30));
        EditPasswd->setFont(font);
        EditPasswd->setMaxLength(15);
        EditPasswd->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(EditPasswd);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_6->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        ButtonRegister = new QPushButton(RegisterDialog);
        ButtonRegister->setObjectName(QString::fromUtf8("ButtonRegister"));
        ButtonRegister->setMinimumSize(QSize(100, 0));
        QFont font1;
        font1.setPointSize(14);
        ButtonRegister->setFont(font1);

        horizontalLayout_5->addWidget(ButtonRegister);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_5);


        retranslateUi(RegisterDialog);

        QMetaObject::connectSlotsByName(RegisterDialog);
    } // setupUi

    void retranslateUi(QDialog *RegisterDialog)
    {
        RegisterDialog->setWindowTitle(QCoreApplication::translate("RegisterDialog", "Register", nullptr));
        label->setText(QCoreApplication::translate("RegisterDialog", "\351\202\256\347\256\261\357\274\232", nullptr));
#if QT_CONFIG(tooltip)
        EditEmail->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("RegisterDialog", "\351\252\214\350\257\201\347\240\201\357\274\232", nullptr));
#if QT_CONFIG(tooltip)
        ButtonVerify->setToolTip(QCoreApplication::translate("RegisterDialog", "<html><head/><body><p>30s\345\220\216\345\217\257\351\207\215\350\257\225</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        ButtonVerify->setText(QCoreApplication::translate("RegisterDialog", "\350\216\267\345\217\226", nullptr));
        label_4->setText(QCoreApplication::translate("RegisterDialog", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
#if QT_CONFIG(tooltip)
        EditUsername->setToolTip(QCoreApplication::translate("RegisterDialog", "<html><head/><body><p>\344\273\245\345\255\227\346\257\215\345\274\200\345\244\264\357\274\214\351\225\277\345\272\246\345\234\2506~15\344\271\213\351\227\264\357\274\214\345\217\252\350\203\275\345\214\205\345\220\253\345\255\227\346\257\215\343\200\201\346\225\260\345\255\227\345\222\214\344\270\213\345\210\222\347\272\277</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        EditUsername->setText(QString());
        label_3->setText(QCoreApplication::translate("RegisterDialog", "\345\257\206\347\240\201\357\274\232", nullptr));
#if QT_CONFIG(tooltip)
        EditPasswd->setToolTip(QCoreApplication::translate("RegisterDialog", "<html><head/><body><p>\344\273\245\345\255\227\346\257\215\345\274\200\345\244\264\357\274\214\351\225\277\345\272\246\345\234\2506~15\344\271\213\351\227\264\357\274\214\345\217\252\350\203\275\345\214\205\345\220\253\345\255\227\346\257\215\343\200\201\346\225\260\345\255\227\345\222\214\344\270\213\345\210\222\347\272\277</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        EditPasswd->setText(QString());
        ButtonRegister->setText(QCoreApplication::translate("RegisterDialog", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterDialog: public Ui_RegisterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERDIALOG_H
