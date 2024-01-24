#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    float Salary, HRA, DA;
    cin >> Salary >> HRA >> DA;
    
    float PF = Salary * 0.12;
    float Gross = PF + Salary + HRA + DA;
    
    cout << fixed << setprecision(2);
    cout << PF << endl << Gross << endl;
}