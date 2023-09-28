#include<iostream>
#include<string>

using namespace std;
int main(){
	string x ;
	string reverse[50];
	int i;
    cout << "Input text: " ;
	cin  >> x;
	int count=x.size() ;
	while (count>=0){
		reverse[i] = x[count] ;
		count=count-1 ;
		i++;
	}
	cout<< reverse ;
}