#include<stdio.h>
#include<string.h>
// function 
int occurence(char *line, char ch){
    for(int i=0;i<sizeof(line);i++){
        if(line[i]==ch)
            ch++;
        line++;
        return ch;
    }   
}
// main method
int main(){
    char line[100];
    char ch;
    fgets(line, sizeof(line), stdin);
    printf("Enter the character to find the occurence : ");
    scanf("%c", &ch);
    occurence(line, ch);
    printf("Occuence of the '%c' character in the line is %d\n", ch, occurence);
    return 0;
}