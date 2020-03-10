#ifndef STARTGAMEDIALOG_H
#define STARTGAMEDIALOG_H

#include <QWidget>

class startGameDialog : public QWidget
{
    Q_OBJECT
public:
    explicit startGameDialog(QWidget *parent = nullptr);
    ~startGameDialog();

private slots:
    void continueGame(void);
    void startNewGame(void);
    void abortDialog();
signals:

};

#endif // STARTGAMEDIALOG_H