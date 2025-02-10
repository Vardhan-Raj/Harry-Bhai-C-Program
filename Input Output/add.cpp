#include<iostream>
using namespace std;

int addNumbers( int first_param, int second_param)
{
    int result = first_param + second_param;
    return result; 
}
int main()
{
    int sum;
    // int firstnumber = 34,secondnumber = 45;
    // sum = firstnumber + secondnumber;
    // cout << "The sum is :"<< firstnumber + secondnumber << endl;

    sum = addNumbers(34,78);
    cout<< "Sum :"<< sum << endl;

    sum = addNumbers(67,89);
    cout<< "Sum :"<< sum << endl ;
    
    return 0;

}