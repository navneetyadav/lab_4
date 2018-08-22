//call the library
#include<iostream>

using namespace std;
//call the function
int main()
{
//declare the variables
double p;
double r;
double t;
//ask user to enter principal,rate and time
cout << "ENTRE THE PRINCIPAL,RATE AND TIME RESPECTIVELY" << endl;
cin >>p;
cin >> r;
cin >> t;
//calculate simple interest
double s=p*r*t/100;
//calculate amount
double amt=p+s;
//display result
cout << "THE SIMPLE INTEREST IS " << s<< endl;
cout << "THE AMOUNT IS  "<< amt << endl;





return 0;

}
