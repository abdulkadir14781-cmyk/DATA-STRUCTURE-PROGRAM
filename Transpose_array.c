#include<stdio.h>
int main()
{
    int mat[10][10],i,j,row,col;
    printf("Enter row and column:\n");
    scanf("%d%d",&row,&col);
    printf("Enter element into matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("Matrix Before Transpose:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d  ",mat[i][j]);
        }
        printf("\n");
    }
    printf("After Transpose Matrix:\n");
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d  ",mat[j][i]);
        }
        printf("\n");
    }
    return 0;
}

