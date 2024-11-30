#include<stdio.h>
#include<stdbool.h>
void BubbleSort(int arr[],int n){
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1])
        {
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
}
    return;
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return;
}
void SelectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int si=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[si]){
                si = j;
            }
        }
        if(arr[i]>arr[si]){
            int temp =arr[i];
            arr[i]=arr[si];
            arr[si]=temp;
        }
        }
    return;
}
void InsertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev>=0 && arr[prev]>curr){
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = curr;
    }
    return;
}
int main()
{
    int arr[] = {4,2,5,3,1};
    int n = 5;
    InsertionSort(arr,n);
    printArray(arr,n);
    return 0;
}