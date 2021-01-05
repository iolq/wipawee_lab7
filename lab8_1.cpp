#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
	double l,r,p ;
	cout << "Enter initial loan: ";
	cin >> l;
	cout << "Enter interest rate per year (%): ";
	cin >> r;
	cout << "Enter amount you can pay per year: ";
	cin >> p;

	double PrevBalance = l;
	double Payment = p;
	double Interest,Total,NewBalance;

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

	for(int y = 0;y >= 0;y++)
	{
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << y+1; 
		cout << setw(13) << left << PrevBalance;
		Interest = PrevBalance * (r/100);
		cout << setw(13) << left << Interest;
		Total = PrevBalance + Interest;
		cout << setw(13) << left << Total;
		if(Total<Payment) Payment = Total;
		cout << setw(13) << left << Payment;
		NewBalance = Total - Payment;
		cout << setw(13) << left << NewBalance;
		cout << "\n";
		PrevBalance = NewBalance;
		if(NewBalance <= 0) break;
	}
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	/*cout << fixed << setprecision(2); 
	cout << setw(13) << left << 1; 
	cout << setw(13) << left << 1000.0;
	cout << setw(13) << left << 50.0;
	cout << setw(13) << left << 1050.0;
	cout << setw(13) << left << 100.0;
	cout << setw(13) << left << 950.0;
	cout << "\n";	*/
	
	return 0;
}