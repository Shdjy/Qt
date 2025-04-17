/********************************************************************************
** Form generated from reading UI file 'SignInDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNINDIALOG_H
#define UI_SIGNINDIALOG_H

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

class Ui_SignInDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *EditAccount;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *EditPasswd;
    QLabel *labelRegister;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *ButtonSignIn;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QDialog *SignInDialog)
    {
        if (SignInDialog->objectName().isEmpty())
            SignInDialog->setObjectName(QString::fromUtf8("SignInDialog"));
        SignInDialog->resize(423, 207);
        SignInDialog->setMinimumSize(QSize(423, 207));
        SignInDialog->setMaximumSize(QSize(423, 207));
        verticalLayout_2 = new QVBoxLayout(SignInDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 25, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(50, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(SignInDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(60, 0));
        label->setMaximumSize(QSize(60, 16777215));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label);

        EditAccount = new QLineEdit(SignInDialog);
        EditAccount->setObjectName(QString::fromUtf8("EditAccount"));
        EditAccount->setMinimumSize(QSize(220, 30));
        EditAccount->setMaximumSize(QSize(120, 16777215));
        EditAccount->setFont(font);
        EditAccount->setMaxLength(30);

        horizontalLayout->addWidget(EditAccount);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(SignInDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(60, 0));
        label_2->setMaximumSize(QSize(60, 16777215));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_2);

        EditPasswd = new QLineEdit(SignInDialog);
        EditPasswd->setObjectName(QString::fromUtf8("EditPasswd"));
        EditPasswd->setMinimumSize(QSize(150, 30));
        EditPasswd->setFont(font);
        EditPasswd->setMaxLength(15);
        EditPasswd->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(EditPasswd);


        verticalLayout->addLayout(horizontalLayout_2);

        labelRegister = new QLabel(SignInDialog);
        labelRegister->setObjectName(QString::fromUtf8("labelRegister"));
        labelRegister->setFont(font);
        labelRegister->setCursor(QCursor(Qt::PointingHandCursor));
        labelRegister->setAlignment(Qt::AlignCenter);
        labelRegister->setOpenExternalLinks(true);

        verticalLayout->addWidget(labelRegister);


        horizontalLayout_3->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(50, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        ButtonSignIn = new QPushButton(SignInDialog);
        ButtonSignIn->setObjectName(QString::fromUtf8("ButtonSignIn"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ButtonSignIn->sizePolicy().hasHeightForWidth());
        ButtonSignIn->setSizePolicy(sizePolicy);
        ButtonSignIn->setMinimumSize(QSize(100, 0));
        QFont font1;
        font1.setPointSize(14);
        ButtonSignIn->setFont(font1);

        horizontalLayout_4->addWidget(ButtonSignIn);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_4);


        retranslateUi(SignInDialog);

        QMetaObject::connectSlotsByName(SignInDialog);
    } // setupUi

    void retranslateUi(QDialog *SignInDialog)
    {
        SignInDialog->setWindowTitle(QCoreApplication::translate("SignInDialog", "Sign-In", nullptr));
        label->setText(QCoreApplication::translate("SignInDialog", "\350\264\246\345\217\267\357\274\232", nullptr));
#if QT_CONFIG(tooltip)
        EditAccount->setToolTip(QCoreApplication::translate("SignInDialog", "<html><head/><body><p>\350\257\267\350\276\223\345\205\245\346\234\211\346\225\210\347\232\204\350\264\246\345\217\267</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("SignInDialog", "\345\257\206\347\240\201\357\274\232", nullptr));
        labelRegister->setText(QCoreApplication::translate("SignInDialog", "<html><head/><body><p><span style=\" font-size:10pt; text-decoration: underline; color:#0000ff;\">\347\253\213\345\215\263\346\263\250\345\206\214</span></p></body></html>", nullptr));
        ButtonSignIn->setText(QCoreApplication::translate("SignInDialog", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignInDialog: public Ui_SignInDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNINDIALOG_H
