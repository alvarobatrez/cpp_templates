#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

class Player
{
    friend std::ostream &operator<<(std::ostream &os, const Player &rhs) // insertion operator
    {
        os << rhs.name;
        return os;
    }
    
    private:

    std::string name;
    unsigned int age;

    public:

    Player() = default;
    Player(std::string name, unsigned int age) : name{name}, age{age} {}

    bool operator==(const Player &rhs) const
    {
        return (this->name == rhs.name && this->age == rhs.age);
    }
};

int main()
{
    // ***** FIND *****

    std::vector<int> vec {10, 20, 30, 40, 50};
    int n {4};

    auto v = std::find(std::begin(vec), std::end(vec), n);

    if (v != std::end(vec))
    {
        std::cout << "Number " << *v << " found\n"; // v is an iterator
    }
    else
    {
        std::cout << "Number " << n << " not found\n";
    }

    std::cout << std::endl;

    // ***** FIND - CLASS *****

    std::list<Player> players {{"Alvaro", 35}, {"Berenice", 30}, {}};
    Player p1 {"Alvaro", 35};

    auto p = std::find(players.begin(), players.end(), p1);

    if (p != players.end())
    {
        std::cout << "Player " << *p << " found\n";
    }
    else
    {
        std::cout << "Player not found\n";
    }

    std::cout << std::endl;

    // ***** COUNT *****

    std::vector<int> nums {1, 2, 3, 4, 5, 2, 1, 2, 6, 7, 8};
    int num {2};

    size_t c = std::count(nums.begin(), nums.end(), num);

    std::cout << c << " ocurrences found\n";

    std::cout << std::endl;

    // ***** COUNT - LAMBDA EXPRESSION *****

    c = std::count_if(nums.begin(), nums.end(), [](int x) { return x % 2 == 0; });
    std::cout << "Even numbers: " << c << std::endl;

    c = std::count_if(nums.begin(), nums.end(), [](int x) { return x % 2 != 0; });
    std::cout << "Odd numbers: " << c << std::endl;

    c = std::count_if(nums.begin(), nums.end(), [](int x) { return x > 5; });
    std::cout << "Greater than 5: " << c << std::endl;

    std::cout << std::endl;

    // ***** REPLACE *****

    std::replace(nums.begin(), nums.end(), 1, 0);
    for (int i: nums)
    {
        std::cout << i << std::endl;
    }

    std::cout << std::endl;

    // ***** ALL OF TEST *****

    if (std::all_of(nums.begin(), nums.end(), [](int x) { return x > 5; }))
    {
        std::cout << "All elements are greater than 5\n";
    }
    else
    {
        std::cout << "Not all elements are greater than 5\n";
    }

    std::cout << std::endl;

    // ***** STRING TRANSFORM TEST *****

    std::string name {"alvaro batrez"};
    std::transform(name.begin(), name.end(), name.begin(), ::toupper);
    std::cout << "Upper case: " << name << std::endl;
    
    return 0;
}