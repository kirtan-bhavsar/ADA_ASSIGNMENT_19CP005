#include<stdio.h>
#include<conio.h>

void printArray(int* A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d/n", A[i]);
    }
}

int partition(int A[],int low,int high){
    int pivot = A[low];
    int i =low+1;
    int j = high;
    int temp;
    do{
    while(A[i]<=pivot)
    {
        i++;
    }
 while(A[j]>pivot)
    {
        j--;
    }
        if(i<j){
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }
        } while(i<j);

    temp=A[low];
    A[low]=A[j];
    A[j]=temp;
return j;
}

void quickSort(int A[], int low, int high){
    int partition_break;

    if(low<high){
        partition_break = partition(A,low,high);
        quickSort(A,low,partition_break-1);
        quickSort(A,partition_break+1;high);
    }
}

    int main()
{
    int A[] = {4, 81, 32, 7, 9, 65};
    int n = 6;
    quickSort(A,0,n-1);
    printArray(A, n);
    return 0;
}
