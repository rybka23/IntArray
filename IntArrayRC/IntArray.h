#ifndef CLASS_INTARRAY_H
#define CLASS_INTARRAY_H


class IntArray {
public:
    IntArray(int sz = DEFAULTSIZEARRAY);

    IntArray(int *array, int sz);

    IntArray(const IntArray &array);

    virtual ~IntArray() = default;

    int size() const;

    int max();

    int min();

    void sort();

    int find(int value);

    virtual int &operator[](int index);

    void operator=(IntArray array);

    bool operator==(IntArray array);

    bool operator!=(IntArray array);

protected:
    int *a{};
    int _size{};
    static const int DEFAULTSIZEARRAY = 100;

    void Init(int sz, int *array);
};


#endif