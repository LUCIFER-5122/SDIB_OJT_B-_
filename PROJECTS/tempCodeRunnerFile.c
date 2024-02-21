#include<stdio.h> 
int suduko[9][9]; // suduko of size 9X9
void sudukosol(int,int); // suduko solution function
int crow(int row,int num) // row checking  function
{
    int col;
    for(col =0; col<9; col++)
    {
        if(suduko[row][col] == num)
        {
            return 0;
        }
    }
    return 1;
}
int ccol(int col,int num) //  column checking function
{
    int row;
    for(row =0; row<9; row++)
    {
        if(suduko[row][col] == num)
        {
            return 0;
        }
    }
    return 1;
}
int grid(int row,int col, int num)
{
    row = (row/3)*3;
    col = (col/3)*3;
    int x,y;
    for(x=0;x<3;x++)
    {
        for(y=0;y<3;y++)
        {
            if(suduko[row+x][col+y] == num)
            {
                return 0;
            }
        }
    }
    return 1;
}
void check(int row, int col)
{
    if(col<8)
        sudukosol(row,col+1);
    else
        sudukosol(row+1,0);
}
void display()
{
    int row, col;
    printf("\n_*_*_*_THE SOLVED SUDUKO IS_*_*_*_\n\n");
    for(row =0;row<9;row++)
    {
        for(col=0;col<9;col++)
        {
             printf("\n_______|_______|_______\n\n");
             printf("\n_______|_______|_______\n\n");
             printf("\n_______|_______|_______\n\n");
             printf("\n_______|_______|_______\n\n");
             printf("\n_______|_______|_______\n\n");
             printf("\n_______|_______|_______\n\n");
             printf("\n_______|_______|_______\n\n");
             printf("\n_______|_______|_______\n\n");
             printf("\n_______|_______|_______\n\n");
            printf("%d ",suduko[row][col]);
           
        }
        printf("\n");
         
    }
}
void sudukosol(int row, int col)
{
    if(row>8)
        display();
    if(suduko[row][col] != 0)
    {
        check(row,col);
    }
    else
    {
        int c; //counter variable
        for(c=1;c<=9;c++)
        {
            if((crow(row,c) == 1) && (ccol (col,c) == 1) && (grid (row,col,c) == 1))
            {
                suduko[row][col] =c;
                check(row,col);
            }
        }
        suduko[row][col] =0;
    }
}
int main()
{
    int row,col;
    printf("Enter the DESIRED SUDUKO and Enter 0 for unknown places:\n\n");
    for(row=0;row<9;row++)
    {
        for(col=0;col<9;col++)
        {
            scanf("%d",&suduko[row][col]);
        }
    }
    sudukosol(0, 0); 
    return 0;
}

/* TRY THIS 9X9 SUDUKO AND CHECK THE ANSWER
1 0 3 4 0 0 7 0 9
0 5 6 0 8 9 0 2 3
0 8 9 1 0 3 4 0 6
2 1 4 0 6 5 0 9 7
3 0 0 8 0 7 0 1 4
8 0 7 0 1 4 0 6 5
0 3 1 0 4 0 9 7 8
6 4 0 9 7 0 5 3 1
0 7 8 0 0 1 0 4 2
*/
