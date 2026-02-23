
#include <stdio.h>
int main() {

    int N;
    printf("Enter N = ");
    scanf("%d", &N);

    int A[10], B[10];
    int P[10][10];

    printf("Input array A\n");
    printf("Enter %d integers: ", N);
    for(int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    printf("Input array B\n");
    printf("Enter %d integers: ", N);
    for(int i = 0; i < N; i++) {
        scanf("%d", &B[i]);
    }

    // สร้าง Matrix P
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            P[i][j] = A[i] * B[j];
        }
    }

    printf("Matrix P\n");
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            printf("%d\t", P[i][j]);
        }
        printf("\n");
    }

    return 0;
}
