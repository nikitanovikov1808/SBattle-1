import QtQuick 2.8
import QtQuick.Controls 2.1
import QtQuick.Layouts 1.3

Item {
    id: mainWindow

    Rectangle
    {
        id: background

        width: parent.width
        height: parent.height

        Image
        {
            anchors.fill: parent

            source: "source/image/background.jpg"
            fillMode: Image.Tile

            Button {
                id: button
                x: 270
                y: 159
                text: qsTr("Button")
            }
        }
    }

    Text
    {
        x: 234
        y: 32
        color: "#2525df"
        text: "SBattle"
        textFormat: Text.AutoText
        font.bold: true
        font.italic: false
        font.underline: true
        font.family: "Arial"
        enabled: false
        transformOrigin: Item.Center
        style: Text.Sunken
        font.weight: Font.ExtraBold
        fontSizeMode: Text.HorizontalFit
        clip: false
        font.pixelSize: 55
    }

}
