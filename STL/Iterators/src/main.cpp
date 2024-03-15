#include <iostream>
#include <vector>
#include <map>

using namespace std;

void display(const std::vector<int> &vec)
{
    cout << "[";
    for (auto const &i: vec)
    {
        cout << i << " ";
    }
    cout << "]\n";
}

// ***** ITERATORS *****

void test1()
{
    vector<int> nums {1, 2, 3, 4, 5};
    auto it = nums.begin();
    cout << *it << endl;

    it++;
    cout << *it << endl;

    it+=2;
    cout << *it << endl;

    it-=2;
    cout << *it << endl;

    it = nums.end() - 1;
    cout << *it << endl;
}

void test2()
{
    vector<char> letters {'a', 'b', 'c', 'd', 'e'};
    vector<char>::iterator it = letters.begin();
    while (it != letters.end())
    {
        cout << *it << endl;
        it++;
    }
}

// ***** CONSTANT ITERATORS *****

void test3()
{
    vector<int> nums {1, 2, 3, 4, 5};
    vector<int>::const_iterator it = nums.begin();
    // auto it = nums.cbegin();
    while (it != nums.end())
    {
        cout << *it << endl;
        // *it = 0; // compiler error
        it++;
    }
}

// ***** REVERSE ITERATORS *****

void test4()
{
    vector<unsigned short> nums {1, 2, 3, 4, 5};
    auto it1 = nums.rbegin();
    while (it1 != nums.rend())
    {
        cout << *it1 << endl;
        it1++;
    }

    vector<string> names {"Alvaro", "Berenice", "Carlos"};
    auto it2 = names.crbegin(); // constant right begin
    cout << *it2 << endl;
    it2++;
    cout << *it2 << endl;
}

// ***** ITERATORS OVER A MAP *****

void test5()
{
    map<string, string> icecream
    {
        {"Alvaro", "Chocolate"},
        {"Berenice", "Vanilla"},
        {"Carlos", "Strawberry"}
    };

    auto it3 = icecream.begin();
    while (it3 != icecream.end())
    {
        cout << it3->first << ": " << it3->second << endl;
        it3++;
    }
}

// ***** ITERATOR OVER A SUBSET *****

void test6()
{
    vector<size_t> vec {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto start = vec.begin();
    auto end = vec.end();

    while (start != end)
    {
        cout << *start << endl;
        start++;
    }
}

int main()
{
    test1();
    cout << endl;

    test2();
    cout << endl;

    test3();
    cout << endl;

    test4();
    cout << endl;

    test5();
    cout << endl;

    test6();
    
    return 0;
}