#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_client.h"
#include "numericitem.h"
#include <QVBoxLayout>
#include <QHeaderView>
#include <QTableWidgetItem>
#include <QDebug>

#include <QDrag>
#include <QMimeData>
#include <QMouseEvent>
#include <QListWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // === PAGE PAR DÉFAUT ===
    ui->stackedWidget->setCurrentWidget(ui->pageClient);

    // === Activation du tri sur les tableaux ===
    auto setupSorting = [&](QTableWidget *table){
        if (!table) return;
        table->setSortingEnabled(true);
        table->horizontalHeader()->setSortIndicatorShown(true);
        table->horizontalHeader()->setSectionsClickable(true);
    };


    setupSorting(ui->tableClient_2);
    setupSorting(ui->tableClient_3);

    // --- Tri initial sur la colonne "Nom" (colonne 0) ---
    if (ui->tableClient_2)
        ui->tableClient_2->sortItems(0, Qt::AscendingOrder);

    // --- Connexion pour la colonne "Prix" (colonne 1) ---
    if (ui->tableClient_2) {
        connect(ui->tableClient_2->horizontalHeader(), &QHeaderView::sectionClicked,
                this, [=](int logicalIndex){
                    if (logicalIndex == 1) { // Colonne Prix
                        static bool asc = true;
                        ui->tableClient_2->sortItems(1, asc ? Qt::AscendingOrder : Qt::DescendingOrder);
                        asc = !asc;
                    }
                });
    }

    // === Conversion numérique des âges ===
    auto convertAgeColumn = [&](QTableWidget *table){
        if (!table) return;
        const int ageCol = 3; // index colonne Âge
        int rows = table->rowCount();
        for (int r = 0; r < rows; ++r) {
            QTableWidgetItem *it = table->item(r, ageCol);
            if (it) {
                QString txt = it->text();
                NumericItem *n = new NumericItem(txt);
                QTableWidgetItem *old = table->takeItem(r, ageCol);
                table->setItem(r, ageCol, n);
                delete old;
            }
        }
    };

    convertAgeColumn(ui->tableClient_2);
    convertAgeColumn(ui->tableClient_3);



    setupTableSorting();
}

MainWindow::~MainWindow()
{
    delete uiClient;
    delete ui;
}

void MainWindow::loadClientUi()
{
    if (clientWidget)
        return; // déjà chargé

    clientWidget = new QMainWindow();
    uiClient = new Ui::Client();
    uiClient->setupUi(clientWidget);

    // Ajout à la page client
    QVBoxLayout *layout = new QVBoxLayout(ui->pageClient);
    layout->setContentsMargins(0, 0, 0, 0);
    layout->addWidget(clientWidget);

    // === Tri et conversion numérique dans les tables client ===
    auto setupSorting = [&](QTableWidget *table){
        if (!table) return;
        table->setSortingEnabled(true);
        table->horizontalHeader()->setSortIndicatorShown(true);
        table->horizontalHeader()->setSectionsClickable(true);
    };

    auto convertClientAge = [&](QTableWidget *table){
        if (!table) return;
        const int ageCol = 3;
        int rows = table->rowCount();
        for (int r = 0; r < rows; ++r) {
            QTableWidgetItem *it = table->item(r, ageCol);
            if (it) {
                QString txt = it->text();
                NumericItem *n = new NumericItem(txt);
                QTableWidgetItem *old = table->takeItem(r, ageCol);
                table->setItem(r, ageCol, n);
                delete old;
            }
        }
    };


    setupSorting(uiClient->tableClient_2);
    setupSorting(uiClient->tableClient_3);


    convertClientAge(uiClient->tableClient_2);
    convertClientAge(uiClient->tableClient_3);
}

void MainWindow::on_btnEnfant_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->pageEnfant);
}

void MainWindow::on_btnClient_clicked()
{
    if (!clientWidget)
        loadClientUi();
    ui->stackedWidget->setCurrentWidget(ui->pageClient);
}

void MainWindow::on_btnactivite_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->pageActivites);

}
void MainWindow::setupTableSorting(){

        ui->tableWidget_act->setSortingEnabled(true);
        ui->tableWidget_act->horizontalHeader()->setSortIndicatorShown(true);
        ui->tableWidget_act->horizontalHeader()->setSectionsClickable(true);


        // === Zone forfait dans le GroupBox ===
        QListWidget *forfait = new QListWidget(ui->groupBox_9);
        forfait->setAcceptDrops(true);
        forfait->setDragDropMode(QAbstractItemView::DropOnly);

        // Mettre le QListWidget dans le GroupBox
        QVBoxLayout *layout = new QVBoxLayout(ui->groupBox_9);
        layout->addWidget(forfait);
        ui->groupBox_9->setLayout(layout);



        // --- Colonne "Nom" (colonne 0) ---
        ui->tableWidget_7->sortItems(0, Qt::AscendingOrder);

        // Rendre la table draggable
        ui->tableWidget_7->setDragEnabled(true);

        // Créer le QListWidget pour le forfait
        QListWidget *forfaitList = new QListWidget(ui->groupBox_9);
        forfaitList->setAcceptDrops(true);

        // Mettre le QListWidget dans le group box
        layout->addWidget(forfaitList);
        ui->groupBox_9->setLayout(layout);

        // Activer drop
        forfaitList->setDragDropMode(QAbstractItemView::DropOnly);

        // Filtrer le drop sur le texte
        forfaitList->installEventFilter(this);
        // --- Colonne "Nom" (colonne 0) ---
        ui->tableWidget_act->sortItems(0, Qt::AscendingOrder);



        // Connexion : quand on clique sur "Prix", on alterne tri croissant/décroissant
        connect(ui->tableWidget_act->horizontalHeader(), &QHeaderView::sectionClicked,
                this, [=](int logicalIndex){
                    if (logicalIndex == 1) { // Colonne Prix
                        static bool asc = true;
                        ui->tableWidget_act->sortItems(1, asc ? Qt::AscendingOrder : Qt::DescendingOrder);
                        asc = !asc;
                    }
                });
}
