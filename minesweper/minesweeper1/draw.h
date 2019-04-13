#ifndef DRAW_H_INCLUDED
#define DRAW_H_INCLUDED
extern int Replay,flagcounter,LoseCheck,Moves,remember,Flags,threadpause;
extern double score ;
extern long long starttime,savetime,timer,counter,minutes;
extern COORD coord;
//Original Grid values : 0 ==> Empty , From 1 to 8 ==> number of mines beside , 9 ==> Mine .
//Playing Grid values : -1 ==> Empty cell Opened , -2 ==> a cell with a Number opened , -3 ==> Flagged cell.
// , -4 ==> a cell with ? , -5 ==> Opened Mine .
void draw1(int a,int b);

//--------------------------------------------------------------------------------------------------------------------------------
void draw2(int rows,int colums,int OriginalGrid[rows][colums],int PlayingGrid[rows][colums]);

//-------------------------------------------------------------------------------------------------------------------------------
void drawlose(int rows,int colums, int OriginalGrid[rows][colums],int PlayingGrid[rows][colums]);

//------------------------------------------------------------------------------------------------------------------------------
void drawwin(int rows,int colums, int OriginalGrid[rows][colums],int PlayingGrid[rows][colums]);

//----------------------------------------------------------------------------------------------------------------------------------
void clear(void);


void gotxy(int x,int y);//a function to print the time and return the cursor to it's place again .

#endif // DRAW_H_INCLUDED
