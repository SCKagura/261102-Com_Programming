#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <random>
#include <cstdlib>
#include <fstream> 
#include <algorithm> 
#include <cstring >

using namespace std;

int RemoveDuplicateElements(int [],int ) ;

int x[] = {} ;




int main()
{
    ifstream Scoreboardfile ;
    Scoreboardfile.open("C:\\Users\\boss\\Com_prog_project\\Progress_all_people\\PROGRESS.txt") ;
    string copytextline ; 
    int q= 0 ;
    while (getline(Scoreboardfile,copytextline))
    {
        x[q] =stoi(copytextline) ; 
        q++ ;

    }
      Scoreboardfile.close() ;
    sort(&x[0],&x[q], greater<int>());
 //   for (int i = 0 ; i < 5 ;i++) cout << x[i] << endl;
   
  
    Scoreboardfile.open("C:\\Users\\boss\\Com_prog_project\\Progress_all_people\\PROGRESS.txt") ;
    int r = 0,u ;
    for (int i = 0 ;i<5 ; i++)
    {
    Scoreboardfile.open("C:\\Users\\boss\\Com_prog_project\\Progress_all_people\\PROGRESS.txt") ;
        while (getline(Scoreboardfile,copytextline))
        {
            if (r < 5)
            {
            u = stoi(copytextline) ;
         //   cout << u <<endl ;
             if (u == x[r])
             {
                cout << copytextline << endl  ;
                 r++ ;
             }
            }
           
        }
    Scoreboardfile.close() ;
    }

}



