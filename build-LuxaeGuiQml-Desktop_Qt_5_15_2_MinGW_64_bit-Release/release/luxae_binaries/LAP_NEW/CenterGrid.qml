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
        configName: "LAPdummy_4configs.bin"
        patternName: "patternsblueLAP.bin"
        appName: "v036rev1daynighton5.bin"
        hwName:"36 rev1"
    }

}
