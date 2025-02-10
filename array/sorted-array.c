// WAP to sort the array
#include<stdio.h>
#include<limits.h>
// main method
int main(){
    int arr[10]={90, 80, 40, 70, 20, 10, 60, 30, 50, 100};
    int sort[10];
    int min = INT_MIN;
    for(int i=0;i<10;i++){
        if(arr[i] > min){
            if(arr[i] < arr[i+1]){
                sort[i]= arr[i];
            }
        }
    }
    for (int i=0; i<10; i++){
        printf("%d\n",sort[i]);
    }
    
    return 0;
}