#include <bits/stdc++.h>
using namespace std;

int main() {
    int size; cin >> size;
    vector<int> arr; int sum = 0;
    for(int i = 0; i < size; i++) {
        int val; cin >> val;
        arr.push_back(val);
        sum += arr[i];
    }
    cout << sum;
    return 0;
}