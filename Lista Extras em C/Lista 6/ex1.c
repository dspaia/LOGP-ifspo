#include <stdio.h>

int main(){
    int A[5][3], B[5][3], C[5][3];

    printf("Insira elementos da matriz A:\n");
    for (int i = 0; i < 5; i++)
    {for (int j = 0; j < 3; j++)
        {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        } 
    }
    
    printf("Insira elementos da matriz B:\n");
    for (int i = 0; i < 5; i++)
    {for (int j = 0; j < 3; j++)
        {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }

    }

    printf("Matriz C:\n");
    for (int i = 0; i < 5; i++)
    {for (int j = 0; j < 3; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
            printf("C[%d][%d] = A[%d][%d] + B[%d][%d] = %d + %d = %d\n", i, j, i, j, i, j, A[i][j], B[i][j], C[i][j]);
        }

    }  

    return 0;
}
    
