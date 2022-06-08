/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "gui/AddressBookFrame.h"
#include "gui/OverviewFrame.h"
#include "gui/ReceiveFrame.h"
#include "gui/SendFrame.h"
#include "gui/TransactionsFrame.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *m_overviewAction;
    QAction *m_sendAction;
    QAction *m_receiveAction;
    QAction *m_transactionsAction;
    QAction *m_exitAction;
    QAction *m_addressBookAction;
    QAction *m_createWalletAction;
    QAction *m_openWalletAction;
    QAction *m_encryptWalletAction;
    QAction *m_changePasswordAction;
    QAction *m_aboutCryptonoteAction;
    QAction *m_aboutQtAction;
    QAction *m_backupWalletAction;
    QAction *m_startOnLoginAction;
    QAction *m_minimizeToTrayAction;
    QAction *m_closeToTrayAction;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    WalletGui::OverviewFrame *m_overviewFrame;
    WalletGui::SendFrame *m_sendFrame;
    WalletGui::ReceiveFrame *m_receiveFrame;
    WalletGui::TransactionsFrame *m_transactionsFrame;
    WalletGui::AddressBookFrame *m_addressBookFrame;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuSettings;
    QMenu *menuHelp;
    QToolBar *toolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(920, 600);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(0, 0));
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/cryptonote"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        m_overviewAction = new QAction(MainWindow);
        m_overviewAction->setObjectName(QString::fromUtf8("m_overviewAction"));
        m_overviewAction->setCheckable(true);
        m_overviewAction->setEnabled(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/overview"), QSize(), QIcon::Normal, QIcon::Off);
        m_overviewAction->setIcon(icon1);
        m_sendAction = new QAction(MainWindow);
        m_sendAction->setObjectName(QString::fromUtf8("m_sendAction"));
        m_sendAction->setCheckable(true);
        m_sendAction->setEnabled(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/send"), QSize(), QIcon::Normal, QIcon::Off);
        m_sendAction->setIcon(icon2);
        m_receiveAction = new QAction(MainWindow);
        m_receiveAction->setObjectName(QString::fromUtf8("m_receiveAction"));
        m_receiveAction->setCheckable(true);
        m_receiveAction->setEnabled(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/receive"), QSize(), QIcon::Normal, QIcon::Off);
        m_receiveAction->setIcon(icon3);
        m_transactionsAction = new QAction(MainWindow);
        m_transactionsAction->setObjectName(QString::fromUtf8("m_transactionsAction"));
        m_transactionsAction->setCheckable(true);
        m_transactionsAction->setEnabled(true);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/transactions"), QSize(), QIcon::Normal, QIcon::Off);
        m_transactionsAction->setIcon(icon4);
        m_exitAction = new QAction(MainWindow);
        m_exitAction->setObjectName(QString::fromUtf8("m_exitAction"));
        m_exitAction->setEnabled(true);
        m_addressBookAction = new QAction(MainWindow);
        m_addressBookAction->setObjectName(QString::fromUtf8("m_addressBookAction"));
        m_addressBookAction->setCheckable(true);
        m_addressBookAction->setEnabled(true);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/address-book"), QSize(), QIcon::Normal, QIcon::Off);
        m_addressBookAction->setIcon(icon5);
        m_createWalletAction = new QAction(MainWindow);
        m_createWalletAction->setObjectName(QString::fromUtf8("m_createWalletAction"));
        m_createWalletAction->setEnabled(true);
        m_openWalletAction = new QAction(MainWindow);
        m_openWalletAction->setObjectName(QString::fromUtf8("m_openWalletAction"));
        m_openWalletAction->setEnabled(true);
        m_encryptWalletAction = new QAction(MainWindow);
        m_encryptWalletAction->setObjectName(QString::fromUtf8("m_encryptWalletAction"));
        m_encryptWalletAction->setEnabled(true);
        m_changePasswordAction = new QAction(MainWindow);
        m_changePasswordAction->setObjectName(QString::fromUtf8("m_changePasswordAction"));
        m_changePasswordAction->setEnabled(true);
        m_aboutCryptonoteAction = new QAction(MainWindow);
        m_aboutCryptonoteAction->setObjectName(QString::fromUtf8("m_aboutCryptonoteAction"));
        m_aboutCryptonoteAction->setEnabled(true);
        m_aboutQtAction = new QAction(MainWindow);
        m_aboutQtAction->setObjectName(QString::fromUtf8("m_aboutQtAction"));
        m_aboutQtAction->setEnabled(true);
        m_backupWalletAction = new QAction(MainWindow);
        m_backupWalletAction->setObjectName(QString::fromUtf8("m_backupWalletAction"));
        m_backupWalletAction->setEnabled(true);
        m_startOnLoginAction = new QAction(MainWindow);
        m_startOnLoginAction->setObjectName(QString::fromUtf8("m_startOnLoginAction"));
        m_startOnLoginAction->setCheckable(true);
        m_minimizeToTrayAction = new QAction(MainWindow);
        m_minimizeToTrayAction->setObjectName(QString::fromUtf8("m_minimizeToTrayAction"));
        m_minimizeToTrayAction->setCheckable(true);
        m_closeToTrayAction = new QAction(MainWindow);
        m_closeToTrayAction->setObjectName(QString::fromUtf8("m_closeToTrayAction"));
        m_closeToTrayAction->setCheckable(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        m_overviewFrame = new WalletGui::OverviewFrame(centralwidget);
        m_overviewFrame->setObjectName(QString::fromUtf8("m_overviewFrame"));
        m_overviewFrame->setFrameShape(QFrame::NoFrame);
        m_overviewFrame->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(m_overviewFrame);

        m_sendFrame = new WalletGui::SendFrame(centralwidget);
        m_sendFrame->setObjectName(QString::fromUtf8("m_sendFrame"));
        m_sendFrame->setFrameShape(QFrame::NoFrame);
        m_sendFrame->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(m_sendFrame);

        m_receiveFrame = new WalletGui::ReceiveFrame(centralwidget);
        m_receiveFrame->setObjectName(QString::fromUtf8("m_receiveFrame"));
        m_receiveFrame->setFrameShape(QFrame::NoFrame);
        m_receiveFrame->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(m_receiveFrame);

        m_transactionsFrame = new WalletGui::TransactionsFrame(centralwidget);
        m_transactionsFrame->setObjectName(QString::fromUtf8("m_transactionsFrame"));
        m_transactionsFrame->setFrameShape(QFrame::NoFrame);
        m_transactionsFrame->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(m_transactionsFrame);

        m_addressBookFrame = new WalletGui::AddressBookFrame(centralwidget);
        m_addressBookFrame->setObjectName(QString::fromUtf8("m_addressBookFrame"));
        m_addressBookFrame->setFrameShape(QFrame::NoFrame);
        m_addressBookFrame->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(m_addressBookFrame);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 920, 27));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuSettings = new QMenu(menubar);
        menuSettings->setObjectName(QString::fromUtf8("menuSettings"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menubar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setMovable(false);
        toolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuSettings->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(m_createWalletAction);
        menuFile->addAction(m_openWalletAction);
        menuFile->addAction(m_backupWalletAction);
        menuFile->addAction(m_exitAction);
        menuSettings->addAction(m_encryptWalletAction);
        menuSettings->addAction(m_changePasswordAction);
        menuSettings->addSeparator();
        menuSettings->addAction(m_startOnLoginAction);
        menuSettings->addAction(m_minimizeToTrayAction);
        menuSettings->addAction(m_closeToTrayAction);
        menuHelp->addAction(m_aboutCryptonoteAction);
        menuHelp->addAction(m_aboutQtAction);
        toolBar->addAction(m_overviewAction);
        toolBar->addAction(m_sendAction);
        toolBar->addAction(m_receiveAction);
        toolBar->addAction(m_transactionsAction);
        toolBar->addAction(m_addressBookAction);

        retranslateUi(MainWindow);
        QObject::connect(m_overviewAction, SIGNAL(toggled(bool)), m_overviewFrame, SLOT(setVisible(bool)));
        QObject::connect(m_sendAction, SIGNAL(toggled(bool)), m_sendFrame, SLOT(setVisible(bool)));
        QObject::connect(m_receiveAction, SIGNAL(toggled(bool)), m_receiveFrame, SLOT(setVisible(bool)));
        QObject::connect(m_transactionsAction, SIGNAL(toggled(bool)), m_transactionsFrame, SLOT(setVisible(bool)));
        QObject::connect(m_addressBookAction, SIGNAL(toggled(bool)), m_addressBookFrame, SLOT(setVisible(bool)));
        QObject::connect(m_createWalletAction, SIGNAL(triggered()), MainWindow, SLOT(createWallet()));
        QObject::connect(m_openWalletAction, SIGNAL(triggered()), MainWindow, SLOT(openWallet()));
        QObject::connect(m_encryptWalletAction, SIGNAL(triggered()), MainWindow, SLOT(encryptWallet()));
        QObject::connect(m_changePasswordAction, SIGNAL(triggered()), MainWindow, SLOT(encryptWallet()));
        QObject::connect(m_aboutQtAction, SIGNAL(triggered()), MainWindow, SLOT(aboutQt()));
        QObject::connect(m_backupWalletAction, SIGNAL(triggered()), MainWindow, SLOT(backupWallet()));
        QObject::connect(m_aboutCryptonoteAction, SIGNAL(triggered()), MainWindow, SLOT(about()));
        QObject::connect(m_startOnLoginAction, SIGNAL(triggered(bool)), MainWindow, SLOT(setStartOnLogin(bool)));
        QObject::connect(m_minimizeToTrayAction, SIGNAL(triggered(bool)), MainWindow, SLOT(setMinimizeToTray(bool)));
        QObject::connect(m_closeToTrayAction, SIGNAL(triggered(bool)), MainWindow, SLOT(setCloseToTray(bool)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        m_overviewAction->setText(QApplication::translate("MainWindow", "Overview", nullptr));
        m_sendAction->setText(QApplication::translate("MainWindow", "Send", nullptr));
        m_receiveAction->setText(QApplication::translate("MainWindow", "Receive", nullptr));
        m_transactionsAction->setText(QApplication::translate("MainWindow", "Transactions", nullptr));
        m_exitAction->setText(QApplication::translate("MainWindow", "Exit", nullptr));
#ifndef QT_NO_SHORTCUT
        m_exitAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        m_addressBookAction->setText(QApplication::translate("MainWindow", "Address Book", nullptr));
        m_createWalletAction->setText(QApplication::translate("MainWindow", "Create wallet", nullptr));
        m_openWalletAction->setText(QApplication::translate("MainWindow", "Open wallet", nullptr));
        m_encryptWalletAction->setText(QApplication::translate("MainWindow", "Encrypt wallet", nullptr));
        m_changePasswordAction->setText(QApplication::translate("MainWindow", "Change password", nullptr));
#ifndef QT_NO_TOOLTIP
        m_changePasswordAction->setToolTip(QApplication::translate("MainWindow", "Change password", nullptr));
#endif // QT_NO_TOOLTIP
        m_aboutCryptonoteAction->setText(QApplication::translate("MainWindow", "About", nullptr));
        m_aboutQtAction->setText(QApplication::translate("MainWindow", "About Qt", nullptr));
        m_backupWalletAction->setText(QApplication::translate("MainWindow", "Backup wallet", nullptr));
        m_startOnLoginAction->setText(QApplication::translate("MainWindow", "Start on system login", nullptr));
        m_minimizeToTrayAction->setText(QApplication::translate("MainWindow", "Minimize to tray", nullptr));
        m_closeToTrayAction->setText(QApplication::translate("MainWindow", "Close to tray", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuSettings->setTitle(QApplication::translate("MainWindow", "Settings", nullptr));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
