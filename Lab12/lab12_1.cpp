#include <iostream>
#include <ctime>
#include <string>
using namespace std ;

int main () {
    int random ;
    string grade;
    cout << "Press Enter 3 times to reveal your future.";
cin.get() ;
cin.get() ;
cin.get() ;
random =(rand()%9)+1 ;
    if (random == 1){
        grade = "A" ;
    }else if(random == 2) {
        grade = "B+" ;
    }else if(random == 3 ) {
        grade = "B" ;
    }else if(random == 4 ) {
        grade = "C+" ; 
    }else if (random == 5) {
        grade = "C" ;
    }else if (random == 6) {
        grade = "D+" ;
    }else if (random == 7) {
        grade = "D" ;
    }else if (random == 8) {
        grade = "F" ;
    }else if (random == 9) {
        grade = "W" ; 
    }
    cout << "You will get "<< grade <<" in this 261102.";
    return 0 ;
}

