#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQuickItem>
#include <QQuickView>

int main(int argc, char* argv[])
{

  QGuiApplication app(argc, argv);

  QQmlApplicationEngine engine;
  app.setOrganizationName("Anon");
  app.setOrganizationDomain("anon.azaza");
  // NOTE: maybe we can throw out engine, and directly use
  // QQuickView, but how to add this two lines in viewer?
  // engine.addImportPath(":/");

  QQuickView viewer(&engine, nullptr);
  const QUrl url(QStringLiteral("qrc:/TestProject/main.qml"));
  viewer.setSource(url);
  QObject::connect(viewer.engine(), &QQmlEngine::quit, &viewer, &QQuickView::close);

  return app.exec();
}
