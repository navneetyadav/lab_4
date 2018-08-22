//calling the library
#include<iostream>
 using namespace std;
//calling the main function 
int main()
{
//declaring the variables and asking the user to enter the base and height
double b;
double h;

cout << "PLEASE ENTER BASE AND HEIGHT OF THE TRIANGLE RESPECTIVELY"<< endl;
//assigning value from user
cin >> b;
cin >> h;
//calculations
double a;
 a= (b*h)/2;
//displaying the result
cout << "THE AREA OF THE TRIANGLE IS " << a << endl;
return 0;








}
