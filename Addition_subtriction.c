
#include<stdio.h>
int main()
{
    int mat1[5][5],mat2[5][5],i,j;
    int row1,row2,col1,col2;
    printf("Enter row and column of matrix 1:\n");
    scanf("%d%d",&row1,&col1);
    printf("Enter row and column  of matrix 2:\n");
    scanf("%d%d",&row2,&col2);
    printf("\nEnter element into first array:\n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
         printf("\n");
    }
    printf("\nEnter element into second array:\n");
    for(i=0;i<row2;i++)
    {
        for(j=0;j<col2;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
        printf("\n");
    }
    if(row1==row2&&col1==col2)
    {
         printf("Matrix Addition is possible\n");
         for(i=0;i<row1;i++)
         {
             for(j=0;j<col1;j++)
            {
               printf("%d ",mat1[i][j]+mat2[i][j]);
            }
            printf("\n");
        }
        printf("Matrix Subtraction is possible\n");
         for(i=0;i<row1;i++)
         {
             for(j=0;j<col1;j++)
            {
               printf("%d ",mat1[i][j]- mat2[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
         printf("Matrix Addition impossible");
    }

    return 0;
}
