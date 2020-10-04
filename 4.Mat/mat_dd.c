#include<stdio.h>

int main(){

  int a[4][4],i,j;

  long determinant;



  printf("Enter the 9 elements of matrix: \n\n");
  for(i=1;i<=3;i++)
     {
         for(j=1;j<=3;j++)
           {printf("Enter the Element A[%d][%d] : ", i, j);
           scanf("%d",&a[i][j]);}
     }

  printf("\nThe matrix is\n");
  for(i=1;i<=3;i++){
      printf("\n");
      for(j=1;j<=3;j++)
           printf("%d\t",a[i][j]);
  }

  determinant = a[1][1]*((a[2][2]*a[3][3]) - (a[2][3]*a[3][2])) -a[1][2]*(a[2][1]*a[3][3] - a[2][3]*a[3][1]) + a[1][3]*(a[2][1]*a[3][2] - a[2][2]*a[3][1]);

  printf("\n\nDeterminant of 3X3 matrix: %1d",determinant);

   return 0;
}
