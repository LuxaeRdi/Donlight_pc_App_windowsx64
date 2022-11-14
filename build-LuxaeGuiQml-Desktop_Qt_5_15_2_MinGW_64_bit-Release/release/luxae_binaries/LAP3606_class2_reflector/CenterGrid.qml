import QtQuick 2.12

Grid{
    id:gridcenter
    width:parent.width
    height: parent.height-setupmenu.height
    rows: 1
    columns:1


    DropModule{
        height:parent.height/parent.rows
        width:parent.width/parent.columns
        number: 1
        configName: "3606configs.bin"
        patternName: "3606patterns.bin"
        appName: "36 rev1.bin"
        hwName:"36 rev1"
    }

}
