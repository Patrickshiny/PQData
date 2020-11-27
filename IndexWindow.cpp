#include "IndexWindow.h"

#include <QAction>

IndexWindow::IndexWindow()
    : QMainWindow(),
      DataInterface(new DataInterface)
{
    setWindowTitle(tr("WeatherDataInterface"));
    // CurrentMenuBar = new QMenuBar(this);
    CurrentMenuBar = addMenu(tr("FrontMenu"));
    // CurrentToolBar = new QToolBar(this);
    CurrentToolBar = addToolBar(tr("FrontToolBar"));
    CurrentToolBar->addAction(this);
    QGuiApplication::setAttribute(CurrentAttribute);
    
    CurrentIndexAction = new QAction(QIcon(tr("ActionIcon.ico")), tr("Open the File"), this);
}

