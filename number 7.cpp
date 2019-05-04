#include<iostream>

using namespace std;

int main()
{
	int num, sum;
	do
	{
		sum=0;
		cout << "Enter a number: ";
		cin >> num;
		if(num<=0){
			cout << "Thank you!";
			return 0;
		}
		for(int i=1; i<=num; i++)
		{
			sum = sum + i;
		}
		cout << "The sum of all whole numbers 1 to " << num << " is " << sum << ".\n";
	}while(num>0);
	
}
