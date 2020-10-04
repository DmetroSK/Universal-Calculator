#include<stdio.h>

int main(){
    float matrix[10][10], ratio,a;
    int i, j, k, n;
    printf("Enter order of matrix: ");
    scanf("%d", &n);

    printf("Enter the matrix: \n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%f", &matrix[i][j]);
        }
    }
    for(i = 0; i < n; i++){
        for(j = n; j < 2*n; j++){
            if(i==(j-n))
                matrix[i][j] = 1.0;
            else
                matrix[i][j] = 0.0;
        }
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(i!=j){
                ratio = matrix[j][i]/matrix[i][i];
                for(k = 0; k < 2*n; k++){
                    matrix[j][k] -= ratio * matrix[i][k];
                }
            }
        }
    }

    for(i = 0; i < n; i++){
        a = matrix[i][i];
        for(j = 0; j < 2*n; j++){
            matrix[i][j] /= a;
        }
    }

    printf("The inverse matrix is: \n");
    for(i = 0; i < n; i++){
        for(j = n; j < 2*n; j++){
            printf("%.2f", matrix[i][j]);
            printf("\t");
        }
        printf("\n");
    }

    return 0;
}
