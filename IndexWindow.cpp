#include "IndexWindow.h"

#include <QAction>

IndexWindow::IndexWindow()
    : QMainWindow(),
      DataInterface(new DataInterface)
{
    setWindowTitle(tr("Weather Data Interface"));
    CurrentMenuBar = new QMenuBar(this);
    CurrentToolBar = new QToolBar(this);
}
