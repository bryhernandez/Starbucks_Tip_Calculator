#include <iostream>
#include <iomanip>
#include <vector>
#include <math.h>
using namespace std;

int main() {

  ////This section will keep track of how many employees there is
  int employees;
  cout << "How many employees this week? " << endl;
  cin >> employees;

  ////This section will keep track of the total labor
  double labor, total_labor = 0;
  vector<int> rounded_labor;
  cout << "\nEnter the amount of labor per employee. " << endl;
  for(int i = 0; i < employees; i++){ //runs for the amt of employees
    cout << i+1 << ": ";
    cin >> labor;
    total_labor += round(labor); //round will either round up or down, also keeps track of total labor
    rounded_labor.push_back(round(labor)); // will keep track of the labor per person on order
  }

  double money;
  cout << "\nHow much total money?" << endl;
  cin >> money;

  double tips = money/total_labor; 
  cout << endl << money << "/" << total_labor << " = " << tips << endl;

  cout << endl << "LABOR" << "\tTIPS" << endl;

  for(int i = 0; i < employees; i ++){
    cout << rounded_labor[i] << setw(10) << round(tips*rounded_labor[i]) << endl; 
  }

}
