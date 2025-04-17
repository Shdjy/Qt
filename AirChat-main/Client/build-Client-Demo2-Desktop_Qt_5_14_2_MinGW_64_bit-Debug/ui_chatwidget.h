/********************************************************************************
** Form generated from reading UI file 'chatwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATWIDGET_H
#define UI_CHATWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *userNameLabel;
    QComboBox *targetNameComboBox;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QTextBrowser *Browser;
    QTextEdit *Edit;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *sendButton;

    void setupUi(QWidget *ChatWidget)
    {
        if (ChatWidget->objectName().isEmpty())
            ChatWidget->setObjectName(QString::fromUtf8("ChatWidget"));
        ChatWidget->resize(400, 490);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ChatWidget->sizePolicy().hasHeightForWidth());
        ChatWidget->setSizePolicy(sizePolicy);
        ChatWidget->setMinimumSize(QSize(400, 490));
        verticalLayout_2 = new QVBoxLayout(ChatWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget = new QWidget(ChatWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(0, 70));
        widget->setMaximumSize(QSize(16777215, 100));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMinimumSize(QSize(140, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(15);
        label->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        userNameLabel = new QLabel(widget);
        userNameLabel->setObjectName(QString::fromUtf8("userNameLabel"));
        sizePolicy.setHeightForWidth(userNameLabel->sizePolicy().hasHeightForWidth());
        userNameLabel->setSizePolicy(sizePolicy);
        userNameLabel->setMinimumSize(QSize(131, 0));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(14);
        userNameLabel->setFont(font1);

        formLayout->setWidget(0, QFormLayout::FieldRole, userNameLabel);

        targetNameComboBox = new QComboBox(widget);
        targetNameComboBox->setObjectName(QString::fromUtf8("targetNameComboBox"));
        targetNameComboBox->setMinimumSize(QSize(131, 0));
        targetNameComboBox->setEditable(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, targetNameComboBox);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMinimumSize(QSize(140, 0));
        label_2->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Maximum);

        formLayout->setItem(1, QFormLayout::SpanningRole, verticalSpacer);


        verticalLayout_2->addWidget(widget);

        Browser = new QTextBrowser(ChatWidget);
        Browser->setObjectName(QString::fromUtf8("Browser"));

        verticalLayout_2->addWidget(Browser);

        Edit = new QTextEdit(ChatWidget);
        Edit->setObjectName(QString::fromUtf8("Edit"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Edit->sizePolicy().hasHeightForWidth());
        Edit->setSizePolicy(sizePolicy2);
        Edit->setMaximumSize(QSize(16777215, 130));

        verticalLayout_2->addWidget(Edit);

        widget_4 = new QWidget(ChatWidget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(289, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        sendButton = new QPushButton(widget_4);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        QFont font2;
        font2.setPointSize(11);
        sendButton->setFont(font2);

        horizontalLayout_3->addWidget(sendButton);


        verticalLayout_2->addWidget(widget_4);


        retranslateUi(ChatWidget);

        QMetaObject::connectSlotsByName(ChatWidget);
    } // setupUi

    void retranslateUi(QWidget *ChatWidget)
    {
        ChatWidget->setWindowTitle(QCoreApplication::translate("ChatWidget", "AirChat", nullptr));
#if QT_CONFIG(statustip)
        ChatWidget->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        label->setText(QCoreApplication::translate("ChatWidget", "Your Nickname: ", nullptr));
        userNameLabel->setText(QCoreApplication::translate("ChatWidget", "Your Nickname: ", nullptr));
        label_2->setText(QCoreApplication::translate("ChatWidget", "Send Message to: ", nullptr));
        sendButton->setText(QCoreApplication::translate("ChatWidget", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChatWidget: public Ui_ChatWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATWIDGET_H
