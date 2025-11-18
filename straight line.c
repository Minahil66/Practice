bool checkStraightLine(int** coordinates, int coordinatesSize, int* coordinatesColSize) {
    int x1=coordinates[0][0];
    int y1=coordinates[0][1];
    int x2=coordinates[1][0];
    int y2=coordinates[1][1];

    int x3,y3;
    for(int i=2;i<coordinatesSize;i++){
        x3=coordinates[i][0];
        y3=coordinates[i][1];
        if((y2 - y1) * (x3 - x1) != (y3 - y1) * (x2 - x1)){
            return false;
        }
    }
        return true;
    }
