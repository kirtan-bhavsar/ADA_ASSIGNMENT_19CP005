#include<stdio.h>
#include<conio.h>

void printArray(int* A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d/n", A[i]);
    }
}

void selectionSort(int* A, int n){
    int index,temp;
    for(int i=0; i<n-1 ; i++)
    {
        index=1;
        for(int j=i+1; j<n;j++)
        {
            if(A[j] >A[index])
            {
                index=j;
            }
        }
        temp = A[i];
        A[i] = A[index];
        A[index] = A[temp];
    }
}

int main()
{
    int A[] = {4, 81, 32, 7, 9, 65};
    int n = 6;
    selectionSort(A, n);
    printArray(A, n);
    return 0;
}