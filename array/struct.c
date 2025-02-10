#include<stdio.h>
struct tycoon{
    char name[20];
    char address_or_state[15];
    int net_worth;
    int age;
    int forbes_number;
};
// main method
int main(){
    int n;
    printf("Enter the how many no. of tycoons u have\n");
    scanf("%d", &n);
    struct tycoon tycoons[n];
    for(int i=0;i<n;i++){
        printf("Enter the name of the tycoon followed by its state or nation, net worth, age and forbes number\n");
        scanf("%s %s %d %d %d", tycoons[i].name, tycoons[i].address_or_state, &tycoons[i].net_worth, &tycoons[i].age, &tycoons[i].forbes_number);
    }
    printf("The details you enetred in the profiles are : \n");
    for(int i=0;i<n;i++){
        printf("Name : %s\nCame from : %s\nNet-worth : %d$\nAge : %d\nForbes Rank : %d(world-wide)\n", tycoons[i].name, tycoons[i].address_or_state, tycoons[i].net_worth, tycoons[i].age, tycoons[i].forbes_number);
    }
    printf("Thank-You for logging in\n");
    return 0;
}