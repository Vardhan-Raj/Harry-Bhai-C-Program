// WAP to create a array of size 3x10 and create a table of 2, 7 and 9
#include<stdio.h>
// main method
int main(){
    int arr[3][10];
    for(int i=0;i<1;i++){
        for(int j=0;j<10;j++){
            printf("%d\t %d\t %d\t", 2*(j+1), 7*(j+1), 9*(j+1));            
            printf("\n");
        }
    }
    return 0;
}