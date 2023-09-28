#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath> 
#include <iomanip>
using namespace std ;

int main() {
    cout << setprecision(3);
    ifstream source ;
    ofstream dest  ;
    source.open("score.txt") ;
    dest.open("lnwza007.txt") ;
    string math ;
    double num=0,average=0,deviation=0,sum=0,sigma=0,current=0;
    while(getline(source,math))
    {
        current=stod(math) ;
        sum=sum+current;
        sigma+=pow(current,2) ;
        num++ ;
    }
    average=sum/num ;
    deviation=sqrt(sigma/num-pow(average,2)) ;
    cout<<"Number of data = "<<num<<"\n" ;
    cout<<"Mean = " <<average<<"\n" ;
    cout<<"Standard deviation = "<<deviation<<"\n" ;

source.close() ;
dest.close() ;
}
