#include <iostream>
#include <set>
#include <algorithm>

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

    bool operator<(const Player &rhs) const
    {
        return this->age < rhs.age;
    }
};

template <typename T>
void disp(const std::set<T> &set)
{
    std::cout << "[ ";
    std::for_each(set.begin(), set.end(), [](T x) { std::cout << x << " "; });
    std::cout << "]\n";
}

int main()
{
    // ***** SET *****

    std::set<int> s1 {1, 2, 3, 4, 5};
    disp(s1);

    s1 = {5, 6 , 7, 5, 5, 7, 7, 8, 8, 9};
    disp(s1);

    s1.insert(0);
    s1.insert(10);
    disp(s1);

    if (s1.count(10))
    {
        std::cout << "10 is in the set\n";
    }
    else
    {
        std::cout << "10 is no in the set\n";
    }

    auto it = s1.find(5);
    if (it != s1.end())
    {
        std::cout << *it << " was found\n";
    }

    s1.clear();
    disp(s1);

    std::cout << std::endl;

    // ***** EMPLACE - ERASE - FIND *****

    std::set<Player> players {{"Alvaro", 36}, {"Berencie", 31}, {"Carlos", 26}};
    disp(players);

    players.emplace("Daniela", 21);
    disp(players);

    players.emplace("Eugenia", 21); // 21 already exists
    disp(players);

    auto i = players.find(Player {"Berenice", 31});
    if (i != players.end())
    {
        players.erase(i);
    }
    disp(players);

    i = players.find(Player("---", 36)); // delete player with age = 36
    if (i != players.end())
    {
        players.erase(i);
    }
    disp(players);

    std::cout << std::endl;

    // ***** INSERT *****

    std::set<char> letters {'A', 'B', 'C'};
    disp(letters);

    auto result = letters.insert('D');
    disp(letters);

    std::cout << "First: " << *(result.first) << std::endl;
    std::cout << std::boolalpha << "Second: " << result.second << std::endl;

    result = letters.insert('A');
    disp(letters);

    std::cout << "First: " << *(result.first) << std::endl;
    std::cout << std::boolalpha << "Second: " << result.second << std::endl;
    
    return 0;
}