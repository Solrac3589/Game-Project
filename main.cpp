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
    if (i==1 || i==9 || i==10 || i==14 || i==15 || i==16 || i==17 || i==25 || i==27 || i==28 || i==30 || i==31 || i==32 || i==36 || i==37 || i==40 || i==41 || i==42 || i==43 || i==44 || i==45 || i==46 || i==47 || i==49 || i==51 || i==52 || i==53 || i==55 || i==57 || i==58 || i==62)
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
x=1;
y=1;

//Define Up movement

for (i=1;i<65;i++){
    map_position[3][i][1]=x;
    map_position[3][i][2]=y;
    if (i==1 || i==2 || i==3 || i==4 || i==5 || i==6 || i==7 || i==8 || i==10 || i==11 || i==12 || i==13 || i==15 || i==18 || i==19 || i==20 || i==23 || i==25 || i==26 || i==28 || i==29 || i==31 || i==33 || i==37 || i==39 || i==41 || i==46 || i==55 || i==59 || i==60 || i==61)
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
// DEFINING THE CHARACTERS
String name[3];
String attackName[3][3];
int character[3][7];


//Character Julen

character[1][1]=110; //actual health
character[1][2]=110; //max health
character[1][3]=1;   //attack
character[1][4]=1;   //defense
character[1][5]=1;   //int refeered to attack 1
character[1][6]=2;   //int refeered to attack 2
character[1][7]=3;   //int refeered to attack 3
name[1]="Julen";
attackName[1][1]="Stone trowing";
attackName[1][2]="Log hit";
attackName[1][3]="Camusean existencialism attack";

//Character Carlos

character[2][1]=90; //actual health
character[2][2]=90; //max health
character[2][3]=1;   //attack
character[2][4]=1;   //defense
character[2][5]=4;   //int refeered to attack 1
character[2][6]=5;   //int refeered to attack 2
character[2][7]=6;   //int refeered to attack 3
name[2]="Carlos";
attackName[2][1]="Half death man's kick";
attackName[2][2]="Drunked man's technique";
attackName[2][3]="Freeletics workout result";

//Character Alejandro

character[3][1]=100; //actual health
character[3][2]=100; //max health
character[3][3]=1;   //attack
character[3][4]=1;   //defense
character[3][5]=7;   //int refeered to attack 1
character[3][6]=8;   //int refeered to attack 2
character[3][7]=9;   //int refeered to attack 3
name[3]="Alejandro";
attackName[3][1]="...";
attackName[3][2]="Arcos knive slash";
attackName[3][3]="...";

//DEFINING ENEMIES


String nameEnemy[4];
String attackNameEnemy[4][3];
int characterEnemy[4][7];

//Enemy 1
characterEnemy[1][1]=100; //actual health
characterEnemy[1][2]=100; //max health
characterEnemy[1][3]=100; //attack
characterEnemy[1][4]=100; //defense
characterEnemy[1][5]=100; //int refeered to attack 1
characterEnemy[1][6]=100; //int refeered to attack 2
characterEnemy[1][7]=100; //int refeered to attack 3
nameEnemy[1]="Enemy 1";
attackNameEnemy[1][1]="ARCOCAPAZ";
attackNameEnemy[1][2]="Pooostmultiplication";
attackNameEnemy[1][3]="Gazebo fatality";

//Enemy 2
characterEnemy[2][1]=100; //actual health
characterEnemy[2][2]=100; //max health
characterEnemy[2][3]=100; //attack
characterEnemy[2][4]=100; //defense
characterEnemy[2][5]=100; //int refeered to attack 1
characterEnemy[2][6]=100; //int refeered to attack 2
characterEnemy[2][7]=100; //int refeered to attack 3
nameEnemy[2]="Enemy 2";
attackNameEnemy[2][1]="Badoo like";
attackNameEnemy[2][2]="Definition of PID";
attackNameEnemy[2][3]="...";

//Enemy 3
characterEnemy[3][1]=100; //actual health
characterEnemy[3][2]=100; //max health
characterEnemy[3][3]=100; //attack
characterEnemy[3][4]=100; //defense
characterEnemy[3][5]=100; //int refeered to attack 1
characterEnemy[3][6]=100; //int refeered to attack 2
characterEnemy[3][7]=100; //int refeered to attack 3
nameEnemy[3]="Enemy 3";
attackNameEnemy[3][1]="Robust stability";
attackNameEnemy[3][2]="Nyquist criteria";
attackNameEnemy[3][3]="Laboratory exam";

cout << map_position[3][56][3] ; //trying that the map is bieng well created
	return 0;
}
