/********************************************************************************
** Form generated from reading UI file 'primeraqt.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRIMERAQT_H
#define UI_PRIMERAQT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PrimeraQt
{
public:
    QWidget *centralWidget;
    QPushButton *btn_user;
    QPushButton *btn_user_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QMainWindow *PrimeraQt)
    {
        if (PrimeraQt->objectName().isEmpty())
            PrimeraQt->setObjectName(QStringLiteral("PrimeraQt"));
        PrimeraQt->resize(742, 303);
        QIcon icon;
        icon.addFile(QStringLiteral(":/byte_switcher_icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        PrimeraQt->setWindowIcon(icon);
        PrimeraQt->setAutoFillBackground(false);
        PrimeraQt->setStyleSheet(QLatin1String("background: #080f2a;\n"
"color: #ffffff;"));
        centralWidget = new QWidget(PrimeraQt);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        btn_user = new QPushButton(centralWidget);
        btn_user->setObjectName(QStringLiteral("btn_user"));
        btn_user->setGeometry(QRect(20, 230, 219, 55));
        btn_user->setMinimumSize(QSize(219, 55));
        btn_user->setMaximumSize(QSize(219, 55));
        btn_user->setContextMenuPolicy(Qt::DefaultContextMenu);
        btn_user->setAutoFillBackground(false);
        btn_user->setStyleSheet(QLatin1String("background-image: url(:/btn_background.png);\n"
"font: bold 12pt \"DejaVu Sans\";\n"
"color: #ffffff;\n"
"border: none;"));
        btn_user_2 = new QPushButton(centralWidget);
        btn_user_2->setObjectName(QStringLiteral("btn_user_2"));
        btn_user_2->setGeometry(QRect(270, 230, 219, 55));
        btn_user_2->setMinimumSize(QSize(219, 55));
        btn_user_2->setMaximumSize(QSize(219, 55));
        btn_user_2->setContextMenuPolicy(Qt::DefaultContextMenu);
        btn_user_2->setAutoFillBackground(false);
        btn_user_2->setStyleSheet(QLatin1String("background-image: url(:/btn_background.png);\n"
"font: bold 12pt \"DejaVu Sans\";\n"
"color: #ffffff;\n"
"border: none;"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 160, 551, 41));
        label->setStyleSheet(QStringLiteral("font: 14pt \"Sans Serif\";"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 50, 421, 121));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/byte_switcher_logo.png")));
        label_2->setScaledContents(true);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(420, 0, 321, 231));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/background_top_right.png")));
        label_3->setScaledContents(true);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 190, 551, 41));
        label_4->setStyleSheet(QStringLiteral("font: 14pt \"Sans Serif\";"));
        PrimeraQt->setCentralWidget(centralWidget);
        label_3->raise();
        btn_user->raise();
        btn_user_2->raise();
        label->raise();
        label_2->raise();
        label_4->raise();

        retranslateUi(PrimeraQt);

        QMetaObject::connectSlotsByName(PrimeraQt);
    } // setupUi

    void retranslateUi(QMainWindow *PrimeraQt)
    {
        PrimeraQt->setWindowTitle(QApplication::translate("PrimeraQt", "Bytelchus switcher", Q_NULLPTR));
        btn_user->setText(QApplication::translate("PrimeraQt", "User Mode", Q_NULLPTR));
        btn_user_2->setText(QApplication::translate("PrimeraQt", "Developer Style", Q_NULLPTR));
        label->setText(QApplication::translate("PrimeraQt", "<html><head/><body><p>Automate the installation of tools in your <span style=\" font-weight:600;\">GNU / Linux</span>.</p></body></html>", Q_NULLPTR));
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QApplication::translate("PrimeraQt", "<html><head/><body><p>'<span style=\" color:#41cd52;\">switch</span>' between different modes:</p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PrimeraQt: public Ui_PrimeraQt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRIMERAQT_H
