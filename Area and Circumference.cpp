#include<iostream>
using namespace std;
#define PI 3.141
int main()
{
	float area,radius;
	cout<<"Enter radius of circle\n";
	cin>>radius;
	area=PI*radius*radius;
	cout<<"Area of circle:"<<area;
	return 0;
}
