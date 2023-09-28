
#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan,rate,paid;
	cout << "Enter initial loan: ";
	cin>>loan ;
	cout << "Enter interest rate per year (%): ";
	cin >> rate ;
	cout << "Enter amount you can pay per year: ";
	cin >> paid ;

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
		cout << fixed << setprecision(2);

	double newbalance,total ;
	newbalance= loan ;
	int i=0 ;
 while (newbalance>0){
	
	i++ ;
	cout << setw(13) << left << i; 
	cout << setw(13) << left << newbalance;
	cout << setw(13) << left << (newbalance*rate/100);
	cout << setw(13) << left <<newbalance+(newbalance*rate/100) ;
	if (paid>newbalance+(newbalance*rate/100)){
		paid=newbalance+(newbalance*rate/100) ;
		}
		total=newbalance+(newbalance*rate/100) ;
	cout << setw(13) << left << paid;
	cout << setw(13) << left <<total-paid ;
	newbalance=total-paid ;
	cout << "\n";	

 }
	
return 0;

}