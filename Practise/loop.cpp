#include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=11; i++){
        for(int j=1;j<=11;j++){   
            if(i+j<=12)
                cout<<"^";
            else
                cout<<"!";
        }
        cout<<"\n";
    }
    cout<<"VARDHAN RAJ"<<endl;
    for(int i=1; i<=11; i++){
        for(int j=1;j<=11;j++){   
            if(i+j>12)
                cout<<"^";
            else
                cout<<"!";
        }
        cout<<"\n";
    }
    return 0;
}