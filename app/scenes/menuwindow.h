#ifndef MENUWINDOW_H
#define MENUWINDOW_H

#include <QObject>

#include <QDebug>

class MenuWindow : public QObject
{
    Q_OBJECT
public:
    explicit MenuWindow(QObject* parent = 0);

signals:

public slots:
    void mouseClick(float mouseX, float mouseY);
};

#endif // MENUWINDOW_H
