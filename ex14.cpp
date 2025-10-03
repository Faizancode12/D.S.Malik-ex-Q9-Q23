#include<iostream>
using namespace std;
int main()
{
    double specifiedSize, actualCapacity;
    
    cout << "Enter the size of the hard drive (in GB): ";
    cin >> specifiedSize;
    
    actualCapacity = (specifiedSize * 1000000000) / 1073741824;
    
    cout << "Actual storage capacity: " << actualCapacity << " GB" << endl;
}