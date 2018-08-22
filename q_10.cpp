//call the library
#include<iostream>

using namespace std;
//call the function

int main()
{
//declaring variables for principal,rate and time

int p;
int r;
int t;
//ask user to enter principal,rate and time
cout << "PLEASE ENTER PRINCIPAL,RATE AND TIME RESPECTIVELY" << endl;
cin >>p;
cin >> r;
cin >> t;
int n;
cout << "PLEASE ENTER THE NUMBER OF TIME THE AMOUNT GETS COMPOUNDED IN A YEAR" << endl;
cin >> n;
//calculations
int amt =p*((1+(r/n))^n)^t;
int c=amt-p;
//display the result
cout << "THE COMPOUND INTEREST IS "<< c<< endl;
cout << "THE TOTAL AMOUNT IS "<< amt << endl;





return 0;

}
