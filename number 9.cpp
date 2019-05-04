#include<iostream>

using namespace std;

int main()
{
	int row, col;
	cout << "How many rows: "; 
	cin >> row;
	cout << "How many columns: ";
	cin >> col;
	char table[row][col];
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<row; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
