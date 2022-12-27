#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
	double initial, interest, amount;
	cout << "Enter initial loan: ";
	cin >> initial;
	cout << "Enter interest rate per year (%): ";
	cin >> interest;
	cout << "Enter amount you can pay per year: ";
	cin >> amount;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect

	
	
		double balance = initial;
		int year=1;

		while(balance > 0.00)
		{
			cout << fixed << setprecision(2); 

			cout << setw(13) << left << year; 

			cout << setw(13) << left << balance;

			double x;
			x = (interest*balance)/100;
			cout << setw(13) << left << x;
			

			double total;
			total = balance+x;
			cout << setw(13) << left << total;
			

			if(amount > total)
				amount = total;
			cout << setw(13) << left << amount;

			balance = total - amount;
			cout << setw(13) << left << balance;
			cout << "\n";	
			
			year++;
		}
	
	
	return 0;
}
