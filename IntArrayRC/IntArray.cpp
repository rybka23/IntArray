#include <malloc.h>
#include "IntArray.h"
#include <algorithm>


int IntArray::size() const { return _size; }

int &IntArray::operator[](int index) { return a[index]; }

void IntArray::Init(int sz, int *array) {
    _size = sz;
    a = new int[_size];
    if (array != nullptr) {
        for (int i = 0; i < _size; i++) {
            a[i] = array[i];
        }
    } else {
        for (int i = 0; i < _size; i++) {
            a[i] = 0;
        }
    }
}

void IntArray::operator=(IntArray array) {
    free(this);
    this->Init(array._size, array.a);
}

bool IntArray::operator==(IntArray array) {
    if (this->_size != array._size) return false;
    for (int i = 0; i < array._size; i++) {
        if (this->a[i] != array[i]) return false;
    }
    return true;
}

bool IntArray::operator!=(IntArray array) {
    bool ans = array.a == a;
    if (ans) return false;
    else return true;
}

int IntArray::max() {
    int max = this->a[0];
    for (int i = 0; i < this->_size; i++) {
        if (max < this->a[i]) {
            max = this->a[i];
        }
    }
    return max;
}

int IntArray::min() {
    int min = this->a[0];
    for (int i = 0; i < this->_size; i++) {
        if (min > this->a[i]) {
            min = this->a[i];
        }
    }
    return min;
}

void IntArray::sort() {
    std::sort(a, a + _size);
}

int IntArray::find(int value) {
    for (int i = 0; i < this->_size; i++) {
        if (this->a[i] == value) return i;
    }
    return -1;
}
