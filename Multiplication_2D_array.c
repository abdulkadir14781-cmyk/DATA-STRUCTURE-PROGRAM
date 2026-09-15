#include<stdio.h>
int main()
{
    int mat1[10][10],mat2[10][10],mat3[10][10],i,j,k,row1,col1,row2,col2;
    printf("Enter row and column of first matrix:\n");
    scanf("%d%d",&row1,&col1);
    printf("Enter row and column of second matrix:\n");
    scanf("%d%d",&row2,&col2);
    printf("Enter data in matrix 1:\n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Enter data in matrix 2:\n");
    for(i=0;i<row2;i++)
    {
        for(j=0;j<col2;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    if(col1==row2)
    {
        printf("Matrix Multiplication is possible");
        for(i=0;i<row1;i++)
        {
          for(j=0;j<col2;j++)
         {
            mat3[i][j]=0;
            for(k=0;k<col1;k++)
            mat3[i][j]=mat3[i][j]+mat1[i][k]*mat2[k][j];
         }

       }
    printf("After Multiplication matrix:\n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col2;j++)
        {
            printf("%d  ",mat3[i][j]);
        }
        printf("\n");
    }
    }
    else
    printf("Muliplication is not possible\n");

    return 0;
}
