/********************************************************************************
** Form generated from reading UI file 'AddFriendDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDFRIENDDIALOG_H
#define UI_ADDFRIENDDIALOG_H

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

class Ui_AddFriendDialog
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_2;
    QLineEdit *EditAccount;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *AddFriendDialog)
    {
        if (AddFriendDialog->objectName().isEmpty())
            AddFriendDialog->setObjectName(QString::fromUtf8("AddFriendDialog"));
        AddFriendDialog->resize(381, 144);
        AddFriendDialog->setLayoutDirection(Qt::LeftToRight);
        verticalLayout = new QVBoxLayout(AddFriendDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 23, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        label_2 = new QLabel(AddFriendDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(80, 0));
        label_2->setMaximumSize(QSize(80, 16777215));
        QFont font;
        font.setPointSize(12);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_2);

        EditAccount = new QLineEdit(AddFriendDialog);
        EditAccount->setObjectName(QString::fromUtf8("EditAccount"));
        EditAccount->setMinimumSize(QSize(170, 30));
        EditAccount->setMaximumSize(QSize(170, 16777215));
        EditAccount->setFont(font);
        EditAccount->setMaxLength(10);
        EditAccount->setEchoMode(QLineEdit::Normal);

        horizontalLayout->addWidget(EditAccount);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(AddFriendDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(90, 30));
        pushButton->setMaximumSize(QSize(90, 16777215));
        QFont font1;
        font1.setPointSize(14);
        pushButton->setFont(font1);

        horizontalLayout_2->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);


        retranslateUi(AddFriendDialog);

        QMetaObject::connectSlotsByName(AddFriendDialog);
    } // setupUi

    void retranslateUi(QDialog *AddFriendDialog)
    {
        AddFriendDialog->setWindowTitle(QCoreApplication::translate("AddFriendDialog", "AddFriend", nullptr));
        label_2->setText(QCoreApplication::translate("AddFriendDialog", "\345\245\275\345\217\213\350\264\246\345\217\267\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("AddFriendDialog", "\346\267\273\345\212\240", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddFriendDialog: public Ui_AddFriendDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFRIENDDIALOG_H
