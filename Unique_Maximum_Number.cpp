#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int size;
    cin >> size;
    
    vector <int> Unique(size);
    for(auto i = 0; i < size; i++) {
        cin >> Unique[i];
    }
    
    auto result = -1;
    for(auto num: Unique) {
        if(count(Unique.begin(), Unique.end(), num) == 1) {
            result = max(result, num);
        }
    }
    
    cout << result << endl;
    
    return 0;
}