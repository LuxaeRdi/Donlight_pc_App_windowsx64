import QtQuick 2.12

Grid{
    id:gridcenter
    width:parent.width
    height: parent.height-setupmenu.height
    rows: 2
    columns:4

            DropModule{
                height:parent.height/parent.rows
                width:parent.width/parent.columns
                number: 2
                configName: "FLcornerRearArrow.bin"
                patternName: "patternsRearArrow.bin"
                appName: "v053rev4.bin"
                hwName:"53 rev4"
            }

            Item{//spacer
                height:parent.height/parent.rows
                width:parent.width/parent.columns
            }

            Item{//spacer
                height:parent.height/parent.rows
                width:parent.width/parent.columns
            }

            DropModule{
                height:parent.height/parent.rows
                width:parent.width/parent.columns
                number: 3
                configName: "FRcornerRearArrow.bin"
                patternName: "patternsRearArrow.bin"
                appName: "v053rev4.bin"
                hwName:"53 rev4"
            }

            DropModule{
                height:parent.height/parent.rows
                width:parent.width/parent.columns
                number: 1
                configName: "BLcornerRearArrow.bin"
                patternName: "patternsRearArrow.bin"
                appName: "v053rev4.bin"
                hwName:"53 rev4"
            }

            DropModule{
                height:parent.height/parent.rows
                width:parent.width/parent.columns
                number: 6
                configName: "BLstraightRearArrow.bin"
                patternName: "patternsRearArrow.bin"
                appName: "v057rev2.bin"
                hwName:"57 rev2"
            }

            DropModule{
                height:parent.height/parent.rows
                width:parent.width/parent.columns
                number: 5
                configName: "BRstraightRearArrow.bin"
                patternName: "patternsRearArrow.bin"
                appName: "v057rev2.bin"
                hwName:"57 rev2"
            }


            DropModule{
                height:parent.height/parent.rows
                width:parent.width/parent.columns
                number: 4
                configName: "BRcornerRearArrow.bin"
                patternName: "patternsRearArrow.bin"
                appName: "v053rev4.bin"
                hwName:"53 rev4"
            }
}
