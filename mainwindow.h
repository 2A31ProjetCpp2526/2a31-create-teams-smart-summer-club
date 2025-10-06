#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
class Client;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnEnfant_clicked();
    void on_btnClient_clicked();


    void on_btnactivite_clicked();

private:
    Ui::MainWindow *ui;
    QMainWindow *clientWidget = nullptr; // Container for client UI (QMainWindow)
    Ui::Client *uiClient = nullptr;      // Client UI instance
    void loadClientUi();
    void setupTableSorting();
};
#endif // MAINWINDOW_H
