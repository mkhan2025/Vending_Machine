#include <iostream>
using namespace std;

class Vending_Machine {

public:

  Vending_Machine();

  void getSnacks(int ID);
  void getPrices(int ID);
  void getCalories(int ID);
  void output();
  void printMenu();


private:
string snacks[9] = {"Chips", "Cookies", "Skittles", "Gum", "sunchips", "m and m", "oreos", " Doritos", "Chocolate"};
float prices[9] = {1.2,1.1,1.2,1.2,0.85,1.2,1.1,2.2,1.5};
long calories[9] = {110,100,160,70,110,150,200,110,900};


};
