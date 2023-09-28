#include<iostream>
using namespace std;

char before(char x){
	char result ;
	if (x<64 or x>90 ){
		cout<<"0" ;
	}else{
		result=x-1;
	return result;
	 }
	if(x=='A'){
		return 'Z' ;
	}
}









int main(){
	cout << before('A') << "\n"; }
	/*Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
*/
