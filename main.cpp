
#include <iostream>
#include <string>
#include "info.h"
using namespace std;

Vending_Machine::Vending_Machine(){

  }
void Vending_Machine::getSnacks(int ID){
  cout<< snacks[ID];
}
void Vending_Machine::getPrices(int ID){
  cout<< prices[ID];
}
void Vending_Machine::getCalories(int ID){
  cout<< calories[ID];
}
int ID;
void Vending_Machine::printMenu(){
  for (int i = 0; i <10; i++){
    cout<< i<< "-" << prices[i] << " "<< snacks[i] << " " << calories[i]<< endl;
  }
  }
void Vending_Machine::output(){
  int choices = 0;
  bool proceed = true;
  string userchoice;
  if (choices>10){
    proceed = false;
  }
  while(proceed){

    cout<< "please enter Snack ID: ";
    cin >> ID;
    cout << " " << endl;

    cout<< "You Selected: " <<snacks[ID] <<" That Will be $" << prices[ID] <<", chosen Snack has: " << calories[ID]<< " calories "<< endl;
    choices +=1;
    cout << " " << endl;

    cout << " Would you like to choose another snack? Enter Y or N: ";

    cin>> userchoice;

  if (userchoice == "Y"){
    proceed = true;
    choices +=1;

  }
  else if(userchoice =="N"){
    proceed = false;
    cout << "Thank you, come again!!" << endl;
  }
    else if (userchoice != "Y" || userchoice !="N"){
      cout<< "Wrong input" << endl;
      proceed = false;
    }
    }
}



int main(){
  Vending_Machine v = Vending_Machine();

  v.printMenu();
  v.output();

  return 0;

}
