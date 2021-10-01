#include<stdio.h>
#include<conio.h>

void printArray(int* A, int n){
    for (int i = 0; i < n; i++)
    {
       printf("%d",A[i]);
    }
    
}

int main{
     int A[] = {41,8,32,17,69,5};
     int n = 6;
    printArray(A,n);
    return 0;
}