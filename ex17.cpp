#include<iostream>
using namespace std;
int main()
{
    double totalMilk, costPerLiter, profitPerCarton;
    int cartonsNeeded;
    double productionCost, totalProfit;
    
    cout << "Enter total amount of milk produced (in liters): ";
    cin >> totalMilk;
    cout << "Enter cost of producing one liter: $";
    cin >> costPerLiter;
    cout << "Enter profit per carton: $";
    cin >> profitPerCarton;
    
    cartonsNeeded = static_cast<int>(totalMilk / 3.78 + 0.5);
    productionCost = (totalMilk / 3.78) * costPerLiter;
    totalProfit = (totalMilk / 3.78) * profitPerCarton;
    
    cout << "Number of milk cartons needed: " << cartonsNeeded << endl;
    cout << "Cost of producing milk: $" << productionCost << endl;
    cout << "Profit from producing milk: $" << totalProfit << endl;
}
