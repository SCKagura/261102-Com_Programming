#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}



void stat(const double A[],int N,double B[] ) 
{
    double Max=0,Min=100000,sum=0,average=0,SDsum=0,GMSum=1,HMsum=0 ;

    for( int i = 0; i<6 ;i++ ) 
        {
            sum += A[i] ;  //Arithmetic Mean
            SDsum += pow(A[i],2) ; //Standard Deviation
            GMSum *= A[i] ;    //Geometric Mean
            HMsum += 1.0/A[i] ;  //Harmonic Mean
            if(Max<A[i])
            {
                Max = A[i] ;
            }
            if(Min>A[i]) 
            {
                Min = A[i] ;
            }
        }
    average = sum/N ;
    B[0] = average ; 
    B[1] = sqrt((SDsum/N)-pow(average,2)) ;
    B[2] = pow(GMSum,1.0/N) ;
    B[3] = N/HMsum ;
    B[4] = Max ;
    B[5] = Min ;



}

