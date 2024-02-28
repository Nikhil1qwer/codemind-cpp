#include <bits/stdc++.h>

using namespace std;

int main () {
    int size;
    cin >> size;
    
    int sum = 0;
    int *myVector = new int[size];
    
    for(int i = 0; i < size; i++) {
        cin >> myVector[i];
        sum += myVector[i];
    }
    
    cout << sum << endl;
    
    delete[] myVector;
    return 0;
}