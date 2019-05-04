#include<iostream>

using namespace std;

int main()
{
	int gal;
	cout << "Input how many gallons of water have you consumed based on the meter reading: ";
	do{
		cin >> gal;
		if (gal<0){
			cout << "You have inputted an invalid amount, try again: ";
		}
	}while(gal<0);
	double demandCharge = 35, consumptionCharge = 1.10, pay;
	double totalCost = demandCharge+(gal*consumptionCharge);
	//if payment is late
	double totalCostLate = totalCost + 20;
	cout << "Enter amount paid:   P ";
	do{
		cin >> pay;
		if (pay < 0)
			cout << "You have inputted an invalid amount, try again:  P ";
	}while(pay < 0);
	//conditions
	if(pay<totalCost){
		cout << "Your total bill costs P " << totalCost << " with a late charge fee of P20.\n";
		cout << "Please enter the right amount:  P ";
		cin >> pay;
		if( pay < 0)
		{
			cout << "Payment entered invalid. Terminating program...";
			//Para to sa time, di pa siguro kayo pwede mag functions hahaha
			for(int i=0; i<=80; i++)
			{
		  		for(long int j=0; j<16000000; j++)
		  		{ }
		  	}
		  	return 0;
		}
		else if(pay < totalCostLate){
			cout << "Payment entered insufficient. Terminating program...";
			//Para to sa time, di pa siguro kayo pwede mag functions hahaha
			for(int i=0; i<=80; i++)
			{
		  		for(long int j=0; j<16000000; j++)
		  		{ }
		  	}
		  	return 0;
		}
		else
			cout << "Payment entered accepted. You have a total change of P " << pay - totalCostLate;
	}
	else
		cout << "Payment entered accepted. Your bill costs P " << totalCost << ". You have a total change of P " << pay - totalCost << ".";
	return 0; 
}
