#include<iostream>
using namespace std;
int main()
{
    double totalMilk, costPerLiter, profitPerCarton;
    int cartonsNeeded;
    double productionCost, totalProfit;
    
    cout << "Enter total amount of milk produced (in liters): ";
    cin >> totalMilk;
    
    cartonsNeeded = static_cast<int>(totalMilk / 3.78 + 0.5);
    productionCost = (totalMilk / 3.78) * 0.38;
    totalProfit = (totalMilk / 3.78) * 0.27;
    
    cout << "Number of milk cartons needed: " << cartonsNeeded << endl;
    cout << "Cost of producing milk: $" << productionCost << endl;
    cout << "Profit from producing milk: $" << totalProfit << endl;
}