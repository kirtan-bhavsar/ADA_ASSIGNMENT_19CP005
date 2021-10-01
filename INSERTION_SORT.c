#include<stdio.h>
#include<conio.h>

void printArray(int* A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d/n", A[i]);
    }
}

void insertionSort(int* A, int n){
  int key,j;
  for(int i=1;i<=n-1;i++)
  {
      key =A[i];
      j=i-1;
      while(j>=0 && A[j] >key)
      {
          A[j+1] = A[j];
          j--;
      }
      A[j+1] = key;
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