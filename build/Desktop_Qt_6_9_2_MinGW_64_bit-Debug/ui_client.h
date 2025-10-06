/********************************************************************************
** Form generated from reading UI file 'client.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT_H
#define UI_CLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Client
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QLabel *title;
    QTabWidget *tabWidget;
    QWidget *ajouterclient;
    QWidget *widget_2;
    QLabel *label_5;
    QPushButton *bt;
    QPushButton *btnEdit;
    QPushButton *pushButton_3;
    QPushButton *btnadd;
    QTableWidget *tableClient;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_4;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QLabel *label_13;
    QWidget *tab;
    QWidget *widget_3;
    QLineEdit *lineEdit_5;
    QLabel *label_6;
    QTableWidget *tableClient_2;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QLabel *label_7;
    QLabel *label_14;
    QWidget *tab_3;
    QWidget *widget_9;
    QLabel *label_23;
    QLabel *label_25;
    QComboBox *comboBox_3;
    QLabel *label_24;
    QLabel *label_26;
    QLabel *label_31;
    QProgressBar *progressBar;
    QProgressBar *progressBar_2;
    QProgressBar *progressBar_3;
    QLabel *label_32;
    QLabel *label_34;
    QTableWidget *tableClient_3;
    QWidget *tab_2;
    QWidget *widget_7;
    QLabel *label_19;
    QLabel *label_20;
    QWidget *widget_8;
    QLabel *label_21;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QPushButton *pushButton_6;
    QLabel *label_22;
    QWidget *tab_5;
    QWidget *widget_4;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QWidget *widget_5;
    QLineEdit *lineEdit_6;
    QLabel *label_12;
    QLabel *label_15;
    QWidget *tab_4;
    QWidget *widget_6;
    QLabel *label_17;
    QLabel *label_18;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QLabel *label_16;
    QPushButton *pushButton_8;
    QTableWidget *tableClient_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Client)
    {
        if (Client->objectName().isEmpty())
            Client->setObjectName("Client");
        Client->resize(1403, 734);
        centralwidget = new QWidget(Client);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, -20, 1381, 711));
        widget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, \n"
"                                stop: 0 #F5E6D0, \n"
"                                stop: 0.6 #F5E6D0, \n"
"                                stop: 0.61 #5FC9C5, \n"
"                                stop: 1 #5FC9C5);\n"
"}"));
        title = new QLabel(widget);
        title->setObjectName("title");
        title->setGeometry(QRect(310, 30, 581, 51));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        title->setFont(font);
        title->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	color: rgb(44, 75, 116);\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, \n"
"                                stop: 0 #F8F0E0, \n"
"                                stop: 0.5 #F5EAD8, \n"
"                                stop: 1 #F2E4D0);\n"
"}"));
        title->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        tabWidget = new QTabWidget(widget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(90, 80, 1061, 561));
        tabWidget->setAutoFillBackground(false);
        tabWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(248, 240, 224);\n"
"color: rgb(6, 6, 6);"));
        tabWidget->setDocumentMode(false);
        tabWidget->setTabBarAutoHide(false);
        ajouterclient = new QWidget();
        ajouterclient->setObjectName("ajouterclient");
        widget_2 = new QWidget(ajouterclient);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(0, -20, 1101, 531));
        widget_2->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, \n"
"                                stop: 0 #F8F0E0, \n"
"                                stop: 0.5 #F5EAD8, \n"
"                                stop: 1 #F2E4D0);\n"
"}"));
        label_5 = new QLabel(widget_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(30, 10, 361, 41));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(44, 75, 116);\n"
"background-color: rgb(248, 240, 224);"));
        bt = new QPushButton(widget_2);
        bt->setObjectName("bt");
        bt->setGeometry(QRect(40, 480, 111, 29));
        bt->setStyleSheet(QString::fromUtf8("background-color: rgb(244, 80, 80);\n"
"color: rgb(255, 255, 255);"));
        btnEdit = new QPushButton(widget_2);
        btnEdit->setObjectName("btnEdit");
        btnEdit->setGeometry(QRect(190, 420, 111, 31));
        btnEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 123, 255);\n"
"color: rgb(255, 255, 255);\n"
""));
        pushButton_3 = new QPushButton(widget_2);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(190, 480, 111, 29));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(180, 180, 180);\n"
"color: rgb(255, 255, 255);"));
        btnadd = new QPushButton(widget_2);
        btnadd->setObjectName("btnadd");
        btnadd->setGeometry(QRect(40, 420, 111, 29));
        btnadd->setStyleSheet(QString::fromUtf8("background-color: rgb(40, 167, 69);\n"
"color: rgb(255, 255, 255);"));
        tableClient = new QTableWidget(widget_2);
        if (tableClient->columnCount() < 5)
            tableClient->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableClient->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableClient->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableClient->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableClient->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableClient->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (tableClient->rowCount() < 6)
            tableClient->setRowCount(6);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableClient->setVerticalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableClient->setVerticalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableClient->setVerticalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableClient->setVerticalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableClient->setVerticalHeaderItem(4, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableClient->setVerticalHeaderItem(5, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableClient->setItem(0, 0, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableClient->setItem(0, 1, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableClient->setItem(0, 2, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableClient->setItem(1, 0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableClient->setItem(1, 1, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableClient->setItem(1, 2, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableClient->setItem(2, 0, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableClient->setItem(2, 1, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableClient->setItem(2, 2, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableClient->setItem(3, 0, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableClient->setItem(3, 2, __qtablewidgetitem21);
        tableClient->setObjectName("tableClient");
        tableClient->setGeometry(QRect(360, 160, 681, 221));
        tableClient->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(3, 3, 3);"));
        tableClient->setSortingEnabled(true);
        groupBox = new QGroupBox(widget_2);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(40, 70, 271, 321));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(248, 248, 248);\n"
"color: rgb(6, 6, 6);\n"
"outline: none;"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("color: rgb(8, 8, 8);\n"
""));

        verticalLayout->addWidget(label);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName("lineEdit");

        verticalLayout->addWidget(lineEdit);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName("lineEdit_4");

        verticalLayout->addWidget(lineEdit_4);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName("lineEdit_3");

        verticalLayout->addWidget(lineEdit_3);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);

        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName("lineEdit_2");

        verticalLayout->addWidget(lineEdit_2);

        label_13 = new QLabel(widget_2);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(900, 20, 141, 91));
        label_13->setPixmap(QPixmap(QString::fromUtf8("../../Bureau/Capture d'\303\251cran 2025-10-02 202914.png")));
        label_13->setScaledContents(true);
        tabWidget->addTab(ajouterclient, QString());
        tab = new QWidget();
        tab->setObjectName("tab");
        widget_3 = new QWidget(tab);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(-10, -10, 1111, 551));
        widget_3->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, \n"
"                                stop: 0 #F8F0E0, \n"
"                                stop: 0.5 #F5EAD8, \n"
"                                stop: 1 #F2E4D0);\n"
"}"));
        lineEdit_5 = new QLineEdit(widget_3);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(280, 80, 401, 51));
        lineEdit_5->setStyleSheet(QString::fromUtf8("color: rgb(248, 248, 248);\n"
"background-color: rgb(248, 248, 248);\n"
"border: none;"));
        label_6 = new QLabel(widget_3);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(170, 80, 511, 51));
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgb(248, 248, 248);\n"
"color: rgb(34, 34, 34);"));
        tableClient_2 = new QTableWidget(widget_3);
        if (tableClient_2->columnCount() < 5)
            tableClient_2->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableClient_2->setHorizontalHeaderItem(0, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableClient_2->setHorizontalHeaderItem(1, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableClient_2->setHorizontalHeaderItem(2, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableClient_2->setHorizontalHeaderItem(3, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableClient_2->setHorizontalHeaderItem(4, __qtablewidgetitem26);
        if (tableClient_2->rowCount() < 6)
            tableClient_2->setRowCount(6);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableClient_2->setVerticalHeaderItem(0, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableClient_2->setVerticalHeaderItem(1, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableClient_2->setVerticalHeaderItem(2, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableClient_2->setVerticalHeaderItem(3, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableClient_2->setVerticalHeaderItem(4, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableClient_2->setVerticalHeaderItem(5, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableClient_2->setItem(0, 0, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableClient_2->setItem(0, 1, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tableClient_2->setItem(0, 2, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        tableClient_2->setItem(1, 0, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        tableClient_2->setItem(1, 1, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        tableClient_2->setItem(1, 2, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        tableClient_2->setItem(2, 0, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        tableClient_2->setItem(2, 1, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        tableClient_2->setItem(2, 2, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        tableClient_2->setItem(3, 0, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        tableClient_2->setItem(3, 2, __qtablewidgetitem43);
        tableClient_2->setObjectName("tableClient_2");
        tableClient_2->setGeometry(QRect(160, 150, 681, 221));
        tableClient_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(3, 3, 3);"));
        comboBox = new QComboBox(widget_3);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(690, 110, 82, 28));
        comboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        comboBox_2 = new QComboBox(widget_3);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(470, 400, 82, 28));
        comboBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_7 = new QLabel(widget_3);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(30, 20, 441, 41));
        label_7->setStyleSheet(QString::fromUtf8("font: 700 16pt \"Segoe UI\";\n"
"color: rgb(44, 75, 116);\n"
"background-color: rgb(248, 240, 224);"));
        label_14 = new QLabel(widget_3);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(910, 20, 141, 91));
        label_14->setPixmap(QPixmap(QString::fromUtf8("../../Bureau/Capture d'\303\251cran 2025-10-02 202914.png")));
        label_14->setScaledContents(true);
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        widget_9 = new QWidget(tab_3);
        widget_9->setObjectName("widget_9");
        widget_9->setGeometry(QRect(-10, -10, 1091, 541));
        label_23 = new QLabel(widget_9);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(40, 10, 441, 41));
        label_23->setStyleSheet(QString::fromUtf8("font: 700 16pt \"Segoe UI\";\n"
"color: rgb(44, 75, 116);\n"
"background-color: rgb(248, 240, 224);"));
        label_25 = new QLabel(widget_9);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(40, 70, 151, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setItalic(false);
        label_25->setFont(font1);
        label_25->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";\n"
"\n"
"color: rgb(44, 75, 116);\n"
"background-color: rgb(248, 240, 224);"));
        comboBox_3 = new QComboBox(widget_9);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName("comboBox_3");
        comboBox_3->setGeometry(QRect(130, 80, 91, 28));
        label_24 = new QLabel(widget_9);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(240, 390, 101, 20));
        label_26 = new QLabel(widget_9);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(240, 310, 131, 20));
        label_31 = new QLabel(widget_9);
        label_31->setObjectName("label_31");
        label_31->setGeometry(QRect(240, 240, 91, 20));
        progressBar = new QProgressBar(widget_9);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(80, 240, 118, 23));
        progressBar->setValue(24);
        progressBar_2 = new QProgressBar(widget_9);
        progressBar_2->setObjectName("progressBar_2");
        progressBar_2->setGeometry(QRect(80, 310, 118, 23));
        progressBar_2->setValue(24);
        progressBar_3 = new QProgressBar(widget_9);
        progressBar_3->setObjectName("progressBar_3");
        progressBar_3->setGeometry(QRect(80, 380, 118, 23));
        progressBar_3->setValue(24);
        label_32 = new QLabel(widget_9);
        label_32->setObjectName("label_32");
        label_32->setGeometry(QRect(70, 140, 201, 71));
        label_32->setStyleSheet(QString::fromUtf8("font: 700 16pt \"Segoe UI\";\n"
"color: rgb(44, 75, 116);\n"
"background-color: rgb(248, 240, 224);"));
        label_34 = new QLabel(widget_9);
        label_34->setObjectName("label_34");
        label_34->setGeometry(QRect(670, 140, 201, 71));
        label_34->setStyleSheet(QString::fromUtf8("font: 700 16pt \"Segoe UI\";\n"
"color: rgb(44, 75, 116);\n"
"background-color: rgb(248, 240, 224);"));
        tableClient_3 = new QTableWidget(widget_9);
        if (tableClient_3->columnCount() < 3)
            tableClient_3->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        tableClient_3->setHorizontalHeaderItem(0, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        tableClient_3->setHorizontalHeaderItem(1, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        tableClient_3->setHorizontalHeaderItem(2, __qtablewidgetitem46);
        if (tableClient_3->rowCount() < 6)
            tableClient_3->setRowCount(6);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        tableClient_3->setVerticalHeaderItem(0, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        tableClient_3->setVerticalHeaderItem(1, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        tableClient_3->setVerticalHeaderItem(2, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        tableClient_3->setVerticalHeaderItem(3, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        tableClient_3->setVerticalHeaderItem(4, __qtablewidgetitem51);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        tableClient_3->setVerticalHeaderItem(5, __qtablewidgetitem52);
        tableClient_3->setObjectName("tableClient_3");
        tableClient_3->setGeometry(QRect(560, 220, 411, 101));
        tableClient_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(3, 3, 3);"));
        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        widget_7 = new QWidget(tab_2);
        widget_7->setObjectName("widget_7");
        widget_7->setGeometry(QRect(0, -10, 1061, 541));
        label_19 = new QLabel(widget_7);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(900, 20, 141, 91));
        label_19->setPixmap(QPixmap(QString::fromUtf8("../../Bureau/Capture d'\303\251cran 2025-10-02 202914.png")));
        label_19->setScaledContents(true);
        label_20 = new QLabel(widget_7);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(20, 10, 441, 41));
        label_20->setStyleSheet(QString::fromUtf8("font: 700 16pt \"Segoe UI\";\n"
"color: rgb(44, 75, 116);\n"
"background-color: rgb(248, 240, 224);"));
        widget_8 = new QWidget(widget_7);
        widget_8->setObjectName("widget_8");
        widget_8->setGeometry(QRect(160, 90, 681, 381));
        widget_8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_21 = new QLabel(widget_8);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(10, 10, 191, 51));
        label_21->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";"));
        checkBox = new QCheckBox(widget_8);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(20, 70, 201, 25));
        checkBox_2 = new QCheckBox(widget_8);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setGeometry(QRect(20, 140, 92, 25));
        checkBox_3 = new QCheckBox(widget_8);
        checkBox_3->setObjectName("checkBox_3");
        checkBox_3->setGeometry(QRect(20, 210, 92, 25));
        pushButton_6 = new QPushButton(widget_8);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(260, 288, 151, 41));
        label_22 = new QLabel(widget_8);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(550, 20, 111, 121));
        label_22->setPixmap(QPixmap(QString::fromUtf8("../../Bureau/PDF_file_icon.svg")));
        label_22->setScaledContents(true);
        tabWidget->addTab(tab_2, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        widget_4 = new QWidget(tab_5);
        widget_4->setObjectName("widget_4");
        widget_4->setGeometry(QRect(-10, 0, 1081, 551));
        widget_4->setStyleSheet(QString::fromUtf8("background-color: rgb(248, 240, 224);"));
        label_8 = new QLabel(widget_4);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(30, 10, 361, 41));
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(44, 75, 116);\n"
"background-color: rgb(248, 240, 224);"));
        label_9 = new QLabel(widget_4);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(60, 69, 191, 41));
        label_10 = new QLabel(widget_4);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(410, 60, 321, 41));
        label_10->setFont(font1);
        label_10->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";\n"
"\n"
"color: rgb(44, 75, 116);\n"
"background-color: rgb(248, 240, 224);"));
        label_11 = new QLabel(widget_4);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(40, 290, 371, 61));
        label_11->setStyleSheet(QString::fromUtf8("\n"
"font: 700 10pt \"Segoe UI\";\n"
"\n"
"color: rgb(44, 75, 116);"));
        widget_5 = new QWidget(widget_4);
        widget_5->setObjectName("widget_5");
        widget_5->setGeometry(QRect(40, 350, 541, 141));
        lineEdit_6 = new QLineEdit(widget_5);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setGeometry(QRect(0, 0, 541, 141));
        label_12 = new QLabel(widget_4);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(900, 10, 141, 91));
        label_12->setPixmap(QPixmap(QString::fromUtf8("../../Bureau/Capture d'\303\251cran 2025-10-02 202914.png")));
        label_12->setScaledContents(true);
        label_15 = new QLabel(widget_4);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(770, 160, 101, 20));
        tabWidget->addTab(tab_5, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        widget_6 = new QWidget(tab_4);
        widget_6->setObjectName("widget_6");
        widget_6->setGeometry(QRect(-20, -10, 1111, 551));
        widget_6->setStyleSheet(QString::fromUtf8("background-color: rgb(248, 240, 224);"));
        label_17 = new QLabel(widget_6);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(30, 10, 441, 41));
        label_17->setStyleSheet(QString::fromUtf8("font: 700 16pt \"Segoe UI\";\n"
"color: rgb(44, 75, 116);\n"
"background-color: rgb(248, 240, 224);"));
        label_18 = new QLabel(widget_6);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(60, 380, 231, 20));
        pushButton_2 = new QPushButton(widget_6);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(110, 340, 201, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(40, 167, 69);\n"
"color: rgb(255, 255, 255);"));
        pushButton_5 = new QPushButton(widget_6);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(360, 340, 141, 41));
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(180, 180, 180);\n"
"color: rgb(255, 255, 255);"));
        label_16 = new QLabel(widget_6);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(910, 20, 141, 91));
        label_16->setPixmap(QPixmap(QString::fromUtf8("../../Bureau/Capture d'\303\251cran 2025-10-02 202914.png")));
        label_16->setScaledContents(true);
        pushButton_8 = new QPushButton(widget_6);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(740, 290, 90, 29));
        tableClient_4 = new QTableWidget(widget_6);
        if (tableClient_4->columnCount() < 6)
            tableClient_4->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        tableClient_4->setHorizontalHeaderItem(0, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        tableClient_4->setHorizontalHeaderItem(1, __qtablewidgetitem54);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        tableClient_4->setHorizontalHeaderItem(2, __qtablewidgetitem55);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        tableClient_4->setHorizontalHeaderItem(3, __qtablewidgetitem56);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        tableClient_4->setHorizontalHeaderItem(4, __qtablewidgetitem57);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        tableClient_4->setHorizontalHeaderItem(5, __qtablewidgetitem58);
        if (tableClient_4->rowCount() < 6)
            tableClient_4->setRowCount(6);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        tableClient_4->setVerticalHeaderItem(0, __qtablewidgetitem59);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        tableClient_4->setVerticalHeaderItem(1, __qtablewidgetitem60);
        QTableWidgetItem *__qtablewidgetitem61 = new QTableWidgetItem();
        tableClient_4->setVerticalHeaderItem(2, __qtablewidgetitem61);
        QTableWidgetItem *__qtablewidgetitem62 = new QTableWidgetItem();
        tableClient_4->setVerticalHeaderItem(3, __qtablewidgetitem62);
        QTableWidgetItem *__qtablewidgetitem63 = new QTableWidgetItem();
        tableClient_4->setVerticalHeaderItem(4, __qtablewidgetitem63);
        QTableWidgetItem *__qtablewidgetitem64 = new QTableWidgetItem();
        tableClient_4->setVerticalHeaderItem(5, __qtablewidgetitem64);
        QTableWidgetItem *__qtablewidgetitem65 = new QTableWidgetItem();
        tableClient_4->setItem(0, 0, __qtablewidgetitem65);
        QTableWidgetItem *__qtablewidgetitem66 = new QTableWidgetItem();
        tableClient_4->setItem(0, 1, __qtablewidgetitem66);
        QTableWidgetItem *__qtablewidgetitem67 = new QTableWidgetItem();
        tableClient_4->setItem(0, 2, __qtablewidgetitem67);
        QTableWidgetItem *__qtablewidgetitem68 = new QTableWidgetItem();
        tableClient_4->setItem(1, 0, __qtablewidgetitem68);
        QTableWidgetItem *__qtablewidgetitem69 = new QTableWidgetItem();
        tableClient_4->setItem(1, 1, __qtablewidgetitem69);
        QTableWidgetItem *__qtablewidgetitem70 = new QTableWidgetItem();
        tableClient_4->setItem(1, 2, __qtablewidgetitem70);
        QTableWidgetItem *__qtablewidgetitem71 = new QTableWidgetItem();
        tableClient_4->setItem(2, 0, __qtablewidgetitem71);
        QTableWidgetItem *__qtablewidgetitem72 = new QTableWidgetItem();
        tableClient_4->setItem(2, 1, __qtablewidgetitem72);
        QTableWidgetItem *__qtablewidgetitem73 = new QTableWidgetItem();
        tableClient_4->setItem(2, 2, __qtablewidgetitem73);
        QTableWidgetItem *__qtablewidgetitem74 = new QTableWidgetItem();
        tableClient_4->setItem(3, 0, __qtablewidgetitem74);
        QTableWidgetItem *__qtablewidgetitem75 = new QTableWidgetItem();
        tableClient_4->setItem(3, 2, __qtablewidgetitem75);
        tableClient_4->setObjectName("tableClient_4");
        tableClient_4->setGeometry(QRect(60, 60, 791, 221));
        tableClient_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(3, 3, 3);"));
        tabWidget->addTab(tab_4, QString());
        Client->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Client);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1403, 25));
        Client->setMenuBar(menubar);
        statusbar = new QStatusBar(Client);
        statusbar->setObjectName("statusbar");
        Client->setStatusBar(statusbar);

        retranslateUi(Client);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Client);
    } // setupUi

    void retranslateUi(QMainWindow *Client)
    {
        Client->setWindowTitle(QCoreApplication::translate("Client", "MainWindow", nullptr));
        title->setText(QCoreApplication::translate("Client", "                   GESTION DES  CLIENTS", nullptr));
        label_5->setText(QCoreApplication::translate("Client", "Ajouter /Modifier un client", nullptr));
        bt->setText(QCoreApplication::translate("Client", "Supprimer", nullptr));
        btnEdit->setText(QCoreApplication::translate("Client", "Modifier ", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Client", "reinitialiser", nullptr));
        btnadd->setText(QCoreApplication::translate("Client", "Ajouter", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableClient->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Client", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableClient->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Client", "Nom", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableClient->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Client", "Prenom", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableClient->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Client", "Email", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableClient->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Client", "Telephone", nullptr));

        const bool __sortingEnabled = tableClient->isSortingEnabled();
        tableClient->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem5 = tableClient->item(0, 0);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("Client", "10", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableClient->item(0, 1);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("Client", "x", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableClient->item(0, 2);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("Client", "jg", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableClient->item(1, 0);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("Client", "8", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableClient->item(1, 1);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("Client", "y", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableClient->item(1, 2);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("Client", "jyvy", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableClient->item(2, 0);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("Client", "7", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableClient->item(2, 1);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("Client", "z", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableClient->item(2, 2);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("Client", "pp", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableClient->item(3, 0);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("Client", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableClient->item(3, 2);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("Client", "mm", nullptr));
        tableClient->setSortingEnabled(__sortingEnabled);

        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("Client", "Nom", nullptr));
        label_2->setText(QCoreApplication::translate("Client", "Prenom", nullptr));
        label_3->setText(QCoreApplication::translate("Client", "email", nullptr));
        label_4->setText(QCoreApplication::translate("Client", "telephone", nullptr));
        label_13->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(ajouterclient), QCoreApplication::translate("Client", "ajouter client", nullptr));
        label_6->setText(QCoreApplication::translate("Client", "\360\237\224\215Rechercher....", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableClient_2->horizontalHeaderItem(0);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("Client", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableClient_2->horizontalHeaderItem(1);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("Client", "Nom", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableClient_2->horizontalHeaderItem(2);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("Client", "Prenom", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableClient_2->horizontalHeaderItem(3);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("Client", "Email", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableClient_2->horizontalHeaderItem(4);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("Client", "Telephone", nullptr));

        const bool __sortingEnabled1 = tableClient_2->isSortingEnabled();
        tableClient_2->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem21 = tableClient_2->item(0, 0);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("Client", "10", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tableClient_2->item(0, 1);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("Client", "x", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tableClient_2->item(0, 2);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("Client", "jg", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = tableClient_2->item(1, 0);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("Client", "8", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = tableClient_2->item(1, 1);
        ___qtablewidgetitem25->setText(QCoreApplication::translate("Client", "y", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = tableClient_2->item(1, 2);
        ___qtablewidgetitem26->setText(QCoreApplication::translate("Client", "jyvy", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = tableClient_2->item(2, 0);
        ___qtablewidgetitem27->setText(QCoreApplication::translate("Client", "7", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = tableClient_2->item(2, 1);
        ___qtablewidgetitem28->setText(QCoreApplication::translate("Client", "z", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = tableClient_2->item(2, 2);
        ___qtablewidgetitem29->setText(QCoreApplication::translate("Client", "pp", nullptr));
        QTableWidgetItem *___qtablewidgetitem30 = tableClient_2->item(3, 0);
        ___qtablewidgetitem30->setText(QCoreApplication::translate("Client", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem31 = tableClient_2->item(3, 2);
        ___qtablewidgetitem31->setText(QCoreApplication::translate("Client", "mm", nullptr));
        tableClient_2->setSortingEnabled(__sortingEnabled1);

        comboBox->setItemText(0, QCoreApplication::translate("Client", "nom", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Client", "id", nullptr));

        comboBox_2->setItemText(0, QCoreApplication::translate("Client", "nom", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("Client", "id", nullptr));

        label_7->setText(QCoreApplication::translate("Client", "Rechercher Un Client", nullptr));
        label_14->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Client", "tri/recherche", nullptr));
        label_23->setText(QCoreApplication::translate("Client", "Statistique Abonnement", nullptr));
        label_25->setText(QCoreApplication::translate("Client", "PERIODE:", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("Client", "semaine", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("Client", "mois", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("Client", "annee", nullptr));

        label_24->setText(QCoreApplication::translate("Client", "CLIENT BASIC", nullptr));
        label_26->setText(QCoreApplication::translate("Client", "CLIENT PREMIEUM", nullptr));
        label_31->setText(QCoreApplication::translate("Client", "CLIENT VIP ", nullptr));
        label_32->setText(QCoreApplication::translate("Client", "R\303\211PARTITION:", nullptr));
        label_34->setText(QCoreApplication::translate("Client", "CHIFFRES:", nullptr));
        QTableWidgetItem *___qtablewidgetitem32 = tableClient_3->horizontalHeaderItem(0);
        ___qtablewidgetitem32->setText(QCoreApplication::translate("Client", "VIP", nullptr));
        QTableWidgetItem *___qtablewidgetitem33 = tableClient_3->horizontalHeaderItem(1);
        ___qtablewidgetitem33->setText(QCoreApplication::translate("Client", "PREMIEUM", nullptr));
        QTableWidgetItem *___qtablewidgetitem34 = tableClient_3->horizontalHeaderItem(2);
        ___qtablewidgetitem34->setText(QCoreApplication::translate("Client", "BASIC", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("Client", "statistique", nullptr));
        label_19->setText(QString());
        label_20->setText(QCoreApplication::translate("Client", "Export PDF", nullptr));
        label_21->setText(QCoreApplication::translate("Client", "Type De Document:", nullptr));
        checkBox->setText(QCoreApplication::translate("Client", "tab de classification client", nullptr));
        checkBox_2->setText(QCoreApplication::translate("Client", "tab clients", nullptr));
        checkBox_3->setText(QCoreApplication::translate("Client", "statistique", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Client", "generer le pdf", nullptr));
        label_22->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Client", "export pdf", nullptr));
        label_8->setText(QCoreApplication::translate("Client", "Feedback", nullptr));
        label_9->setText(QString());
        label_10->setText(QCoreApplication::translate("Client", "DONNER VOTRE AVIS:", nullptr));
        label_11->setText(QCoreApplication::translate("Client", "AJOUTER UN COMMENTAIRE:", nullptr));
        label_12->setText(QString());
        label_15->setText(QCoreApplication::translate("Client", "0/5", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("Client", "feedback", nullptr));
        label_17->setText(QCoreApplication::translate("Client", "Classificaation Des Clients", nullptr));
        label_18->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("Client", "Classifier selon labonnement", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Client", "reinitialisation", nullptr));
        label_16->setText(QString());
        pushButton_8->setText(QCoreApplication::translate("Client", "GUIDE", nullptr));
        QTableWidgetItem *___qtablewidgetitem35 = tableClient_4->horizontalHeaderItem(0);
        ___qtablewidgetitem35->setText(QCoreApplication::translate("Client", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem36 = tableClient_4->horizontalHeaderItem(1);
        ___qtablewidgetitem36->setText(QCoreApplication::translate("Client", "Nom", nullptr));
        QTableWidgetItem *___qtablewidgetitem37 = tableClient_4->horizontalHeaderItem(2);
        ___qtablewidgetitem37->setText(QCoreApplication::translate("Client", "Prenom", nullptr));
        QTableWidgetItem *___qtablewidgetitem38 = tableClient_4->horizontalHeaderItem(3);
        ___qtablewidgetitem38->setText(QCoreApplication::translate("Client", "NOMBRE COURS", nullptr));
        QTableWidgetItem *___qtablewidgetitem39 = tableClient_4->horizontalHeaderItem(4);
        ___qtablewidgetitem39->setText(QCoreApplication::translate("Client", "NOMBRE ACTIVITE", nullptr));
        QTableWidgetItem *___qtablewidgetitem40 = tableClient_4->horizontalHeaderItem(5);
        ___qtablewidgetitem40->setText(QCoreApplication::translate("Client", "TYPE", nullptr));

        const bool __sortingEnabled2 = tableClient_4->isSortingEnabled();
        tableClient_4->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem41 = tableClient_4->item(0, 0);
        ___qtablewidgetitem41->setText(QCoreApplication::translate("Client", "10", nullptr));
        QTableWidgetItem *___qtablewidgetitem42 = tableClient_4->item(0, 1);
        ___qtablewidgetitem42->setText(QCoreApplication::translate("Client", "x", nullptr));
        QTableWidgetItem *___qtablewidgetitem43 = tableClient_4->item(0, 2);
        ___qtablewidgetitem43->setText(QCoreApplication::translate("Client", "jg", nullptr));
        QTableWidgetItem *___qtablewidgetitem44 = tableClient_4->item(1, 0);
        ___qtablewidgetitem44->setText(QCoreApplication::translate("Client", "8", nullptr));
        QTableWidgetItem *___qtablewidgetitem45 = tableClient_4->item(1, 1);
        ___qtablewidgetitem45->setText(QCoreApplication::translate("Client", "y", nullptr));
        QTableWidgetItem *___qtablewidgetitem46 = tableClient_4->item(1, 2);
        ___qtablewidgetitem46->setText(QCoreApplication::translate("Client", "jyvy", nullptr));
        QTableWidgetItem *___qtablewidgetitem47 = tableClient_4->item(2, 0);
        ___qtablewidgetitem47->setText(QCoreApplication::translate("Client", "7", nullptr));
        QTableWidgetItem *___qtablewidgetitem48 = tableClient_4->item(2, 1);
        ___qtablewidgetitem48->setText(QCoreApplication::translate("Client", "z", nullptr));
        QTableWidgetItem *___qtablewidgetitem49 = tableClient_4->item(2, 2);
        ___qtablewidgetitem49->setText(QCoreApplication::translate("Client", "pp", nullptr));
        QTableWidgetItem *___qtablewidgetitem50 = tableClient_4->item(3, 0);
        ___qtablewidgetitem50->setText(QCoreApplication::translate("Client", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem51 = tableClient_4->item(3, 2);
        ___qtablewidgetitem51->setText(QCoreApplication::translate("Client", "mm", nullptr));
        tableClient_4->setSortingEnabled(__sortingEnabled2);

        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("Client", "classification", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Client: public Ui_Client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_H
