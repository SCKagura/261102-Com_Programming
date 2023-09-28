#include <iostream>
using namespace std;

int main(){
  char rank ;
  cout << "Input your rank: ";
  cin >> rank;
  if (rank =='S') {
    cout<<"You have received Super Ultra Rare Unit!!!\n"
          "You have received 5 gems.\n"
          "You have received 1 gems.\n"
          "You have received 2000 coins.\n"
          "You have received very KAK items.\n";
  }
  if (rank == 'A'){
    cout<<"You have received 5 gems.\n"
          "You have received 1 gems.\n"
          "You have received 2000 coins.\n"
          "You have received very KAK items.\n";
  }

  if (rank =='B'){
    cout<<"You have received 1 gems.\n"
          "You have received 2000 coins.\n"
          "You have received very KAK items.\n";
  }
  if (rank == 'C'){
    cout<<"You have received 2000 coins.\n"
          "You have received very KAK items.\n";
  }
  if(rank == 'D'){
    cout<<"You have received very KAK items.\n";
  }

}









/*
int main()
{
  char rank;
  cout << "Input your rank: ";
  cin >> rank;
  switch(rank){
    case 'S': cout << "You have received Super Ultra Rare Unit!!!\n";
    case 'A': cout << "You have received 5 gems.\n";
    case 'B': cout << "You have received 1 gems.\n";
    case 'C': cout << "You have received 2000 coins.\n";
    case 'D': cout << "You have received very KAK items.\n";
  }
  return 0;
}


/*
"You have received Super Ultra Rare Unit!!!\n";
"You have received 5 gems.\n";
"You have received 1 gems.\n";
"You have received 2000 coins.\n";
"You have received very KAK items.\n";
*/