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
                number: 1
                configName: "none.bin"
                patternName: "none.bin"
                appName: "BOB35_v1_01_00.bin"
                hwName:"BOB35"
            }

            Item{//spacer
                height:parent.height/parent.rows
                width:parent.width/parent.columns
            }

            Item{//spacer
                height:parent.height/parent.rows
                width:parent.width/parent.columns
            }

            Item{//spacer
                height:parent.height/parent.rows
                width:parent.width/parent.columns
            }

            Item{//spacer
                height:parent.height/parent.rows
                width:parent.width/parent.columns
            }

            Item{//spacer
                height:parent.height/parent.rows
                width:parent.width/parent.columns
            }

            Item{//spacer
                height:parent.height/parent.rows
                width:parent.width/parent.columns
            }

            Item{//spacer
                height:parent.height/parent.rows
                width:parent.width/parent.columns
            }
}
