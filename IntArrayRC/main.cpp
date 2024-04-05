#include <iostream>
#include "IntArray.h"
#include "IntArrayRC.h"

void swap(int i, int j, IntArray a) {
    int cnt = a[i];
    a[i] = a[j];
    a[j] = cnt;
}

int main() {
    IntArrayRC a(5);
    IntArray b;
    for (int i = 0; i < a.size(); i++) {
        std::cin >> a[i];
    }
    swap(4, 2, a);
    std::cout << a.find(3) << '\n';
    std::cout << a.min() << '\n';
    std::cout << a.max() << '\n';
    bool ans = a == b;
    std::cout << ans << '\n';
    for (int i = 0; i < a.size(); i++) {
        std::cout << a[i] << ' ';
    }
}



