#include<iostream>
using namespace std;
int main()
{
    double num1, num2, num3, num4, num5, sum;
    int result;
    
    cout << "Enter five decimal numbers:" << endl;
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    
    sum = num1 + num2 + num3 + num4 + num5;
    result = static_cast<int>(sum);
    
    cout << "The sum converted to nearest integer is: " << result << endl;
}