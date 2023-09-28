#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}




int main(){
	string x ;
    cout << "Input text: " ;
	cin  >> x;
	string rev = func1(x);
	func2(rev);
    cout << "Reversed text: "<<func1(x)<<"\n" ;

	if (func2(x) == func2(rev)){
		cout<<"Palindrome: Yes" ;
	}else{
		cout<<"Palindrome: No" ;
	}
	cout << '\n';
    return 0;
}
