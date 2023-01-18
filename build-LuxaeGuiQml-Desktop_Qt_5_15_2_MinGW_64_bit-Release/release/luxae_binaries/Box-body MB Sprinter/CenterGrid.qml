import QtQuick 2.12

Grid{
    id:gridcenter
    width:parent.width
    height: parent.height-setupmenu.height
    rows: 6
    columns:6

    DropModule{
        height:parent.height/parent.rows
        width:parent.width/parent.columns
        number: 1
        configName: "FLcorner.bin"
        patternName: "pattBOXMBb.bin"
        appName: "53 rev4.bin"
        hwName:"53 rev4"
    }

    DropModule{
        height:parent.height/parent.rows
        width:parent.width/parent.columns
        number: 2
        configName: "FLstraight3.bin"
        patternName: "pattBOXMBbw.bin"
        appName: "55 rev1.bin"
        hwName:"55 rev1"
    }

    DropModule{
        height:parent.height/parent.rows
        width:parent.width/parent.columns
        number: 3
        configName: "FLstraight6.bin"
        patternName: "pattBOXMBab.bin"
        appName: "57 rev2.bin"
        hwName:"57 rev2"
    }

    DropModule{
        height:parent.height/parent.rows
        width:parent.width/parent.columns
        number: 4
        configName: "FRstraight6.bin"
        patternName: "pattBOXMBab.bin"
        appName: "57 rev2.bin"
        hwName:"57 rev2"
    }

    DropModule{
        height:parent.height/parent.rows
        width:parent.width/parent.columns
        number: 5
        configName: "FRstraight3.bin"
        patternName: "pattBOXMBbw.bin"
        appName: "55 rev1.bin"
        hwName:"55 rev1"
    }

    DropModule{
        height:parent.height/parent.rows
        width:parent.width/parent.columns
        number: 6
        configName: "FRcorner.bin"
        patternName: "pattBOXMBb.bin"
        appName: "53 rev4.bin"
        hwName:"53 rev4"
    }


    DropModule{
        height:parent.height/parent.rows
        width:parent.width/parent.columns
        number: 20
        configName: "LFstraight3.bin"
        patternName: "pattBOXMBbw.bin"
        appName: "55 rev1.bin"
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
        configName: "RFstraight3.bin"
        patternName: "pattBOXMBbw.bin"
        appName: "55 rev1.bin"
        hwName:"55 rev1"
    }


    DropModule{
        height:parent.height/parent.rows
        width:parent.width/parent.columns
        number: 19
        configName: "LFstraight6.bin"
        patternName: "pattBOXMBab.bin"
        appName: "57 rev2.bin"
        hwName:"57 rev2"
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

    DropModule{
        height:parent.height/parent.rows
        width:parent.width/parent.columns
        number: 8
        configName: "RFstraight6.bin"
        patternName: "pattBOXMBab.bin"
        appName: "57 rev2.bin"
        hwName:"57 rev2"
    }

    DropModule{
        height:parent.height/parent.rows
        width:parent.width/parent.columns
        number: 18
        configName: "LBstraight6.bin"
        patternName: "pattBOXMBab.bin"
        appName: "57 rev2.bin"
        hwName:"57 rev2"
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

    DropModule{
        height:parent.height/parent.rows
        width:parent.width/parent.columns
        number: 9
        configName: "RBstraight6.bin"
        patternName: "pattBOXMBab.bin"
        appName: "57 rev2.bin"
        hwName:"57 rev2"
    }

    DropModule{
        height:parent.height/parent.rows
        width:parent.width/parent.columns
        number: 17
        configName: "LBstraight3.bin"
        patternName: "pattBOXMBbw.bin"
        appName: "55 rev1.bin"
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
        number: 10
        configName: "RBstraight3.bin"
        patternName: "pattBOXMBbw.bin"
        appName: "55 rev1.bin"
        hwName:"55 rev1"
    }

    DropModule{
        height:parent.height/parent.rows
        width:parent.width/parent.columns
        number: 16
        configName: "BLcorner.bin"
        patternName: "pattBOXMBb.bin"
        appName: "53 rev4.bin"
        hwName:"53 rev4"
    }

    DropModule{
        height:parent.height/parent.rows
        width:parent.width/parent.columns
        number: 15
        configName: "BLstraight3.bin"
        patternName: "pattBOXMBbw.bin"
        appName: "55 rev1.bin"
        hwName:"55 rev1"
    }

    DropModule{
        height:parent.height/parent.rows
        width:parent.width/parent.columns
        number: 14
        configName: "BLstraight6.bin"
        patternName: "pattBOXMBab.bin"
        appName: "57 rev2.bin"
        hwName:"57 rev2"
    }

    DropModule{
        height:parent.height/parent.rows
        width:parent.width/parent.columns
        number: 13
        configName: "BRstraight6.bin"
        patternName: "pattBOXMBab.bin"
        appName: "57 rev2.bin"
        hwName:"57 rev2"
    }

    DropModule{
        height:parent.height/parent.rows
        width:parent.width/parent.columns
        number: 12
        configName: "BRstraight3.bin"
        patternName: "pattBOXMBbw.bin"
        appName: "55 rev1.bin"
        hwName:"55 rev1"
    }

    DropModule{
        height:parent.height/parent.rows
        width:parent.width/parent.columns
        number: 11
        configName: "BRcorner.bin"
        patternName: "pattBOXMBb.bin"
        appName: "53 rev4.bin"
        hwName:"53 rev4"
    }
}
