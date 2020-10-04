#include<stdio.h>

int main() {
   int i, j,k, mat1[10][10], mat2[10][10], sum[10][10];
   int row1, col1, row2, col2;

   printf("Enter the number of Rows of Matrix 1    : ");
   scanf("%d",&row1);
   printf("Enter the number of Columns of Matrix 1 : ");
   scanf("%d",&col1);

   printf("\nEnter the number of Rows of Matrix 2    : ");
   scanf("%d", &row2);
     printf("Enter the number of Columns of Matrix 2 : ");
   scanf("%d", &col2);

     //system( "cls");

   if (col1 != row2) {
      printf("\n Order of two matrices is not same ");

   }
   else{ printf("\n");
   //Elements in Matrix 1
   for (i = 0; i < row1; i++)
    {
      for (j = 0; j < col1; j++)
      {
         printf("Enter the Element a[%d][%d] : ", i, j);
         scanf("%d", &mat1[i][j]);
      }
   }
    printf("\n");
   //Elements in Matrix 2
   for (i = 0; i < row2; i++)
   {
      for (j = 0; j < col2; j++) {
         printf("Enter the Element b[%d][%d] : ", i, j);
         scanf("%d", &mat2[i][j]);
      }
   }

   //system( "cls");

    // Adding Two matrices
     sum[i][j]=0;
     for(i=0;i<row1;++i)
        {
        for(j=0;j<col1;++j)
        {  for(k=0;k<row1;++k)
        {
            sum[i][j]=sum[i][j]+mat1[i][k]*mat2[k][j];
        }
        }
        }


    // Displaying the result
    printf("\nSum of two matrix is: \n\n");

    for(i=0;i<row1;++i)
       { for(j=0;j<col1;++j)
        {

            printf("%d   ",sum[i][j]);

            if(j==col1-1)
            {
                printf("\n\n");
            }
        }
       }
   }
    return 0;
}

