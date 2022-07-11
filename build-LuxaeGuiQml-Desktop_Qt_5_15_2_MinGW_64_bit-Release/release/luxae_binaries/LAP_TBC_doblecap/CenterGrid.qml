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
        configName: "LAPDouble_dimSwitch.bin"
        patternName: "patternsCAPamberblue.bin"
        appName: "v036rev1_dimSwitch.bin"
        hwName:"36 rev1"
    }

}
