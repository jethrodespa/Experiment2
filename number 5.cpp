#include<iostream>

using namespace std;

int main()
{
	for(int i=1; i<=30;)
	{
		if(i<10){
			cout << i << ",";
			i++;
		}
		else if(i>=10 && i <= 30){
			if(i==30){
				cout << i;
				return 0;
			}
			cout << i << ",";
			i+=2;
		}
	}
}
