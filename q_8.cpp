// call the library
#include<iostream>

using namespace std;
//call main funtion
int main()
{
//declare variables for the respective subjects
int s1;
int s2;
int s3;
int s4;
int s5;
//ask the user to enter the marks

cout << "ENTER THE MARKS OF THE FIVE SUBJECTS OUT OF HUNDRED"<< endl;
cin >> s1;
cin >> s2;
cin >> s3;
cin >> s4;
cin >> s5;
//total marks
 int total=s1+s2+s3+s4+s5;
//avg marks
 double avg=total/5;
//percentage calculations
double  per =total*100/500;
//displaying the results
cout << "TOTAL MARKS ARE "<< total<<endl;
cout<< "AVERAGE MARKS ARE "<< avg<<endl;
cout << "THE PERCENTAGE SCORED IS " << per<<endl;


   







return 0;
}
