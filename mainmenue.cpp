#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QMediaPlayer>
#include <QGridLayout>
#include <QSettings>
#include <QWidget>
#include <QBoxLayout>
#include <QDebug>
#include "mainmenue.h"
#include "startgamedialog.h"
#include "optionswindow.h"

MainMenue::MainMenue(QWidget *parent, int volume)
    : QWidget(parent)
{
    //layout
    QVBoxLayout *vBoxLayout = new QVBoxLayout(this);
    QHBoxLayout *hBoxLayout = new QHBoxLayout(this);

    QLabel *headText = new QLabel(this);
    headText->setText("Welcome to your point'n'click adventure");
    QPushButton *startButton = new QPushButton("&Start game",this);
    QPushButton *optionButton = new QPushButton("&Options",this);

    vBoxLayout->setAlignment(Qt::AlignCenter);
    hBoxLayout->setAlignment(Qt::AlignCenter);

    hBoxLayout->addWidget(startButton);
    hBoxLayout->addWidget(optionButton);

    vBoxLayout->addWidget(headText,0,Qt::AlignCenter);
    vBoxLayout->addLayout(hBoxLayout);


    //background music
    QMediaPlayer *menuMusic = new QMediaPlayer();
    menuMusic->setMedia(QUrl("qrc:/sounds/background.wav"));
    menuMusic->setVolume(volume);
    menuMusic->setParent(this);
    menuMusic->play();

    connect(startButton,SIGNAL(clicked()),this,SLOT(startGame()));
    connect(optionButton,SIGNAL(clicked()),this,SLOT(options()));

    windowWidget = new QWidget();
    windowWidget->setLayout(vBoxLayout);
    windowWidget->show();
}

void MainMenue::startGame(void)
{
    windowWidget->close();

    qDebug() << "Started game." << endl;
    startGameDialog *window = new startGameDialog();
    window->setParent(this);
    window->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    window->show();
    window->move(this->geometry().center() - window->rect().center());
}

void MainMenue::options()
{
    windowWidget->close();
    //this->MenuMusic->stop();
    optionsWindow *optionWindow = new optionsWindow();
    optionWindow->setParent(this);
    optionWindow->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    optionWindow->move(this->geometry().center() - optionWindow->rect().center());
}
