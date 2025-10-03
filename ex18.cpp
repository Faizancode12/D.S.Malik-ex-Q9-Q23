#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double payRate, hoursPerWeek, totalWeeks = 5;
    double grossIncome, netIncome, taxes;
    double clothes, schoolSupplies, savingsBonds, parentsBonds;
    
    cout << "Enter pay rate per hour: $";
    cin >> payRate;
    cout << "Enter number of hours worked per week: ";
    cin >> hoursPerWeek;
    
    grossIncome = payRate * hoursPerWeek * totalWeeks;
    taxes = grossIncome * 0.14;
    netIncome = grossIncome - taxes;
    
    clothes = netIncome * 0.10;
    schoolSupplies = netIncome * 0.01;
    savingsBonds = (netIncome - clothes - schoolSupplies) * 0.25;
    parentsBonds = savingsBonds * 0.50;
    
    cout << fixed << setprecision(2);
    cout << "\n--- Financial Breakdown ---" << endl;
    cout << "Income before taxes: $" << grossIncome << endl;
    cout << "Income after taxes: $" << netIncome << endl;
    cout << "Money spent on clothes and accessories: $" << clothes << endl;
    cout << "Money spent on school supplies: $" << schoolSupplies << endl;
    cout << "Money spent on savings bonds: $" << savingsBonds << endl;
    cout << "Money parents spend on additional savings bonds: $" << parentsBonds << endl;
}