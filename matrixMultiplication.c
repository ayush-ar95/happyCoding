/*
here we will multiply two matrix (2D array)


*/
#include <stdio.h>

void userInput(int ptr[][],int r,int c)
{
    int i,j;
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            // scanf("%d",*(*(ptr+i)+j));
            scanf("%d",&ptr[i][j]);
        }
    }
    
}



int main()
{
    int p,q,r,s;
    int a[p][q], b[r][s];

    printf("enter the size of first matrix");
    scanf("%d,%d\n",&p,&q);
    printf("enter the size of second matrix");
    scanf("%d,%d\n",&r,&s);
    printf("enter the elements of matrix A");
    userInput(a,p,q);
    printf("enter the elements of matrix B");
    userInput(b,r,s);
    return 0;
}