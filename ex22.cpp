#include<iostream>
using namespace std;
int main()
{
    double riceAmount, bagCapacity;
    int bagsNeeded;
    
    cout << "Enter amount of rice (in pounds): ";
    cin >> riceAmount;
    cout << "Enter bag capacity (in pounds): ";
    cin >> bagCapacity;
    
    bagsNeeded = static_cast<int>(riceAmount / bagCapacity);
    if (riceAmount > bagsNeeded * bagCapacity) {
        bagsNeeded++;
    }
    
    cout << "Number of bags needed: " << bagsNeeded << endl;
}