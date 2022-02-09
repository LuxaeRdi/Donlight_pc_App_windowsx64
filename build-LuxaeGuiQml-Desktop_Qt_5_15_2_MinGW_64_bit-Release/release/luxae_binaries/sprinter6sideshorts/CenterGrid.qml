import QtQuick 2.12

Grid{
    id:gridcenter
    width:parent.width
    height: parent.height-setupmenu.height
    rows: 3
    columns:4

            DropModule{
                height:parent.height/parent.rows
                width:parent.width/parent.columns
                number: 1
                configName: "FLcorner.bin"
                patternName: "patternsabw.bin"
                appName: "v053rev4.bin"
                hwName:"53 rev4"
            }

            DropModule{
                height:parent.height/parent.rows
                width:parent.width/parent.columns
                number: 2
                configName: "FLstraight.bin"
                patternName: "patternsb.bin"
                appName: "v057rev2.bin"
                hwName:"57 rev2"
            }

            DropModule{
                height:parent.height/parent.rows
                width:parent.width/parent.columns
                number: 3
                configName: "FRstraight.bin"
                patternName: "patternsb.bin"
                appName: "v057rev2.bin"
                hwName:"57 rev2"
            }

            DropModule{
                height:parent.height/parent.rows
                width:parent.width/parent.columns
                number: 4
                configName: "FRcorner.bin"
                patternName: "patternsabw.bin"
                appName: "v053rev4.bin"
                hwName:"53 rev4"
            }

            DropModule{
                height:parent.height/parent.rows
                width:parent.width/parent.columns
                number: 8
                configName: "LBstraight3.bin"
                patternName: "patternsb.bin"
                appName: "v055rev1.bin"
                hwName:"55 rev1"
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
                number: 5
                configName: "RBstraight3.bin"
                patternName: "patternsb.bin"
                appName: "v055rev1.bin"
                hwName:"55 rev1"
            }

            DropModule{
                height:parent.height/parent.rows
                width:parent.width/parent.columns
                number: 7
                configName: "BLcorner.bin"
                patternName: "patternsab.bin"
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
                number: 6
                configName: "BRcorner.bin"
                patternName: "patternsab.bin"
                appName: "v053rev4.bin"
                hwName:"53 rev4"
            }
}
