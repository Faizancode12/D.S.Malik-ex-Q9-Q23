#include <iostream>
using namespace std;
int main()
{
    double score1, score2, score3, score4, score5, average;
    
    cout << "Enter five test scores:" << endl;
    cin >> score1 >> score2 >> score3 >> score4 >> score5;
    
    average = (score1 + score2 + score3 + score4 + score5) / 5;
    
    cout << "The average test score is: " << average << endl;
}