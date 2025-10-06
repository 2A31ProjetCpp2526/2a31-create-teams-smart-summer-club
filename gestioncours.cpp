#include "gestioncours.h"
#include "ui_gestioncours.h"

GestionCours::GestionCours(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::GestionCours)
{
    ui->setupUi(this);
}

GestionCours::~GestionCours()
{
    delete ui;
}

