#include<iostream>

using namespace std;

int main()
{
	int fnum = 0, snum = 1, sum=0;
	cout << fnum << "," << snum <<",";
	for(int i=1; i<=20; i++)
	{
		sum=fnum+snum;
		if(i==20)
		{
			cout << sum;
			return 0;
		}
		cout << sum << ",";
		fnum = snum;
		snum = sum;	
	}
}
