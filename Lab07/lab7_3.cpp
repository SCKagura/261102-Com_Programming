#include<iostream>
#include<cmath>
using namespace std;

int adiff(int adeg,int bdeg){
  int sumdeg=abs(adeg-bdeg) %360;
  if (sumdeg>180){
    sumdeg=360-sumdeg ;
  }



  return sumdeg ;
}


int main(){

  cout << adiff(180,270);
  return 0;
}
