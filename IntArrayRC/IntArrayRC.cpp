#include "IntArrayRC.h"
#include <cassert>
#include <stdexcept>

void IntArrayRC::check(int index) {
    //assert(index >= 0 && index < _size);
    if (index < 0 || index >= _size)
        throw std::invalid_argument("Index out of range");
}