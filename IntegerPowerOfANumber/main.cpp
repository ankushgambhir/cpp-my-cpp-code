//this program calculates the non-negative integer power of an integer number
#include <iostream>
#include <math.h>

using namespace std;
long powerN(int number,int power);
int main()
{
    int number;
    int power;
    cout << "Enter the integer " << endl;
    cin >> number;
    cout <<"Enter power to be calculated " << endl;
    cin >> power;
    int z = powerN(number,power);
    cout<< "Final value is " <<z<<endl;
    return 0;
}
/*The method takes in two int paramaters, number and power.
It then calculates the result of raising the number to the given power and returns the calculated result.
 If a negative power is given, the method simply returns 1.*/
long powerN(int number,int power){
int t =1;
int counter =1;
while(counter <= power){
    t= t * number;
    counter++;
}
return t;
}
