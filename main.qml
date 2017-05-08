import QtQuick 2.8
import QtQuick.Window 2.2
import menuWindow

Window
{
    visible: true
    width: 800
    height: 600
    title: qsTr("SBattle")



    MouseArea
    {
        anchors.fill: parent
        onClicked: app.mouseClick(mouseX, mouseY)
    }
}
