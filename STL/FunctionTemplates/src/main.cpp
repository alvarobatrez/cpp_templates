#include <iostream>

// ***** FUNCTION TEMPLATES *****

template <typename T>
T min(T x, T y)
{
    return (x < y) ? x : y;
}

struct Person
{
    std::string name;
    int age;

    bool operator<(const Person &rhs) const
    {
        return this->age < rhs.age;
    }
};

template <typename T>
void names(T x, T y)
{
    std::cout << x << " " << y << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Person &rhs)
{
    os << rhs.name;
    return os;
}

template <typename T>
void swap(T &x, T &y)
{
    T aux = x;
    x = y;
    y = aux;
}

int main()
{
    std::cout << min<double>(4.5, 4.3) << std::endl; // recommended
    std::cout << min(4, 7) << std::endl;
    std::cout << min('d', 'b') << std::endl;

    Person a {"Alvaro", 35};
    Person b {"Berenice", 28};
    Person c {min<Person>(a, b)};
    std::cout << c.name << " is younger\n";

    names(b, a);

    int i {24};
    int j {20};
    std::cout << "i: " << i << ", j: " << j << std::endl;
    swap<int>(i, j);
    std::cout << "i: " << i << ", j: " << j << std::endl;
    
    return 0;
}