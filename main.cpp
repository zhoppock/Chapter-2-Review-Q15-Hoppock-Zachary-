//Zachary Hoppock
//vendingMachine.cpp
//9/12/2020
//Insert money, the price of an item, and get change in return
//Version  #1
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
int PENNIES_PER_DOLLAR = 100;
int PENNIES_PER_QUARTER = 25;
int PENNIES_PER_DIME = 10;
int PENNIES_PER_NICKEL = 1;
int bill_value = 5;
int item_price = 235;


int change_due = PENNIES_PER_DOLLAR * bill_value - item_price;
int quarters = change_due / PENNIES_PER_QUARTER;
change_due = change_due % PENNIES_PER_QUARTER;
int dimes = change_due / PENNIES_PER_DIME;
change_due = change_due % PENNIES_PER_DIME;
int nickels = change_due / PENNIES_PER_NICKEL;

cout << "Quarters:" << setw(6) << quarters << endl
     << "Dimes:" << setw(9) << dimes << endl
     << "Nickels:" << setw(7) << nickels << endl;
  return 0;
}