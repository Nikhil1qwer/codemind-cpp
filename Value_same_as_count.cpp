#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    
    std::vector <int> myVector(n);
    for(int i = 0; i < n; i++) {
        std::cin >> myVector[i];
    }
    
    int SameValue = 0;
    for(int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (myVector[i] == myVector[j]) {
                count++;
            }
        }
        if (count == myVector[i]) {
            SameValue++;
            myVector[i] = 0;
        }
    }
    
    std::cout << SameValue;
    
}