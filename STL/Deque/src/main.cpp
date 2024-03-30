#include<iostream>
#include<deque>
#include<vector>

// display any type of variable
template <typename T>
void display(const std::deque<T> &deq)
{
    std::cout << "[ ";
    for (const auto &d: deq)
    {
        std::cout << d << " ";
    }
    std::cout << "]\n";
}

int main()
{
    // ***** DEQUE *****
    
    std::deque<int> d {1,2,3,4,5};
    display(d);

    d = {2,4,5,6};
    display(d);

    std::deque<int> d1 (10, 100);
    display(d1);

    // this is not commonly used
    d[0] = 100;
    d.at(1) = 200;
    display(d);

    std::cout << std::endl;

    // ***** PUSH BACK - PUSH FRONT *****

    std::deque<int> d2 {0,0,0};
    display(d2);

    d2.push_back(10);
    d2.push_back(20);
    
    d2.push_front(100);
    d2.push_front(200);
    display(d2);

    std::cout << "Front: " << d.front() << std::endl;
    std::cout << "Back: " << d.back() << std::endl;
    std::cout << "Size: " << d.size() << std::endl;

    std::vector<int> vec {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::deque<int> d3 {};

    for (const auto &v: vec)
    {
        if (v % 2 == 0)
        {
            d3.push_back(v);
        }
        else
        {
            d3.push_front(v);
        }
    }
    display(d3);

    d3.clear();

    for (const auto &v: vec)
    {
        d3.push_front(v);
    }
    display(d3);

    std::cout << std::endl;

    // ***** COPY - FRONT INSERTER *****

    d3.clear();

    std::copy(vec.begin(), vec.end(), std::front_inserter(d3));
    display(d3);

    d3.clear();

    std::copy(vec.begin(), vec.end(), std::back_inserter(d3));
    display(d3);
    
    return 0;
}