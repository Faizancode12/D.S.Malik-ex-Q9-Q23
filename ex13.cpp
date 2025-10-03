#include<iostream>
using namespace std;
int main()
{
    double originalPrice, markupPercent, salesTaxRate;
    double sellingPrice, salesTax, finalPrice;
    
    cout << "Enter original price: $";
    cin >> originalPrice;
    cout << "Enter markup percentage: ";
    cin >> markupPercent;
    cout << "Enter sales tax rate (%): ";
    cin >> salesTaxRate;
    
    sellingPrice = originalPrice * (1 + markupPercent / 100);
    salesTax = sellingPrice * (salesTaxRate / 100);
    finalPrice = sellingPrice + salesTax;
    
    cout << "Original price: $" << originalPrice << endl;
    cout << "Markup percentage: " << markupPercent << "%" << endl;
    cout << "Store's selling price: $" << sellingPrice << endl;
    cout << "Sales tax: $" << salesTax << endl;
    cout << "Final price: $" << finalPrice << endl;
}
