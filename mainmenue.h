#ifndef MAINMENUE_H
#define MAINMENUE_H
#include <QWidget>
#include <QLabel>
#include <QProgressBar>
#include <QMediaPlayer>

class MainMenue: public QWidget
{
      Q_OBJECT
public:
    explicit MainMenue(QWidget *parent = nullptr,int volume=100);
    QWidget *windowWidget;

private slots:
    void startGame(void);
    void options();
};

#endif // MAINMENUE_H
