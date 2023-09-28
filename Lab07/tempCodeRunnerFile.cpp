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
		cout<<"Palindrome: NO" ;
	}
	cout << '\n';
    return 0;
}