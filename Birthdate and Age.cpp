#include<iostream>
using namespace std;
int main()
{
	int dateofbirth,month,birthyear;
	cout<<"Enter your Birthdate: ";
	cin>>dateofbirth;
	cout<<"Enter your Birth month: ";
	cin>>month;
	cout<<"Enter your Birthyear: ";
	cin>>birthyear;
	int age=2023-birthyear;
	cout<<"\nYour current age is: "<<age;
	return 0;
}
