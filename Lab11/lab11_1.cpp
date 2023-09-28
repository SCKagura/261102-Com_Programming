#include<iostream>
using namespace std;

int main(){
	int count[5] = {0,0,0,0,0};
	int student=0,i=0; 
		char  grade=' ' ;
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		
	
		cout << "Student [" <<i+1<< "]: ";
		cin >> grade;
		
		if(grade=='A') 
			{
			count[0]++ ;
			student++ ;
			}
		else if(grade=='B')
		{
			count[1]++ ;
			student++ ;
		}
		else if(grade=='C')
		{
			count[2]++ ;
			student++ ;
		}
		else if(grade=='D') 
		{
			count[3]++ ;
			student++ ;
		}
		else if(grade=='F')
		{
			count[4]++ ;
			student++ ;
		}
		else if(grade !='0')
		
		{ 
			cout<<"Wrong input. Please input again.\n" ;
			i-- ;
		} 
		
	
		i++ ;
	}while(grade != '0');
	
	
	
	cout << "In total "<<student<<" students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";	
	cout << "D = " << count[3] <<", ";	
	cout << "F = " << count[4];	
	
	return 0 ;
	
}
