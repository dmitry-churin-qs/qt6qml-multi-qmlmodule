import QtQuick
import QtQuick.Controls

import Tools

Item {
    id: root
    anchors.fill: parent

    Tool {
        id: tool
        anchors.bottom: parent.bottom
        anchors.left: parent.left
        visible: true
    }
}
