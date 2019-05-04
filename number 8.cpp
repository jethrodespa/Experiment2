#include<iostream>

using namespace std;

int main()
{
	int num, prod=0;
	cout << "Enter a number: ";
	cin >> num;
	cout << "Multiplication table of " << num << " up to 10:\n";
	for(int i=1; i<=10; i++)
	{
		prod = i*num;
		cout << i << " * " << num << " = " << prod << endl;
	}
	
}
