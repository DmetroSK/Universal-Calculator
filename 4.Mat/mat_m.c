#include <stdio.h>

int main()
{
  int row1, col1, row2,col2, i, j, k, sum = 0;
  int first[10][10], second[10][10], multiply[10][10];

     printf("Enter the number of Rows of Matrix 1    : ");
   scanf("%d",&row1);//m
   printf("Enter the number of Columns of Matrix 1 : ");
   scanf("%d",&col1);//n
    printf("\n");
   printf("Enter the number of Rows of Matrix 2    : ");
   scanf("%d",&row2);//p
   printf("Enter the number of Columns of Matrix 2 : ");
   scanf("%d",&col2);//q

    if (col1 != row2) {
      printf("\nMatrices with entered orders can't be multiplied with each other.\n");}
      else{
  printf("\nEnter the elements of first matrix\n\n");

  for (i = 1; i<= row1; i++)//c
   {
       for (j = 1; j <= col1; j++)//d
      { printf("Enter the Element a[%d][%d] : ", i, j);
      scanf("%d", &first[i][j]);}
   }

 printf("\nEnter the elements of second matrix\n\n");

    for (i = 1; i <= row2; i++)
     {
        for (j = 1; j <= col2; j++)
        {printf("Enter the Element a[%d][%d] : ", i, j);
        scanf("%d", &second[i][j]); }
     }

    for (i = 1; i <= row1; i++)
        {
      for (j = 1; j <= col2; j++)
       {
        for (k = 1; k <= row2; k++) {
          sum = sum + first[i][k]*second[k][j];
        }

        multiply[i][j] = sum;
        sum = 0;
      }
    }

    printf("\n\nProduct of entered matrices :\n\n");

    for (i = 1; i <= row1; i++)
        {
      for (j = 1; j <= col2; j++)
        printf("%d\t", multiply[i][j]);

      printf("\n");
    }
  }

  return 0;
}
