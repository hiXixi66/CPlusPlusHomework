#include <iostream>
#include <string>

using namespace std;

typedef enum { wood, stone } material;
struct tile {
    int x, y;
    bool isWall;
    material type;
};
#define NROWS 12
#define NCOLS 16

void plotMaze(tile playground[NROWS][NCOLS],int play_x,int play_y){
    for (int i = 0; i < NROWS; i++) {
        for (int j = 0; j < NCOLS; j++) {
            if (playground[i][j].isWall) {
                cout<<"*";
            }
            else if (j==play_x && i==play_y) {
                cout<<"O";
            }
            else {
                cout << " ";
            }
            
            
            }
            cout<<endl;
        }
}

int main() {
    tile playground[NROWS][NCOLS];
    for (int i = 0; i < NROWS; i++) {
        for (int j = 0; j < NCOLS; j++) {
            playground[i][j].x = j;
            playground[i][j].y = i;
            playground[i][j].isWall = (j==0 || i==(NROWS-1) || (i==0 && j!=3) || j==(NCOLS-1));
            if (playground[i][j].isWall) {
                playground[i][j].type = stone;
            } else {
            playground[i][j].type = wood;
            }
        }
    }
    int play_x = 5;
    int play_y = 5;

    
    char sig;
    while (1) {
        plotMaze(playground,play_x,play_y);
        cin>>sig;
        if (sig == 'l') {
            if (play_x-1>=0) {
                if (!playground[play_y][play_x-1].isWall){
                    play_x--;
                }
            } 
        }
        if (sig == 'r') {
            if (play_x+1<NCOLS) {
                if (!playground[play_y][play_x+1].isWall){
                    play_x++;
                }
            } 
        }
        if (sig == 'u') {
            if (play_y-1>=0) {
                if (!playground[play_y-1][play_x].isWall){
                    play_y--;
                }
            } 
        }
        if (sig == 'd') {
            if (play_y+1<NROWS) {
                if (!playground[play_y+1][play_x].isWall){
                    play_y++;
                }
            } 
        }
        if (sig =='q') {
            break;
        }
    }
    }