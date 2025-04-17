/********************************************************************************
** Form generated from reading UI file 'ChatMainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATMAINWINDOW_H
#define UI_CHATMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatMainWindow
{
public:
    QAction *actionAirChat;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListWidget *listWidgetFriend;
    QPushButton *ButtonAddFriend;
    QStackedWidget *stackedWidget;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ChatMainWindow)
    {
        if (ChatMainWindow->objectName().isEmpty())
            ChatMainWindow->setObjectName(QString::fromUtf8("ChatMainWindow"));
        ChatMainWindow->resize(620, 580);
        ChatMainWindow->setMinimumSize(QSize(620, 580));
        ChatMainWindow->setMaximumSize(QSize(620, 580));
        QFont font;
        font.setPointSize(10);
        ChatMainWindow->setFont(font);
        actionAirChat = new QAction(ChatMainWindow);
        actionAirChat->setObjectName(QString::fromUtf8("actionAirChat"));
        actionAirChat->setFont(font);
        centralwidget = new QWidget(ChatMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(150, 16777215));
        QFont font1;
        font1.setPointSize(14);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        listWidgetFriend = new QListWidget(centralwidget);
        listWidgetFriend->setObjectName(QString::fromUtf8("listWidgetFriend"));
        listWidgetFriend->setMinimumSize(QSize(150, 0));
        listWidgetFriend->setMaximumSize(QSize(150, 16777215));

        verticalLayout->addWidget(listWidgetFriend);

        ButtonAddFriend = new QPushButton(centralwidget);
        ButtonAddFriend->setObjectName(QString::fromUtf8("ButtonAddFriend"));
        ButtonAddFriend->setMinimumSize(QSize(0, 30));
        ButtonAddFriend->setMaximumSize(QSize(150, 16777215));
        QFont font2;
        font2.setPointSize(12);
        ButtonAddFriend->setFont(font2);

        verticalLayout->addWidget(ButtonAddFriend);


        horizontalLayout->addLayout(verticalLayout);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        stackedWidget->setMinimumSize(QSize(450, 0));
        stackedWidget->setFrameShape(QFrame::Box);

        horizontalLayout->addWidget(stackedWidget);

        ChatMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ChatMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 620, 18));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        ChatMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ChatMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ChatMainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(actionAirChat);

        retranslateUi(ChatMainWindow);

        QMetaObject::connectSlotsByName(ChatMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ChatMainWindow)
    {
        ChatMainWindow->setWindowTitle(QCoreApplication::translate("ChatMainWindow", "AirChat", nullptr));
        actionAirChat->setText(QCoreApplication::translate("ChatMainWindow", "AirChat", nullptr));
        label->setText(QCoreApplication::translate("ChatMainWindow", "\345\245\275\345\217\213\345\210\227\350\241\250", nullptr));
        ButtonAddFriend->setText(QCoreApplication::translate("ChatMainWindow", "\346\267\273\345\212\240\345\245\275\345\217\213", nullptr));
        menu->setTitle(QCoreApplication::translate("ChatMainWindow", "\345\205\263\344\272\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChatMainWindow: public Ui_ChatMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATMAINWINDOW_H
