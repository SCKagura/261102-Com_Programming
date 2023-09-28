#include<iostream>
using namespace std;

char before(char x){
	char result ;
	if (x<64 or x>90 ){
		result='0' ;
	}else{if(x!='A'){
		result=x-1;
	
	}
	 }
	if(x=='A'){
		result= 'Z' ;
	}
	return result;
}














int main(){
	cout << before('Z') << "\n"; }
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
