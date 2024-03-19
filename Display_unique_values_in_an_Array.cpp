#include <bits/stdc++.h>

using namespace std;

int main() {
    int size;
    cin >> size;
    
    map<int, int> Map;
    for(int i = 0; i < size; i++) {
        int key;
        cin >> key;
        Map[key]++;
    }
    
    auto flag = true;
    for(auto& key: Map) {
        if(key.second == 1) {
            cout << key.first << " ";
            flag = false;
        }
    }
    
    if(flag) {
        cout << -1 << endl;
    }
    
    return 0;
}