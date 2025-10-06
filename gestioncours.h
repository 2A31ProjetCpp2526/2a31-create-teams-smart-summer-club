#ifndef GESTIONCOURS_H
#define GESTIONCOURS_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class GestionCours; }
QT_END_NAMESPACE

class GestionCours : public QMainWindow
{
    Q_OBJECT

public:
    GestionCours(QWidget *parent = nullptr);
    ~GestionCours();

private:
    Ui::GestionCours *ui;
};
#endif // GESTIONCOURS_H
