#include<stdio.h>
#include<conio.h>

int linearSearch(int arr[], int size,int element){
    for(int i=0;i<size;i++)
    {
        if(arr[i]==element){
            return i;
        }
    }
        return -1;
}

int main(){
    int arr[] = {12,4,87,6,35,74};
    int size= sizeof(arr)/sizeof(int);
    int element = 6;
    int serachIndex = linearSearch(arr , size , element);
    printf("The element %d was found at the index %d \n",element,searchIndex);
    return 0;
}
