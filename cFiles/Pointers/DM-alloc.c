#include <stdio.h>
#include <stdlib.h>

// int main()
// {

//     int n;
//     printf("Enter the size of array : ");

//     scanf("%d\n", &n);

//     //  we cannot A[n] during run-time
//     int *A = (int*)malloc(n*sizeof(int));

//     for (int i = 0; i < n; i++)
//     {
//         A[i] = i + 1;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d", A[i]);
//     }
// }

int main()
{

    int n;
    printf("Enter the size of array : \n");
    scanf("%d\n",&n);
    //  we cannot A[n] during run-time
    int *A = (int*)calloc(n,sizeof(int));

    for (int i = 0; i < n; i++)
    {
        A[i] = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d", A[i]);
    }
}