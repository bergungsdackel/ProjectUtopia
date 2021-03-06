#include "level.h"
#include "maingame.h"
#include <QDebug>
#include <QLabel>
#include <QSettings>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QMediaPlayer>
#include <QGridLayout>
#include <QWidget>
#include "mainmenue.h"
#include "startgamedialog.h"
#include "optionswindow.h"
#include "levelmenue.h"
level::level(QWidget *parent) : QWidget(parent)
{
    //Bildschirmgröße
    x=1600;
    y=900;
    //Zurückknopf
    QPushButton *backToLevelMenue_button = new QPushButton("Zurück zum Levelmenü",this);

    //Connection
     connect(backToLevelMenue_button,SIGNAL(clicked()),this,SLOT(backToLevelMenue()));
    //Stage1
    QGridLayout *stage1Layout = new QGridLayout(this);
    QLabel *headTextLevelStage1 = new QLabel(this);
    QLabel *stage1Question_label = new QLabel(this);

    stage1Question_label->setText(stage1Question);
    headTextLevelStage1->setText(stage1Title);
    QPushButton *stage1Answer1_button = new QPushButton(stage1Answer1,this);
    QPushButton *stage1Answer2_button = new QPushButton(stage1Answer2,this);
    QPushButton *stage1Answer3_button = new QPushButton(stage1Answer3,this);
    QPushButton *stage1Answer4_button = new QPushButton(stage1Answer4,this);

    stage1Layout->setAlignment(Qt::AlignCenter);
    stage1Layout->addWidget(headTextLevelStage1,0,0,Qt::AlignCenter);
    stage1Layout->addWidget(stage1Question_label,1,0,Qt::AlignCenter);
    stage1Layout->addWidget(stage1Answer1_button,2,0,Qt::AlignCenter);
    stage1Layout->addWidget(stage1Answer2_button,2,1,Qt::AlignCenter);
    stage1Layout->addWidget(stage1Answer3_button,3,0,Qt::AlignCenter);
    stage1Layout->addWidget(stage1Answer4_button,3,1,Qt::AlignCenter);

    levelStage1 = new QWidget();
    levelStage1->setLayout(stage1Layout);
    levelStage1->setFixedSize(x,y);
    levelStage1->setParent(this);
    levelStage1->setWindowFlags(Qt::Window | Qt::WindowSystemMenuHint);
    levelStage1->move(this->geometry().center() - levelStage1->rect().center());

    //Stage2
    QGridLayout *stage2Layout = new QGridLayout(this);
    QLabel *headTextLevelStage2 = new QLabel(this);
    QLabel *stage2Question_label = new QLabel(this);

    stage2Question_label->setText(stage2Question);
    headTextLevelStage1->setText(stage2Title);
    QPushButton *stage2Answer1_button = new QPushButton(stage2Answer1,this);
    QPushButton *stage2Answer2_button = new QPushButton(stage2Answer2,this);
    QPushButton *stage2Answer3_button = new QPushButton(stage2Answer3,this);
    QPushButton *stage2Answer4_button = new QPushButton(stage2Answer4,this);

    stage2Layout->setAlignment(Qt::AlignCenter);
    stage2Layout->addWidget(headTextLevelStage2,0,0,Qt::AlignCenter);
    stage2Layout->addWidget(stage2Question_label,1,0,Qt::AlignCenter);
    stage2Layout->addWidget(stage2Answer1_button,2,0,Qt::AlignCenter);
    stage2Layout->addWidget(stage2Answer2_button,2,1,Qt::AlignCenter);
    stage2Layout->addWidget(stage2Answer3_button,3,0,Qt::AlignCenter);
    stage2Layout->addWidget(stage2Answer4_button,3,1,Qt::AlignCenter);

    levelStage2 = new QWidget();
    levelStage2->setLayout(stage2Layout);
    levelStage2->setFixedSize(x,y);
    levelStage2->setParent(this);
    levelStage2->setWindowFlags(Qt::Window | Qt::WindowSystemMenuHint);
    levelStage2->move(this->geometry().center() - levelStage2->rect().center());
    //Stage3
    QGridLayout *stage3Layout = new QGridLayout(this);
    QLabel *headTextLevelStage3 = new QLabel(this);
    QLabel *stage3Question_label = new QLabel(this);

    stage3Question_label->setText(stage3Question);
    headTextLevelStage1->setText(stage3Title);
    QPushButton *stage3Answer1_button = new QPushButton(stage3Answer1,this);
    QPushButton *stage3Answer2_button = new QPushButton(stage3Answer2,this);
    QPushButton *stage3Answer3_button = new QPushButton(stage3Answer3,this);
    QPushButton *stage3Answer4_button = new QPushButton(stage3Answer4,this);

    stage3Layout->setAlignment(Qt::AlignCenter);
    stage3Layout->addWidget(headTextLevelStage3,0,0,Qt::AlignCenter);
    stage3Layout->addWidget(stage3Question_label,1,0,Qt::AlignCenter);
    stage3Layout->addWidget(stage3Answer1_button,2,0,Qt::AlignCenter);
    stage3Layout->addWidget(stage3Answer2_button,2,1,Qt::AlignCenter);
    stage3Layout->addWidget(stage3Answer3_button,3,0,Qt::AlignCenter);
    stage3Layout->addWidget(stage3Answer4_button,3,1,Qt::AlignCenter);

    levelStage3 = new QWidget();
    levelStage3->setLayout(stage3Layout);
    levelStage3->setFixedSize(x,y);
    levelStage3->setParent(this);
    levelStage3->setWindowFlags(Qt::Window | Qt::WindowSystemMenuHint);
    levelStage3->move(this->geometry().center() - levelStage3->rect().center());
    //Stage4
    QGridLayout *stage4Layout = new QGridLayout(this);
    QLabel *headTextLevelStage4 = new QLabel(this);
    QLabel *stage4Question_label = new QLabel(this);

    stage4Question_label->setText(stage4Question);
    headTextLevelStage1->setText(stage4Title);
    QPushButton *stage4Answer1_button = new QPushButton(stage4Answer1,this);
    QPushButton *stage4Answer2_button = new QPushButton(stage4Answer2,this);
    QPushButton *stage4Answer3_button = new QPushButton(stage4Answer3,this);
    QPushButton *stage4Answer4_button = new QPushButton(stage4Answer4,this);

    stage4Layout->setAlignment(Qt::AlignCenter);
    stage4Layout->addWidget(headTextLevelStage4,0,0,Qt::AlignCenter);
    stage4Layout->addWidget(stage4Question_label,1,0,Qt::AlignCenter);
    stage4Layout->addWidget(stage4Answer1_button,2,0,Qt::AlignCenter);
    stage4Layout->addWidget(stage4Answer2_button,2,1,Qt::AlignCenter);
    stage4Layout->addWidget(stage4Answer3_button,3,0,Qt::AlignCenter);
    stage4Layout->addWidget(stage4Answer4_button,3,1,Qt::AlignCenter);

    levelStage4 = new QWidget();
    levelStage4->setLayout(stage4Layout);
    levelStage4->setFixedSize(x,y);
    levelStage4->setParent(this);
    levelStage4->setWindowFlags(Qt::Window | Qt::WindowSystemMenuHint);
    levelStage4->move(this->geometry().center() - levelStage1->rect().center());
    //stage5
    QGridLayout *stage5Layout = new QGridLayout(this);
    QLabel *headTextLevelStage5 = new QLabel(this);
    QLabel *stage5Question_label = new QLabel(this);

    stage5Question_label->setText(stage5Question);
    headTextLevelStage1->setText(stage5Title);
    QPushButton *stage5Answer1_button = new QPushButton(stage5Answer1,this);
    QPushButton *stage5Answer2_button = new QPushButton(stage5Answer2,this);
    QPushButton *stage5Answer3_button = new QPushButton(stage5Answer3,this);
    QPushButton *stage5Answer4_button = new QPushButton(stage5Answer4,this);

    stage5Layout->setAlignment(Qt::AlignCenter);
    stage5Layout->addWidget(headTextLevelStage5,0,0,Qt::AlignCenter);
    stage5Layout->addWidget(stage5Question_label,1,0,Qt::AlignCenter);
    stage5Layout->addWidget(stage5Answer1_button,2,0,Qt::AlignCenter);
    stage5Layout->addWidget(stage5Answer2_button,2,1,Qt::AlignCenter);
    stage5Layout->addWidget(stage5Answer3_button,3,0,Qt::AlignCenter);
    stage5Layout->addWidget(stage5Answer4_button,3,1,Qt::AlignCenter);

    levelStage5 = new QWidget();
    levelStage5->setLayout(stage5Layout);
    levelStage5->setFixedSize(x,y);
    levelStage5->setParent(this);
    levelStage5->setWindowFlags(Qt::Window | Qt::WindowSystemMenuHint);
    levelStage5->move(this->geometry().center() - levelStage5->rect().center());
}

void level::backToLevelMenue(void){
    qDebug() << "Zurück zum Levelmenü" << endl;

    delete levelStage1;
    delete levelStage2;
    delete levelStage3;
    delete levelStage4;
    delete levelStage5;
    levelMenue *backToLevelMenue_ = new levelMenue();
    backToLevelMenue_->setParent(this);
    backToLevelMenue_->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    backToLevelMenue_->show();
    backToLevelMenue_->move(this->geometry().center() - backToLevelMenue_->rect().center());
}
