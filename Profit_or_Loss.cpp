#include <iostream>

using namespace std;
void DisplayGain(int cst_price, int selin_price);

int main() {
    int cst, sellin;
    cin >> cst >> sellin;
    DisplayGain(cst, sellin);
}

void DisplayGain(int cst_price, int selin_price) {
    if (cst_price < selin_price) {
        cout << "Profit";
    } else if (cst_price > selin_price) {
        cout << "Loss";
    } else {
        cout << "No Profit and No Loss";
    }
}