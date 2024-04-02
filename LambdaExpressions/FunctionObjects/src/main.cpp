#include <iostream>
#include <vector>
#include <algorithm>

struct Square
{
    void operator() (int x)
    {
        std::cout << x * x << " ";
    }
};

template <typename T>
struct Root
{
    void operator() (T num)
    {
        T x {num};
        
        for (size_t i {}; i < 1000; i++)
        {
            x = 0.5 * (x + (num / x));
        }

        std::cout << x << " ";
    }
};

class Multiplier
{
    private:

    int num {};

    public:

    Multiplier(int n) : num {n} {}

    int operator()(int n) const
    {
        return n * num;
    }
};

int main()
{
    // ***** Function Objects *****

    Square square;
    square.operator()(4);
    square(4);

    Root<double> root;
    root(9.0);

    std::cout << std::endl;

    std::vector<int> v1 {1, 2, 3, 4, 5};
    std::vector<float> v2 {99, 100, 101};

    std::for_each(v1.begin(), v1.end(), square);
    std::cout << std::endl;

    std::for_each(v2.begin(), v2.end(), root);
    std::cout << std::endl;

    std::for_each(v2.begin(), v2.end(), Root<double>());
    std::cout << std::endl;
    std::cout << std::endl;

    // ***** Lambda Expression *****

    std::for_each(v1.begin(), v1.end(), [](int x) { std::cout << x * x << " "; });
    std::cout << std::endl;

    std::for_each(v2.begin(), v2.end(), [](float num) { float x {num}; for (size_t i {}; i < 1000; i++) { x = 0.5 * (x + (num / x)); } std::cout << x << " "; });
    std::cout << std::endl;
    std::cout << std::endl;

    // ***** USING A CLASS *****

    Multiplier mult(10);
    
    // transform changes the vector
    std::transform(v1.begin(), v1.end(), v1.begin(), mult);
    std::for_each(v1.begin(), v1.end(), [](int x) { std::cout << x << " "; });
    std::cout << std::endl;
    
    v1 = {1, 2, 3, 4, 5};
    std::transform(v1.begin(), v1.end(), v1.begin(), [](int x) { return x * 10; });
    std::for_each(v1.begin(), v1.end(), [](int x) { std::cout << x << " "; });

    return 0;
}