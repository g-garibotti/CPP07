#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <stdexcept>

template <typename T>
class Array
{
private:
    T* _elements;
    unsigned int _size;

public:
    Array() : _elements(NULL), _size(0) {}
    Array(unsigned int n) : _size(n)
    {
        _elements = new T[n]();
    }

    Array(const Array &src) : _elements(NULL), _size(0)
    {
        *this = src;
    }

    ~Array()
    {
        if (_elements)
            delete[] _elements;
    }

    Array &operator=(const Array &rhs)
    {
        if (this != &rhs)
        {
            if (_elements)
                delete[] _elements;
            
            _size = rhs._size;
            
            if (_size > 0)
            {
                _elements = new T[_size];
                for (unsigned int i = 0; i < _size; i++)
                    _elements[i] = rhs._elements[i];
            } else
            {
                _elements = NULL;
            }
        }
        return *this;
    }

    T &operator[](unsigned int index)
    {
        if (index >= _size)
            throw std::out_of_range("Index out of bounds");
        return _elements[index];
    }

    const T &operator[](unsigned int index) const
    {
        if (index >= _size)
            throw std::out_of_range("Index out of bounds");
        return _elements[index];
    }

    unsigned int size() const
    {
        return _size;
    }
};

#endif