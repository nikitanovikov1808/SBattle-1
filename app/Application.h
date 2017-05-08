#ifndef APPLICATION_H
#define APPLICATION_H

#include <QObject>
#include <QDebug>

#include "app/scenes/MenuWindow.h"

class Application : public QObject
{
    typedef enum
    {
        MENU,
        GAME
    } State;

    Q_OBJECT

public:
    explicit Application(QObject* parent = 0);

private:
    void changeState(const State& state);

    void disableAllConnectEvent();

signals:
    void mouseClickEvent(float mouseX, float mouseY);

public slots:
    void mouseClick(float mouseX, float mouseY);

private:
    MenuWindow menuWindow;
    State state;
};

#endif // APPLICATION_H
