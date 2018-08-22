//calling the library

#include<iostream>

using namespace std;
//calling function
int main()
{
//declaring variable for days
 int day;
//ask user to enter the no. of days

cout << "enter thr no. of days "<< endl;
cin >> day;
//declaring the variable for week and year and conversions
int week=day/7;
int year=day/365;
//displaying the results
cout <<"NO. OF WEEKS ARE "<< week<< endl;
cout <<"NO. OF YEARS ARE "<< year<< endl;








return 0;

}
