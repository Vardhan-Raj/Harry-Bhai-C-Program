// WAP to change the value of a variable to 10 times
// #include<stdio.h>
// void ten_times(int *a);                    // using call by reference
// // main method
// int main()
// {
//     int a;
//     printf("enter the value of a :\t");
//     scanf("\n%d", &a);
//     ten_times(&a);
//     printf("The value of a after using fuction is %d\n",a);
//     return 0;
// }

// void ten_times(int *a){
//     *a= *a * 10;
// }

// #include<stdio.h>
// int ten_time(int a);                     // using call by value
// // main method
// int main(){
//     int a;
//     printf("enter the value of a :\t");
//     scanf("\n %d", &a);
//     printf("The value of a after using function is %d\n",ten_time(a));
//     return 0;
// }

// int ten_time( int a){
//     return a*=10;
// }