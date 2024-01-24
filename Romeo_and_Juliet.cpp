#include <iostream>

using namespace std;
int FindMaxChoco(int x, int y, int cost);

int main () {
    int x, y, cost;
    cin >> x >> y >> cost;
    
    int max = FindMaxChoco(x, y, cost);
    cout << max << endl;
}

int FindMaxChoco(int x, int y, int cost) {
    int max = (5 * x + 10 * y) / cost;
    return max;
}