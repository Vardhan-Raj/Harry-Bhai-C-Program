// WAP which prints second maximum numbers
// #include<iostream>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     int a,b,c,sec_max=0;
//     for(int i=0;i<t;i++){
//         cin>>a>>b>>c;
//         if(a>b && a>c && b>c)
//             sec_max=b;
//         else if(a>b && a>c && c>b)
//             sec_max=c;
//         else if(b>a && b>c && a>c)
//             sec_max=a;
//         else if(b>a && b>c && c>a)
//             sec_max=c;
//         else if(c>a && c>b && a>b )
//             sec_max=a;
//         else if(c>a && c>b && b>a )
//             sec_max=b;
//         cout<<sec_max<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
// 	int t,n;
// 	cin>>t;
	
// 	for(int i=0;i<t;i++){
// 	    int count=0;
// 	    cin>>n;
// 	    int arr[n];
//     	for(int j=0;j<n;j++){
//             cin>>arr[j];
//     	    if(arr[j]>=1000)
//                 count++;
//         }
//         cout<<count<<endl;
// 	}
// 	return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
// 	int t;
//     float T1,T2,R1,R2,a,b;
// 	// cin>>t;
// 	// for(int i=0;i<t;i++){
        
//     //     if(a==b)
//     //         cout<<"YES"<<endl;
//     //     else
//     //         cout<<"NO"<<endl;
// 	// }
//     cin>>T1>>T2>>R1>>R2;
//     a=(T1*T1)/(R1*R1*R1);
//     b=(T2*T2)/(R2*R2*R2);
//     cout<<a<<endl;
//     cout<<b<<endl;
// 	return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int weight;
//     cin>>weight;
//     if(weight%2==0)
//         cout<<"YES"<<endl;
//     else
//         cout<<"NO"<<endl;
//     return 0;
    
// }


// #include <iostream>
// using namespace std;

// int main(){
// 	int t,num;
// 	cin>>t;
// 	for(int i=0;i<t;i++){
//         int count=0;
//         cin>>num;
//         while(num>0){
//             if(num%10==4){
//                 count++;
//             }
//             num/=10;
//         }
//         cout<<count<<endl;
// 	}
// 	return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int t,N;
//     cin>>t;
//     for(int i=0;i<t;i++)
//     {
//         cin>>N;
//         int time_given[N],time_taken[N];
//         int sum=0,count=0;
//         for(int j=0;j<N;j++)
//         {
//             cin>>time_given[j];            
//         }
//         for(int k=0;k<N;k++)
//         {
//             cin>>time_taken[k];            
//         }
//         for(int l=0;l<N;l++)
//         {
//             sum+=time_taken[l];
//             if(sum>=time_given[l])
//                 count++;
//         }
//         cout<<count<<endl;
//     }
// 	return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
// 	int t;
// 	cin>>t;
// 	for(int i=0;i<t;i++){
//         int N;
//         cin>>N;
//         if(N%4==0)
//             N++;
//         else
//             N--;
//         cout<<N<<endl;
// 	}
// 	return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
// 	int t;
// 	cin>>t;
// 	for(int i=0;i<t;i++){
// 	    int R1,R2,W1,W2,C1,C2;
//         cin>>R1>>W1>>C1>>R2>>W2>>C2;
// 	    if((R1+W1+C1) > (R2+W2+C2) && R1!=R2 && W1!=W2 && C1!=C2)
// 	        cout<<"A"<<endl;
//         else if((R1+W1+C1) < (R2+W2+C2) && R1!=R2 && W1!=W2 && C1!=C2)
//             cout<<"B"<<endl;
// 	}
// 	return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n,count=0,maximun_count=0;
// 	    cin>>n;
// 	    int ar[n],ar2[n];
// 	    for(int i=0;i<n;i++){
// 	        cin>>ar[i];
// 	    }
// 	    for(int i=0;i<n;i++){
// 	        cin>>ar2[i];
// 	    }
// 	    for(int i=0;i<n;i++){
//             if(ar[i]!=0 && ar2[i]!=0){
//                 count++;
//                 maximun_count=max(maximun_count,count);
//             }
//             else 
//                 count=0;
// 	    }
// 	    cout<<count<<endl;
// 	}
// 	return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
// 	int t,num;
// 	cin>>t;
// 	for(int i=0;i<t;i++){
//         cin>>num;        
// 	}
//     int score;
// 	for(int i=0;i<t;i++){
//         if(num>0 && num<=10)
//             score =num;
//         else if((num%10 + num/100) <= 10 && num>10 && num>99)
//             score= num%10 + num/100;
//         else 
//             score =-1;
//         cout<<score<<endl;
// 	}
// 	return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
// 	int t; cin>>t;
// 	for(int i=0;i<t;i++){
//         float N,M;
//         cin>>N>>M;
//         float dis=N-N/10;
//         // if(dis<M)
//         //     cout<<"ONLINE"<<endl;
//         // else if(dis == M)
//         //     cout<<"EITHER"<<endl;
//         // else
//         //     cout<<"DINING"<<endl;
//         cout<<dis<<endl;
// 	}
// 	return 0;
// }

// #include <iostream>
// #include<limits.h>
// using namespace std;

// int main() {
// 	int t; cin>>t;
// 	for(int i=0;i<t;i++){
// 	    long int arr[3];
// 	    int max= INT_MIN, sl=INT_MIN;
// 	    for(int i=0;i<3;i++){
// 	       cin>>arr[i]; 
// 	    }
//         for(int i=0;i<3;i++){
//             if(max<arr[i]){
// 	           max=arr[i];
// 	        }
//         }
//         for(int i=0;i<3;i++){
//             if(max>arr[i] && arr[i]>sl){
//                 sl= arr[i];	           
// 	        }
//         }
// 	    cout<<sl<<endl;
// 	}
// 	return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
// 	int t; cin>>t;
// 	for(int i=0;i<t;i++){
//         int p; cin>>p;
//         int x;
//         if(p/10==0)
//             x=p;
//         cout<<x;
// 	}
// 	return 0;
// }

// #include <iostream>
// #include<limits.h>
// using namespace std;

// int main() {
// 	int t; cin>>t;
// 	for(int i=0;i<t;i++){
//         int A,B,C,score=INT_MIN;
//         cin>>A>>B>>C;
//         if(A>score)
//             score=A;
//         if(B>score)
//             score=B;
//         if(C>score)
//             score=C;
//         cout<<score<<endl;
// 	}
// 	return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
// 	int t; cin>>t;
// 	for(int i=0;i<t;i++){
// 	    int n; cin>>n;
// 	    int alice[n],bob[n];
// 	    int count=0;
// 	    for(int i=0;i<n;i++){
// 	        cin>>alice[i];
// 	    }
// 	    for(int i=0;i<n;i++){
// 	        cin>>bob[i];
// 	    }
// 	    for(int i=0;i<n;i++){
// 	        if(2*bob[i] >= alice[i] && 2*alice[i]>=bob[i])
// 	            count++;
//             else
//                 count;
// 	    }
// 	    cout<<count<<endl;
// 	}
// 	return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
// 	int t; cin>>t;
// 	for(int i=0;i<t;i++){
// 	    int n; cin >>n ;
// 	    int arr[n];
// 	    for(int i=0;i<n;i++){
//             cin>>arr[i];
// 	    }
// 	    int count=0;
// 		double arr2=0;
// 	    for(int i=0;i<n;i++){
// 	        arr2+=arr[i];
//             // float x=(arr2/(i));
//             if((arr2/(i+1))*100 == 100)
//                 count++;
// 	    }
// 	    cout<<count<<endl;
// 	}
// 	return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
// 	int t; 
// 	cin>>t;
// 	for(int i=0;i<t;i++){
// 	    char arr[10];
// 	    for(int j=0;j<10;j++){
//             cin>>arr[j];	        
// 	    }
// 	    int x=(((int)arr[0])-48)*10+((int)arr[1]-48);
//     	int y=(((int)arr[3])-48)*10+((int)arr[4]-48);
// 	    if(x>12 && y<=12)
// 			cout<<"DD/MM/YYYY"<<endl;
// 		else if(x<=12 && y>12)
// 			cout<<"MM/DD/YYYY"<<endl;
// 		else	
// 			cout<<"BOTH"<<endl;
// 	}
// 	return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
// 	int t; cin>>t;
// 	for(int i=0; i<t; i++){
// 	    int A, B;
// 	    cin>>A>>B;
// 	    while(A!=B){
// 	        if(A<B)
// 	            A*=2;
// 			else if(A>B)
// 				B*=2;
// 	    }
// 		if(A==B)
// 	        cout<<"YES"<<endl;
//         else 
//             cout<<"NO"<<endl;
// 	}
// 	return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         float N, X, Y, A, B;
//         cin>>N>>X>>Y>>A>>B;
//         float x= X/A;
//         float y= Y/B;
//         // if(x > y)
//         //     cout<<"DIESEL"<<endl;
//         // else if(x < y)
//         //     cout<<"PETROL"<<endl;
//         // else
//         //     cout<<"ANY"<<endl;
//         printf("%f %f\n", x, y);
//     }
// 	return 0;
// }

// #include <iostream>
// using namespace std;
// // function
// int convert(int arr[], int n){
//     for(int i=0;i<n;i++){
//         if(arr[i]==1)
//             arr[i]=0;
//         else
//             arr[i]=1;
//     }
//     return arr[n];
// }

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         convert(arr, n);
//     }
// 	return 0;
// }

// #include <iostream>
// #include<string.h>
// using namespace std;

// int main() {
//     char ch;
//     cin>>ch;
//     char s = toupper(ch);
//     if(s=='A' || s=='E' || s=='I' || s=='O' || s=='U')
//         cout<<"VOWEL"<<endl;
//     else
//         cout<<"CONSONANT"<<endl;
//     cout<<s<<endl;
// 	return 0;
// }

// #include <iostream>
// #include<string>
// using namespace std;

// int main() {
// 	int n;
// 	cin>>n;
// 	while(n--){
// 	    int N,count=0;
// 	    cin>>N;
// 	    string s;
// 	    cin>>s;
// 	    for(int i=0;i<N;i++){
// 	        if(s[i]=='a' || s[i]=='e' || s[i]=='i'|| s[i]=='o'|| s[i]=='u'){
// 	            count=0;
// 	            continue;
// 	        }
// 	        else{
// 	            count++;
// 	            if(count==4){
// 	                break;
// 	            }
// 	        }
	       
// 	     }
// 	     if(count<4){
// 	            cout<<"YES"<<endl;
// 	     }
// 	     else{
// 	            cout<<"NO"<<endl;
// 	     }
// 	}
// 	return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n, h;
//     cin>>n>>h;
//     int arr[n], count=0;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//         if(arr[i]<=h)
//             count++;
//         else 
//             count+=2;
//     }
//     cout<<count<<endl;
//     return 0;
// }