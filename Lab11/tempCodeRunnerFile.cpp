#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt") ;
	dest.open("cheerbook_copy.txt");
	
	dest<<"\"-------------------- BOOM ---------------------\"" ;
	string textline ;
	while (getline(source,textline))
	{
	cout<<textline<<"\n" ;
	}
	dest<< "\"-------------------- HA!! ---------------------\""
    source.close();
    dest.close();
	return 0;
}
