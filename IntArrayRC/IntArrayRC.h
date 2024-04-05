
#include "IntArray.h"

class IntArrayRC : public IntArray {
public:
    //using IntArray::IntArray;
    explicit IntArrayRC(int sz) : IntArray(sz) {};

    explicit IntArrayRC(int *array, int sz) : IntArray(array, sz) {};


    int &operator[](int index) override {
        check(index);
        return a[index];
    }

private:
    void check(int index);
};
