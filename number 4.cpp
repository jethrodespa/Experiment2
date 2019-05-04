#include<iostream>

using namespace std;

int main()
{
	double n[3];
	for(int i=0; i<3; i++)
	{
		cout << "Enter number " << i+1 << ": ";
		cin >> n[i];
	}
	int max = n[0];
	for (int i=1; i<3; i++)
	{
		if(n[i]>max)
		{
			max = n[i];
		}
	}
	cout << "The LARGEST of the three numbers is: " << max;
	
	
}

