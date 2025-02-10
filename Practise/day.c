#include<stdio.h>
// amin methid
int main(){
    int t;
    scanf("%d", &t);
    for(int i=0;i<t;i++)
    {
        int n;
        scanf("%d", &n);
        int output = n % 7;
        printf("%d\n", output);
        return 0;
    }
}