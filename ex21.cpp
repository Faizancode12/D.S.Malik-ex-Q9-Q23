#include<iostream>
using namespace std;
int main()
{
    double mass1, mass2, distance;
    double k = 6.67e-8; // gravitational constant in dyn·cm²/g²
    double force;
    
    cout << "Enter mass of first body (in grams): ";
    cin >> mass1;
    cout << "Enter mass of second body (in grams): ";
    cin >> mass2;
    cout << "Enter distance between bodies (in cm): ";
    cin >> distance;
    
    force = k * (mass1 * mass2) / (distance * distance);
    
    cout << "Force between the bodies: " << force << " dynes" << endl;
}