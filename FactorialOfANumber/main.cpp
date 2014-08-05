// this program is used to calculate factorial of an integer
#include <iostream>
#include<math.h>

using namespace std;
long factorial(int x);
int main()
{
    int x;
    cout << "Enter the integer " <<endl;
    cin >> x;
    int z =factorial(x);
    cout<<"The factorial is "<<z<<endl;
    return 0;

}
long factorial(int x){
int t =1;
int counter =1;
while(counter <= x){
    t = t*counter;
    counter++;
}
return t;
};
