#include<stdio.h>
// main method
int main()
{
    int i=0;
    int *j= &i;
    int **k= &j;
    printf("value of i is %d\n", *(&i));
    printf("address of i is %d\n", &i);
    printf("address of j is %d\n", &j);
    printf("value of j is %d\n", *(&j));
    printf("value of k is %d\n", *(&k));
    printf("address of k is %d\n", &k);
    return 0;
}