#include<iostream>
using namespace std;
int main(){
    int age;
    string name;
    cout << "enter you full name" << endl ;
    // cin >> name;       not use for full_name otherwise after space name is counted in age variable
    getline( cin,name); 
    cout << "enter your age" << endl;
    cin >> age;
    cout << "hello, "<< name << " Welcome to shark tank, your age is "<< age <<"\n";
    return 0;
}