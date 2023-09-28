nclude<iostream>
using namespace std;

string printO(int N , int M ) 
{
	if(N<=0|| M<=0)
	{
		cout<<"Invalid input" ;
	}
	else
	{
		while (N>0 )
		{
			int i =M ;
			while(i>0)
			{
				cout<<"O" ;
				i-- ;
			}
			cout<<"\n" ;
			N-- ;
		}
	}
}
