#include <stdio.h>


void printArray(int* A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d/n", A[i]);
    }
}

void bubbleSort(int* A, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                int temp;
                temp = A[j];
                A[j]  = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

int main()
{
    int A[] = {41, 8, 32, 17, 69, 5};
    int n = 6;
    bubbleSort(A, n);
    printArray(A, n);
    return 0;
}