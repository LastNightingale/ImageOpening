/********************************************************************************
** Form generated from reading UI file 'openfiles.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENFILES_H
#define UI_OPENFILES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OpenFiles
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *OpenFiles)
    {
        if (OpenFiles->objectName().isEmpty())
            OpenFiles->setObjectName(QString::fromUtf8("OpenFiles"));
        OpenFiles->resize(800, 600);
        centralwidget = new QWidget(OpenFiles);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        OpenFiles->setCentralWidget(centralwidget);
        menubar = new QMenuBar(OpenFiles);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        OpenFiles->setMenuBar(menubar);
        statusbar = new QStatusBar(OpenFiles);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        OpenFiles->setStatusBar(statusbar);

        retranslateUi(OpenFiles);

        QMetaObject::connectSlotsByName(OpenFiles);
    } // setupUi

    void retranslateUi(QMainWindow *OpenFiles)
    {
        OpenFiles->setWindowTitle(QCoreApplication::translate("OpenFiles", "OpenFiles", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OpenFiles: public Ui_OpenFiles {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENFILES_H
