// #include <stdio.h>

// void removeWhitespacesAndVowels(char *str) {
//   int i, j;

//   for (i = 0; str[i] != '\0'; i++) {
//     if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' &&
//         !(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
//           str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' ||
//           str[i] == 'I' || str[i] == 'O' || str[i] == 'U')) {
//       str[j++] = str[i];
//     }
//   }

//   str[j] = '\0';
// }

// int main() {
//   char str[100];

//   printf("Enter a string: ");
//   fgets(str, 100, stdin);

//   removeWhitespacesAndVowels(str);

//   printf("String without whitespaces and vowels: %s\n", str);

//   return 0;
// }

#include <stdio.h>
#include <string.h>

void remove_vowels(char str[])
{
    int i, j;
    // Remove whitespaces
    for(i = 0; str[i] != '\0'; ++i)
    {
        while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        {
            for(j = i; str[j] != '\0'; ++j)
            {
                str[j] = str[j+1];
            }
            str[j] = '\0';
        }
    }

    // Remove vowels
    for(i = 0; str[i] != '\0'; ++i)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
           str[i] == 'o' || str[i] == 'u' || str[i] == 'A' ||
           str[i] == 'E' || str[i] == 'I' || str[i] == 'O' ||
           str[i] == 'U')
        {
            for(j = i; str[j] != '\0'; ++j)
            {
                str[j] = str[j+1];
            }
            str[j] = '\0';
            --i;
        }
    }
}
int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    remove_vowels(str);
    printf("\nResultant string after removing vowels and whitespaces: %s\n", str);
    return 0;
}
