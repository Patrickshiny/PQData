#ifndef INDEXWINDOW_H
#define INDEXWINDOW_H

#include <QMainWindow>
#include <QMenuBar>
#include <QToolBar>

class IndexWindow : public QMainWindow
{
    Q_OBJECT

public:
    IndexWindow();

private slots:

private:

    QAction *beginAction;
    QAction *restartAction;
    QMenuBar *CurrentMenuBar;
    QToolBar *CurrentToolBar;
};

#endif // INDEXWINDOW_H
