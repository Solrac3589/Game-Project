#include <iostream>
using namespace std;

int main()
{

//DEFINING THE MAP!
int i=1;
int x=1;
int y=1;
//int Orientation=1; // 1 forward, 2 down, 3 backward, 4 up.
int map_position [4][65][3]; //[Orientation][cell] [position x,position y, wall(1) or not(0)]

//Define forward movement
for (i=1;i<65;i++){
    map_position[1][i][1]=x;
    map_position[1][i][2]=y;
    if (i==8 || i==9 || i==13 || i==14 || i==16 || i==26 || i==27 || i==29 || i==30 || i==32 || i==35 || i==39 || i==40 || i==41 || i==42 || i==43 || i==44 || i==45 || i==46 || i==48 || i==50 || i==51 || i==52 || i==54 || i==56 || i==57 || i==61)
    {

        map_position[1][i][3]=1; //All the movements with a wall
    }
    else
    {
        map_position[1][i][3]=0;  //All the movements without a wall
    }
    if (x==8)
    {
        x=1;
        y++;
    }
    else
    {
        x++;
    }
}

x=1;
y=1;

//Define down movement
for (i=1;i<65;i++){
    map_position[2][i][1]=x;
    map_position[2][i][2]=y;
    if (i==2 || i==3 || i==4 || i==5 || i==7 || i==10 || i==11 || i==12 || i==15 || i==17 || i==18 || i==20 || i==21 || i==23 || i==25 || i==29 || i==31 || i==33 || i==38 || i==46 || i==47 || i==51 || i==52 || i==53 || i==57 || i==58 || i==59 || i==60 || i==61 || i==62 || i==63 || i==64)
    {

        map_position[2][i][3]=1; //All the movements with a wall
    }
    else
    {
        map_position[2][i][3]=0;  //All the movements without a wall
    }
    if (x==8)
    {
        x=1;
        y++;
    }
    else
    {
        x++;
    }
}

x=1;
y=1;

//Define backward movement

for (i=1;i<65;i++){
    map_position[3][i][1]=x;
    map_position[3][i][2]=y;
    if (i==0 || i==10 || i==14 || i==16 || i==17 || i==25 || i==27 || i==28 || i==30 || i==31 || i==32 || i==36 || i==37 || i==40 || i==41 || i==42 || i==43 || i==44 || i==45 || i==46 || i==47 || i==49 || i==51 || i==52 || i==53 || i==55 || i==57 || i==58 || i==62)
    {

        map_position[3][i][3]=1; //All the movements with a wall
    }
    else
    {
        map_position[3][i][3]=0; //All the movements without a wall
    }
    if (x==8)
    {
        x=1;
        y++;
    }
    else
    {
        x++;
    }

}


cout << map_position[3][56][3] ; //trying that the map is bieng well created
	return 0;
}
