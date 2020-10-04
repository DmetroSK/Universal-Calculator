#include<stdio.h>

int main()
{
    int A[3][3];
    int row, col,i,j;
    long det;



    printf("\nEnter elements in matrix of size 2x2: \n\n");
    for(i=1; i<=2; i++)
    {
        for(j=1; j<=2; j++)
        {  printf("Enter the Element A[%d][%d] : ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("\nThe matrix is\n");
  for(i=1;i<=2;i++){
      printf("\n");
      for(j=1;j<=2;j++)
           printf("%d\t",A[i][j]);
  }


    det = (A[1][1] * A[2][2]) - (A[1][2] * A[2][1]);

    printf("\n\nDeterminant of matrix A = %ld", det);

    return 0;
}
