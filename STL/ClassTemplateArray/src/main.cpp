#include <iostream>

// ***** CLASS TEMPLATE - ARRAYS *****

template <typename T, size_t N>
class Array
{
    private:
    
    size_t size {N};
    T values[N];

    friend std::ostream &operator<<(std::ostream &os, const Array<T, N> &arr)
    {
        os << "[";
        for (const auto &val: arr.values)
        {
            os << " " << val;
        }
        os << " ]" << std::endl;
        return os;
    }

    public:

    Array() = default;
    Array(T init_val)
    {
        for (auto &v: values)
        {
            v = init_val;
        }
    }

    void fill(T val)
    {
        for (auto &v: values)
        {
            v = val;
        }
    }

    size_t get_size() const { return size; }

    T &operator[](size_t index)
    {
        return values[index];
    }
};

int main()
{
    Array<int, 5> arr1;
    std::cout << "The size of the array is " << arr1.get_size() << std::endl;
    std::cout << arr1;

    arr1.fill(0);
    std::cout << arr1;

    arr1[0] = 1;
    arr1[3] = 4;
    std::cout << arr1;

    Array<int, 20> arr2 {1};
    std::cout << "The size of the array is " << arr2.get_size() << std::endl;
    std::cout << arr2;

    Array<char, 10> arr3 {'X'};
    arr3[9] = 'Y';
    std::cout << "The size of the array is " << arr3.get_size() << std::endl;
    std::cout << arr3;
    
    return 0;
}