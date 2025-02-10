#include<stdio.h>
#include<stdlib.h>
// main method
int main(){
    int n, *ptr;
    scanf("%d", &n);
    ptr=(int*)malloc(n);
    for(int i=0;i<n;i++){
        printf("Enetr the %d element : ", i);
        scanf("\n%d", &ptr[i]);
    }
    for (int i=0;i<n; i++){
        printf("\n%d", ptr[i]);
    }
    ptr=realloc(ptr, 20);
    free(ptr);
    return 0;
}