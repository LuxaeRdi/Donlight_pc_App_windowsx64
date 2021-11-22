import QtQuick 2.12

Grid{
    id:gridcenter
    width:parent.width
    height: parent.height-setupmenu.height
    rows: 2
    columns:5

    DropModule{
        height:parent.height/parent.rows
        width:parent.width/parent.columns
        number: 2
        configName: "Corner2.bin"
        patternName: "patterns.bin"
        appName: "v053rev4.bin"
        hwName:"53 rev4"
    }

    DropModule{
        height:parent.height/parent.rows
        width:parent.width/parent.columns
        number: 3
        configName: "FrontLeft.bin"
        patternName: "patterns.bin"
        appName: "v055rev1.bin"
        hwName:"55 rev1"
    }

    Item{//spacer
        height:parent.height/parent.rows
        width:parent.width/parent.columns
    }

    DropModule{
        height:parent.height/parent.rows
        width:parent.width/parent.columns
        number: 4
        configName: "FrontRight.bin"
        patternName: "patterns.bin"
        appName: "v055rev1.bin"
        hwName:"55 rev1"
    }

    DropModule{
        height:parent.height/parent.rows
        width:parent.width/parent.columns
        number: 5
        configName: "Corner3.bin"
        patternName: "patterns.bin"
        appName: "v053rev4.bin"
        hwName:"53 rev4"
    }

    DropModule{
        height:parent.height/parent.rows
        width:parent.width/parent.columns
        number: 1
        configName: "Corner1.bin"
        patternName: "patterns.bin"
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

    Item{//spacer
        height:parent.height/parent.rows
        width:parent.width/parent.columns
    }

    DropModule{
        height:parent.height/parent.rows
        width:parent.width/parent.columns
        number: 7
        configName: "Corner4.bin"
        patternName: "patterns.bin"
        appName: "v053rev4.bin"
        hwName:"53 rev4"
    }
}
