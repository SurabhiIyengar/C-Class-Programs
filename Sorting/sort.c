#include<stdio.h>

void bubbleSort(double arr[],int n){
int i,j;
double temp;
for(i=0; i<n-1; i++)
    for(j=0; j<n-i-1 ; j++){
        if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
        }
    }

void printArray(double arr[],int size){
    int i;
    for(i=0; i<size; i++){
        printf("%.2lf",arr[i]);
    }
    printf("\n");

}
int main(){

    double arr[]={64.5,34.2,12.4,22.3,11.9,90.0};
    int n=sizeof(arr)/sizeof(arr[0]);

    printf("Unsorted array:\n");
    printArray(arr,n);

    bubbleSort(arr,n);

    printf("Sorted array:");
    printArray(arr,n);

    return 0;



}
