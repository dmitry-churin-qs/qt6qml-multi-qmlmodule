qt_add_library(Tools STATIC)

qt6_add_qml_module(
    Tools
    URI Tools
    VERSION 1.0
    QML_FILES
    Tool.qml
    )
