#include <iostream>
#include <list>
#include <numeric> // for std::iota
#include <algorithm>
#include <iterator> // for std::advance

class Player
{
    friend std::ostream &operator<<(std::ostream &os, const Player &rhs) // insertion operator
    {
        os << rhs.name << ":" << rhs.age;
        return os;
    }
    
    private:

    std::string name;
    unsigned int age;

    public:

    Player() : name{"Name"}, age{0} {}
    Player(std::string name, unsigned int age) : name{name}, age{age} {}

    bool operator==(const Player &rhs) const
    {
        return (this->name == rhs.name && this->age == rhs.age);
    }

    // needed for sort()
    bool operator<(const Player &rhs) const
    {
        return this->age < rhs.age;
    }
};

template <typename T>
void disp(const std::list<T> &l)
{
    std::cout << "[ ";
    std::for_each(l.begin(), l.end(), [](T x) { std::cout << x << " "; });
    std::cout << "]\n";
}

int main()
{
    // ***** LIST *****

    std::list<int> l1 {1, 2, 3, 4, 5};
    disp(l1);

    std::list<std::string> l2;
    l2.push_back("Last");
    l2.push_front("First");
    disp(l2);

    std::list<double> l4 (10, 3.14);
    disp(l4);

    std::cout << "Size : " << l4.size() << std::endl;

    std::cout << std::endl;

    // ***** RESIZE *****

    std::list<int> l5 (15);
    std::iota(l5.begin(), l5.end(), 1); // create a list from 1 to 15
    disp(l5);

    l5.resize(5);
    disp(l5);

    l5.resize(10);
    disp(l5);

    std::list<Player> p;
    p.resize(5);
    disp(p);

    std::cout << std::endl;

    // ***** FIND - INSERT - ADVANCE - ERASE *****

    std::list<int> l6 {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    auto i = std::find(l6.begin(), l6.end(), 5);
    if (i != l6.end())
    {
        l6.insert(i, 50);
    }
    disp(l6);

    std::list<int> l7 {100, 200, 300};
    l6.insert(i, l7.begin(), l7.end());
    disp(l6);

    std::advance(i, -4); // point to the 50
    std::cout << *i << std::endl;

    l6.erase(i);
    disp(l6);

    std::cout << std::endl;

    // ***** EMPLACE - SORT *****

    std::list<Player> players {{"Alvaro", 36}, {"Carlos", 26}};
    disp(players);

    std::string name;
    unsigned int age;
    std::cout << "Enter the name of the next player: ";
    std::cin >> name;
    std::cout << "Enter the age: ";
    std::cin >> age;

    players.emplace_back(name, age); // similar to push_back but with arguments of the constructor
    disp(players);

    // Place Daniela before Carlos
    auto it = std::find(players.begin(), players.end(), Player {"Carlos", 26});
    if (it != players.end())
    {
        players.emplace(it, "Daniela", 21);
    }
    disp(players);

    players.sort();
    disp(players);

    return 0;
}