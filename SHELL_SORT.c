#include<stdio.h>
#include<conio.h>

void printArray(int* A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d/n", A[i]);
    }
}

void shellSort(int* A, int n){
  for(int gap=n/2;gap>=1;gap/2)
  {
      for(int j=gap;j<n;j++)
      {
          for(int i=j-gap;i>=0;i-gap)
          {
              if(A[i+gap] < A[i])
                {
                    break;
                }
                else
                {
                    int temp;
                    temp=A[i];
                    A[i]=A[i+gap];
                    A[i+gap]=temp;
                }
          }
      }
  }
}

int main()
{
    int A[] = {4, 81, 32, 7, 9, 65};
    int n = 6;
    shellSort(A, n);
    printArray(A, n);
    return 0;
}