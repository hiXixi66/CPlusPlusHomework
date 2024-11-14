#include <iostream>
#include <string>

using namespace std;

typedef enum { wood, stone } material;
struct tile {
    int x, y;
    bool isWall;
    material type;
};


void plotMaze(tile **playground,int n, int m, int play_x,int play_y){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
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
    int n;
    int m;
    cin>> n;
    cin >> m;
    tile **playground = new tile*[n];
    for (int i = 0; i < n; i++) {
        playground[i] = new tile[m];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            playground[i][j].x = j;
            playground[i][j].y = i;
            playground[i][j].isWall = (j==0 || i==(n-1) || (i==0 && j!=3) || j==(m-1));
            if (playground[i][j].isWall) {
                playground[i][j].type = stone;
            } else {
            playground[i][j].type = wood;
            }
        }
    }
    int play_x = m/2;
    int play_y = n/2;

    
    char sig;
    while (1) {
        plotMaze(playground,n,m,play_x,play_y);
        cin>>sig;
        if (sig == 'l') {
            if (play_x-1>=0) {
                if (!playground[play_y][play_x-1].isWall){
                    play_x--;
                }
            } 
        }
        if (sig == 'r') {
            if (play_x+1<n) {
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
            if (play_y+1<m) {
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