#include<iostream>
#include<set>

using namespace std;

int count(int a[],int N){
	set<int> b;
	for(int i=0;i<N;i++){	
		b.insert(a[i]);
	}
	return b.size();
}
