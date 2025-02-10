// // WRF to print a to power b
// #include<stdio.h>
// // function decleration
// int power(int, int); 

// // function definition
// int power(int a, int b){
//     if(a==1)
//         return a;
//     else if(b==1)
//         return a;
//     else if(b==0)
//         return 1;
//     else    
//         return(a* power(a,b-1));
// }
// // main method
// int main(){
//     int a=5,b=5;
//     printf("The value of a to power b is %d\n",power(a,b));
//     return 0;
// }

// #include<stdio.h>
// int minday(int, int);
// int minday(int N, int K){
// 	if(K>=N)
// 		return 1;
// 	else
// 		return((N/K)+minday(N%K,K));
// }
// // main method
// int main(){
// 	int t;
// 	scanf("%d", &t);
//     int N, K;
// 	for(int i=0;i<t;i++){
// 		scanf("%d %d", &N, &K);
// 		printf("%d\n",minday(N, K));
// 	}
// 	return 0;
// }
