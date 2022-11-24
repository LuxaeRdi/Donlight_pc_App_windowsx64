import QtQuick 2.12
import QtQuick.Window 2.12
Item {
    id:root
    property int number:  -1
    property string configName: "not set"
    property string patternName: "not set"
    property string appName: "not set"
    property string hwName:  "not set"
    property string dragndropkey:  "dragndrop luxae key"



    DropArea{
        id:dropZone
        anchors.fill:parent
        Drag.keys: [dragndropkey]

        onDropped: {
            console.log("dropped")
            console.log(drag.source.parent.uuid)
            drag.source.parent.roofposition=number
            drag.source.parent.configselected=configName
            drag.source.parent.patternselected=patternName
            drag.source.parent.appselected=appName
            drag.source.parent.hwexpected=hwName
            background.color=drag.source.parent.stripeColor
            configtext.color=Qt.darker(drag.source.parent.stripeColor)
            patterntext.color=Qt.darker(drag.source.parent.stripeColor)
            bignumber.color=Qt.darker(drag.source.parent.stripeColor)
            apptext.color=Qt.darker(drag.source.parent.stripeColor)
        }

        Rectangle{
            id:background
            color: "darkgrey"
            opacity:0.4
            anchors.fill:parent
            //anchors.margins: 2
            Text {
                id:bignumber
                font.pointSize: parent.width
                anchors.centerIn: parent
                text: root.number
                color: "white"
            }
            Column{
                anchors.bottom: background.bottom

                Text {
                    id:apptext
                    font.pointSize: background.width/15
                    text: root.appName
                    color: "white"
                }
                Text {
                    id:configtext
                    font.pointSize: background.width/15
                    text: root.configName
                    color: "white"
                }
                Text {
                    id:patterntext
                    font.pointSize: background.width/15
                    text: root.patternName
                    color: "white"
                }

            }
            Connections{
                target: bootloaderHOSTmachine
                function onCentergriderase(){
                   background.color="darkgrey"
                   configtext.color="white"
                   patterntext.color="white"
                   apptext.color="white"
                   bignumber.color="white"
                }
            }
        }

    }
}
