#include<iostream>
using namespace std;
int main()
{
	float fahren,celcius;
	cout<<"Enter temperature in celcius\n";
	cin>>celcius;
	fahren=(9/5)*celcius*32;
	cout<<celcius<<"Centigrate is equal to"<<fahren
	<<"fahrenheit";
	return 0;
}
