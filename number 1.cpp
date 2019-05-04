#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	double hours, total, limit;
	char package;
	
	cout << "Which package do you have A, B, or C? : ";
	package = cin.get();
	
	if(package == 'A' || package == 'B' || package == 'C')
	{
	
	cout << "\nHow many hours were used: ";
	cin >> hours;
	
	if(hours < 0)
	{
		cout << "Hours cannot be less than 0. Terminating program...";
		for(int i=0; i<=80; i++)
		{
	  		for(long int j=0; j<16000000; j++)
	  		{ }
	  	}
	  	return 0;
	}
	
	if(package == 'A')
	{
	limit = 995;
	if(hours < 10)
	{   
	total = limit;
	}
	else
	total = ((hours - 10) * 20) + limit;
	
	cout << "The amount due is: P " << total << "\n\n";
	}
	
	if(package == 'B')
	{
	limit = 1495;
	if(hours < 20)
	total = limit;
	else
	total = ((hours - 20) * 10) + limit;
	
	cout << "The amount due is: P " << total << "\n\n";
	}
	
	if(package == 'C')
	{
	limit = 1995;
	total = limit;
	cout << "The amount due is: P " << total << "\n\n";
	}
	}
	else
	{
		cout << "Invalid package. Terminating program...";
		for(int i=0; i<=80; i++)
		{
	  		for(long int j=0; j<16000000; j++)
	  		{ }
	  	}
	}
	return 0;
}

