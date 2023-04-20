#include<iostream>
using namespace std;
int main()
{
	int i,marks[5];
	float sum=0,avg,perc;
	cout<<"Enter marks obtained in 5 subjects";
	for(i=0;i<5;i++)
	{
		cin>>marks[5];
		sum=sum+marks[5];
	}
	avg=sum/5;
	perc=(sum/500)*100;
	cout<<"\nAverage Marks= "<<avg;
	cout<<"\nPercentage= "<<perc;
	return 0;
}
