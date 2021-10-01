#include<stdio.h>
#include<conio.h>

void printArray(int* A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d/n", A[i]);
    }
}

void merge(int A[],int low,int mid,int high){
    int i,j,k;
    int B[100];
    i = low;
    j = mid+1;
    k = low;
while(i<=mid && j<=high)
{
    if(A[i]<A[j]){
        B[k] = A[i];
        i++;k++;
    }
    else{
        B[k] = A[j];
        j++;k++;
    }
}
while(i<=mid){
    B[k] = A[i];
    k++;i++;
}

while(j<=high){
    B[k] = A[j];
    k++;j++;
}
for(int i=low;i<=high;i++){
        A[i] = B[i];
}
}

void mergeSort(int A[],int low,int high){
    int mid;
    if(low<high){
        mid = (low+high)/2;
        mergeSort(A,low,mid);
        mergeSort(A,mid+1,high);
        mergeSort(A,mid,low,high);
    }
}
    int main()
{
    int A[] = {4, 81, 32, 7, 9, 65};
    int n = 6;
    mergeSort(A,0,6);
    printArray(A, n);
    return 0;
}