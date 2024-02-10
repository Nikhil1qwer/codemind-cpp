#include <iostream>

int main() {
    int strt, end;
    std :: cin >> strt >> end;
    
    for (int i = strt; i <= end; i++) {
        if(i % 2 == 0) {
            std :: cout << i << " ";
        }
    }
    
    return 0;
}