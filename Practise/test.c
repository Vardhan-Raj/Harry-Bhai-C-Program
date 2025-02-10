#include<stdio.h>
int main()
{
  int a =10;
  int x = (++a) + (++a);
  printf("%d", x);
  return 0;
}