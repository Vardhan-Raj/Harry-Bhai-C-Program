#include<iostream>
using namespace std;

int multiplyNumbers( int fisrt_param , int second_param){
    int Multiple = fisrt_param * second_param;
    return Multiple;
}

int main(){
    int first_num, second_num, multiple;
    cout << "Enter two numbers" << endl;
    cin >> first_num>>second_num;
    multiple = first_num * second_num;
    cout << "the multiplication is "<<multiple<<"\n";

    multiple = multiplyNumbers(89,87);
    cout << multiple << endl;
    return 0;
}