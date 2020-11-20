#ifndef INDEXWINDOW_H
#define INDEXWINDOW_H

#include <QMainWindow>

class IndexWindow : public QMainWindow
{
    Q_OBJECT

public:
    IndexWindow();

private slots:

private:

    QAction *beginAction;
    QAction *restartAction;
};

#endif // INDEXWINDOW_H
