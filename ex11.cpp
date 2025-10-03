#include<iostream>
using namespace std;
int main()
{
    double capacity, milesPerGallon, miles;
    
    cout << "Enter the fuel tank capacity (in gallons): ";
    cin >> capacity;
    cout << "Enter miles per gallon: ";
    cin >> milesPerGallon;
    
    miles = capacity * milesPerGallon;
    
    cout << "The automobile can be driven " << miles << " miles without refueling." << endl;
}