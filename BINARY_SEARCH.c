#include<stdio.h>
#include<conio.h>

int binarySearch(int arr[], int size , int element){
    int low,mid,high;
    low = 0;
    high = size-1;
    while (low<=high){
        mid = (low+high)/2;
        if(arr[mid] == element){
            return mid;
        }
        if(arr[mid]<element){
            low=mid+1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}

int main(){
    //Main Function
    int arr[] = {1,3,47,98,154,268,437};
    int size = sizeof(arr)/sizeof(int);
    int element = 268;
    int searcIndex = binarySearch( arr , size , element );
    return 0;
}