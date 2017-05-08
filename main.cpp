#include <QQmlApplicationEngine>
#include <QGuiApplication>
#include <QQmlContext>

#include "app/Application.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    Application application;

    QQmlApplicationEngine engine;

    QQmlContext* context = engine.rootContext();
    context->setContextProperty("app", &application);

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
