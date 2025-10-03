#include<iostream>
using namespace std;
int main()
{
    double fixedCommission, commissionPercent;
    double purchasingCost, minAddition, maxAddition;
    double minSellingPrice, maxSellingPrice;
    double minCommission, maxCommission;
    
    cout << "Enter salesperson's fixed commission: $";
    cin >> fixedCommission;
    cout << "Enter commission percentage (e.g., 30 for 30%): ";
    cin >> commissionPercent;
    cout << "Enter purchasing cost of the car: $";
    cin >> purchasingCost;
    
    minAddition = 200;
    maxAddition = 2000;
    
    minSellingPrice = purchasingCost + minAddition;
    maxSellingPrice = purchasingCost + maxAddition;
    
    minCommission = fixedCommission + (minAddition * commissionPercent / 100);
    maxCommission = fixedCommission + (maxAddition * commissionPercent / 100);
    
    
    cout << "\n--- Car Pricing Details ---" << endl;
    cout << "Minimum selling price: $" << minSellingPrice << endl;
    cout << "Maximum selling price: $" << maxSellingPrice << endl;
    cout << "Minimum commission: $" << minCommission << endl;
    cout << "Maximum commission: $" << maxCommission << endl;
}