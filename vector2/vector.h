

#ifndef VECTOR2_VECTOR_H
#define VECTOR2_VECTOR_H
#include <cstddef>
template <typename T>
class vector {
public:
    vector()
    {
        ReAlloc(2);
    }
    void PushBack(const T& value)
    {
        if(size > capacity)
            ReAlloc(capacity + capacity/2);
        data[size++] = value;
    }
    const T& operator[](size_t count) const
    {
        return data[count];
    }
    T& operator[](size_t count)
    {
        return  data[count];
    }
    size_t Size() const {
        return size;
    }
private:
    void ReAlloc(size_t newCapacity)
    {
        //1. allocate new block of memory
        //2. copy / move old elements into new block
        //3. delete
        if(size > newCapacity)
            size = newCapacity;
        T *mem = new T[2*newCapacity];
        for (int i = 0; i < size; ++i) {
            mem[i] = data[i];
            delete [] data;
            data = mem;
            this->capacity = newCapacity;
        }

    }
private:
    T *data = nullptr;
    size_t size = 0;
    size_t capacity = 0;
};


#endif //VECTOR2_VECTOR_H
