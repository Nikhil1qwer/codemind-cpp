#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int year;
    cin >> year;
    
    int digi = year % 100;
    
    cout << setw(2) << setfill('0') << digi << endl;
    
}