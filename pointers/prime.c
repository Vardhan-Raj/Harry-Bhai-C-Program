// #include <stdio.h>
// // main method
// int main() {
//     int n, i, flag = 0;
//     printf("Enter a positive integer: ");
//     scanf("%d", &n);
//     for(i=2; i<=n/2; ++i) {
//         if(n%i == 0) {
//             flag = 1;
//             break;
//         }
//     }
//     if (n == 1) {
//         printf("1 is neither prime nor composite.\n");
//     } 
//     else {
//         if (flag == 0)
//           printf("%d is a prime number.\n", n);
//         else
//           printf("%d is not a prime number.\n", n);
//     }
//     return 0;
// }
#include <stdio.h>

int fibonacci(int n); // Function prototype

int main() {
    int n, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (i = 0; i < n; ++i) {
        printf("%d, ", fibonacci(i));
    }
    return 0;
}

// Recursive function to calculate nth Fibonacci number
int fibonacci(int n) {
    if (n == 0 || n == 1) { // Base case
        return n;
    } else {
        return fibonacci(n-1) + fibonacci(n-2); // Recursive call
    }
} 
