#include <stdio.h>
#include <conio.h>

int main (void)
{
    int Arr[5] = {12,4,36,75,9};
    int Max = Arr[0];
    int Min = Arr[0];
//Finding the values
int i;
for(i=i;i<5;i++)
{
    if(Max < Arr[i])
    Max = Arr[i];
    if(Min > Arr[i])
    Min = Arr[i];
}

    printf("\nThe Max number is : %d",Max);
    printf("\nThe Min number is : %d",Min);

    return 0;
}