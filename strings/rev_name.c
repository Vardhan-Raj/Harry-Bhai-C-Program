// // WAP to reverse the name
// #include<stdio.h>
// #include<stdlib.h>
// // main method
// int main(){
//     char name[]="RASHMI";
//     char rev_name[8];
//     for(int i=0;i<7;i++){
//         char temp;
//         temp=name[i];
//         name[i]=rev_name[7-i-1];
//         rev_name[7-i-1]=temp;
//     }
//     for(int j=0;j<7;j++){
//         printf("%s\n",rev_name[j]);
//     }
    
//     return 0;
// }
// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[20];
//     printf("Enter a string: ");
//     scanf("%s", str);

//     int length = strlen(str);
//     int isPalindrome = 1;

//     for (int i = 0; i < length / 2; i++) {
//         if (str[i] != str[length - i - 1]) {
//             isPalindrome = 0;
//             break;
//         }
//     }

//     if(isPalindrome){
//         printf("The string is a palindrome.\n");
//     } 
//     else{
//         printf("The string is not a palindrome.\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// void reverseArray(int *arr, int size) {
//   int i, j, temp;

//   for (i = 0, j = size - 1; i < j; i++, j--) {
//     temp = arr[i];
//     arr[i] = arr[j];
//     arr[j] = temp;
//   }
// }

// int main() {
//   int arr[] = {1, 2, 3, 4, 5};
//   int size = sizeof(arr) / sizeof(arr[0]);
//   reverseArray(arr, size);
//   for (int i = 0; i < size; i++){
//     printf("%d ", arr[i]);
//   }
//   printf("\n");
//   return 0;
// }

#include<stdio.h>
#include<string.h>
void revstr(char *str1){
    int i, temp, len;
    len=strlen(str1);
    if(i<len/2){
        temp=str1[i];
        str1[i]=str1[len-i-1];
        str1[len-i-1]=temp;
        i++;
        revstr(str1);
    }
}
int main(){
    char str[50];
    scanf("%s", str);
    revstr(str);
    printf("%s\n", str);
}