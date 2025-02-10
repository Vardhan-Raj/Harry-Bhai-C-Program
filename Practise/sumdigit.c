#include <stdio.h>

// int sumOfDigit(int);
int sumOfDigit(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}

// main method
int main()
{
    int i = 10, sum;
    sum = sumOfDigit(i);
    printf("%d", sum);
    return 0;
}

// Programe to compute larger number amongst three numbers
// main method
int main()
{
    float a, b, c, large;
    printf("Enter any 3 numbers\n");
    scanf("%f%f%f", &a, &b, &c);
    large = a > b ? (a > c ? a : c) : (b > c ? b : c);
    printf("The larger no is :%.2f\n", large);
    return 0;
}

// Program for bitwise and
// main method
int main()
{
    int a = 14, b = 7, c;
    c = a & b;
    printf("Value of c = %d\n", c);
    return 0;
}