#include "levelmenue.h"
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
#include <QDebug>
#include "mainmenue.h"
#include "startgamedialog.h"
#include "optionswindow.h"
#include "maingame.h"
class levelMenueData : public QSharedData
{
public:

};

levelMenue::levelMenue(QWidget *parent) : QWidget(parent), data(new levelMenueData)
{
    QGridLayout *gLayout = new QGridLayout(this);

    QLabel *headText = new QLabel(this);
    headText->setText("Wählen Sie ein Level aus");
    QPushButton *Level1 = new QPushButton("Level1",this);
    QPushButton *Level2 = new QPushButton("Level2",this);
    QPushButton *Level3 = new QPushButton("Level3",this);
    QPushButton *Level4 = new QPushButton("Level4",this);
    QPushButton *Level5 = new QPushButton("Level5",this);
    QPushButton *abort = new QPushButton("Zurück",this);

    gLayout->setAlignment(Qt::AlignCenter); //sollte eigentlich mittig sein
    gLayout->addWidget(headText,0,0,Qt::AlignCenter);
    gLayout->addWidget(Level1,1,0,Qt::AlignCenter);
    gLayout->addWidget(Level2,1,1,Qt::AlignCenter);
    gLayout->addWidget(Level3,1,2,Qt::AlignCenter);
    gLayout->addWidget(Level4,1,3,Qt::AlignCenter);
    gLayout->addWidget(Level5,1,4,Qt::AlignCenter);
    gLayout->addWidget(abort,4,4,Qt::AlignCenter);



    connect(Level1,SIGNAL(clicked()),this,SLOT(Level_1()));
    connect(Level2,SIGNAL(clicked()),this,SLOT(Level_2()));
    connect(Level3,SIGNAL(clicked()),this,SLOT(Level_3()));
    connect(Level4,SIGNAL(clicked()),this,SLOT(Level_4()));
    connect(Level5,SIGNAL(clicked()),this,SLOT(Level_5()));
    connect(abort,SIGNAL(clicked()),this,SLOT(abort_function()));

    this->setLayout(gLayout);
}

levelMenue &levelMenue::operator=(const levelMenue &rhs)
{
    if (this != &rhs)
        data.operator=(rhs.data);
    return *this;
}

levelMenue::~levelMenue()
{

}

void levelMenue::Level_1(void)
{
    qDebug() << "Maingame Level1." << endl;

    this->close();

    mainGame *startmainGame = new mainGame(1);
    startmainGame->setParent(this);
    startmainGame->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    startmainGame->activateWindow();
    startmainGame->show();
    startmainGame->move(this->geometry().center() - startmainGame->rect().center());
}
void levelMenue::Level_2(void)
{
    qDebug() << "Maingame Level2." << endl;

    this->close();

    mainGame *startmainGame = new mainGame(2);
    startmainGame->setParent(this);
    startmainGame->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    startmainGame->activateWindow();
    startmainGame->show();
    startmainGame->move(this->geometry().center() - startmainGame->rect().center());
}
void levelMenue::Level_3(void)
{
    qDebug() << "Maingame Level3." << endl;

    this->close();

    mainGame *startmainGame = new mainGame(3);
    startmainGame->setParent(this);
    startmainGame->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    startmainGame->activateWindow();
    startmainGame->show();
    startmainGame->move(this->geometry().center() - startmainGame->rect().center());
}
void levelMenue::Level_4(void)
{
    qDebug() << "Maingame Level4." << endl;

    this->close();

    mainGame *startmainGame = new mainGame(4);
    startmainGame->setParent(this);
    startmainGame->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    startmainGame->activateWindow();
    startmainGame->show();
    startmainGame->move(this->geometry().center() - startmainGame->rect().center());
}
void levelMenue::Level_5(void)
{
    qDebug() << "Maingame Level5." << endl;

    this->close();

    mainGame *startmainGame = new mainGame(5);
    startmainGame->setParent(this);
    startmainGame->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    startmainGame->activateWindow();
    startmainGame->show();
    startmainGame->move(this->geometry().center() - startmainGame->rect().center());
}
void levelMenue::abort_function(void)
{
    qDebug() << "Back to startgamedialog." << endl;

    QWidget *parent = this->parentWidget();
    parent->show();
    parent->move(this->geometry().center() - parent->rect().center());

    this->close();
}
