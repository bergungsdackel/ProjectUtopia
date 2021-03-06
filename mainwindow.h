#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QObject>
#include "mainmenue.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QWidget *windowWidget;
private:
    Ui::MainWindow *ui;

    QMediaPlayer *menuMusic;
private slots:
    void enterGame();
    void optionsOpen();
    void endTheGame();
    void volumeSet(qint8 vol);

public slots:


};
#endif // MAINWINDOW_H

