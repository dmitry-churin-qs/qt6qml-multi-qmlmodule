import QtQuick

Text {
    id: root
    property color textColor: "#ccc"

    font.pixelSize: 20

    margin: 10
    width: 3.5 * root.textSize
    height: 3.0 * root.textSize
    color: "transparent"
    radius: 10
    // This should ensure that the monitor is on top of all other content
    z: 999
}
