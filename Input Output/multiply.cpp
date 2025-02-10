#include<iostream>
using namespace std;

int multiplyNumbers( int firstNum , int secondNum)
{
    int multiple = firstNum * secondNum;
    return multiple;
}

int main()
{
    int fristnumber = 89,secondnumber = 98;
    int Multiple = fristnumber * secondnumber;
    cout << "The Multiple :" << Multiple << endl;

    int multiple = multiplyNumbers(98,67);
    cout << "multiple :"<< multiple << endl;

    int kutta = multiplyNumbers(88,56);
    cout << "The multiple :"<< kutta << endl;

    return 0;
}