#include<stdio.h>
void main()
{    int i,j,sparseMatrix[4][5] =
    {   {0 , 0 , 3 , 0 , 4 },
        {0 , 0 , 5 , 7 , 0 },
        {0 , 0 , 0 , 0 , 0 },
        {0 , 2 , 6 , 0 , 0 }
    };
    printf("\nThe entered matrix is \n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
            printf("%d\t",sparseMatrix[i][j]);
        printf("\n");
    }
    printf("\nThe sparse Matrix is\n");
    int size = 0;
    for (i = 0; i < 4; i++)
        for (j = 0; j < 5; j++)
            if (sparseMatrix[i][j] != 0)
                size++;
    int compactMatrix[3][size];
    int k = 0;
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 5; j++)
            if (sparseMatrix[i][j] != 0)
            {   compactMatrix[k][0] = i;
                compactMatrix[k][1] = j;
                compactMatrix[k][2] = sparseMatrix[i][j];
                k++;
            }
    for (int i=0; i<size; i++)
    { for (int j=0; j<3; j++)
            printf("%d ", compactMatrix[i][j]);
      printf("\n");
    }}
