#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numberOfShares;
    double purchasePrice, sellingPrice;
    double amountInvested, serviceChargesBuy, serviceChargesSell;
    double grossSale, amountReceived, gainOrLoss;
    
    cout << "Enter number of shares sold: ";
    cin >> numberOfShares;
    cout << "Enter purchase price of each share: $";
    cin >> purchasePrice;
    cout << "Enter selling price of each share: $";
    cin >> sellingPrice;
    
    amountInvested = numberOfShares * purchasePrice;
    
    serviceChargesBuy = amountInvested * 0.015;
    serviceChargesSell = (numberOfShares * sellingPrice) * 0.015;
    
    grossSale = numberOfShares * sellingPrice;
    amountReceived = grossSale - serviceChargesSell;
    
    gainOrLoss = amountReceived - (amountInvested + serviceChargesBuy);
    
    cout << fixed << setprecision(2);
    cout << "\n--- Stock Transaction Summary ---" << endl;
    cout << "Amount invested: $" << amountInvested << endl;
    cout << "Total service charges: $" << (serviceChargesBuy + serviceChargesSell) << endl;
    
    if (gainOrLoss >= 0) {
        cout << "Amount gained: $" << gainOrLoss << endl;
    } else {
        cout << "Amount lost: $" << (-gainOrLoss) << endl;
    }
    
    cout << "Amount received after selling: $" << amountReceived << endl;
    
    return 0;
}