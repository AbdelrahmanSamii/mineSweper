#ifndef INITIALIZATION_H_INCLUDED
#define INITIALIZATION_H_INCLUDED
extern int flagcounter;

void init(int a,int b,int rows,int colums,int OriginalGrid[rows][colums],int PlayingGrid[rows][colums]);

//-------------------------------------------------------------------------------------------------------------------------------
int rnd(int x);//Generate a random numbers .

//-------------------------------------------------------------------------------------------------------------------------------
void DFS(int i,int j,int rows,int colums,int PlayingGrid[rows][colums],int Originalgrid[rows][colums]);

#endif // INITIALIZATION_H_INCLUDED
