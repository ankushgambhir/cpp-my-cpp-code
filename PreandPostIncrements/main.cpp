//This program is to understand the difference between pre-increment and post increment
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a,b,c,d;
    cout << "Enter a" << endl;
    cin >> a;
    b = a++ +5;
    cout <<"Using post increment ,Value of b =a++ +5 = " << b << endl;
    cout <<"New value of a is " << a << endl;
    cout << "Enter value of c,for better understanding enter same value as a"<< endl;
    cin >> c;
    d= ++c + 5;
    cout << "Using pre increment ,value of d =++c +5 =" << d << endl;
    cout << "New value of c is " << c <<endl;
    cout << "THANK YOU :)" <<endl;
    return 0;
}
