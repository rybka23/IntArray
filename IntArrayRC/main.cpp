#include <iostream>
#include "IntArray.h"
#include "IntArrayRC.h"

int main() {
    IntArrayRC a(5);
    IntArray b(10);
    for (int i = 0; i < a.size(); i++) {
        std::cin >> a[i];
    }
    a.swap(4, 2);
    std::cout << a.find(3)<<'\n';
    std::cout << a.min()<<'\n';
    std::cout << a.max()<<'\n';
    bool ans = a == b;
    std::cout << ans<<'\n';
    for (int i = 0; i < a.size(); i++) {
        std::cout << a[i]<<' ';
    }
}



