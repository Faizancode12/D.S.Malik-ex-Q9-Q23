#include<iostream>
using namespace std;
int main()
{
    int totalSeconds, hours, minutes, seconds;
    
    cout << "Enter elapsed time in seconds: ";
    cin >> totalSeconds;
    
    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;
    
    cout << "Elapsed time is " << hours << ":" << minutes << ":" << seconds<<endl;
}