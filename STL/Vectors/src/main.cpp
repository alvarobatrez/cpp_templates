#include <iostream>
#include <vector>
#include <algorithm>

// display any type of vector
template <typename T>
void display(const std::vector<T> &vec)
{
    std::cout << "[ ";
    for (const auto &v: vec)
    {
        std::cout << v << " ";
    }
    std::cout << "]\n";
}

// display any type of vector using lambda expression
template <typename T>
void disp(const std::vector<T> &vec)
{
    std::cout << "[ ";
    std::for_each(vec.begin(), vec.end(), [](T x) { std::cout << x << " "; });
    std::cout << "]\n";
}

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

    bool operator<(const Player &rhs) const
    {
        return this->age < rhs.age;
    }
};

int main()
{
    // ***** DISPLAY *****

    std::vector<int> vec1 {1, 2, 3, 4, 5};
    display(vec1);

    disp(vec1);

    std::vector<int> vec2 (20, 1);
    display(vec2);

    std::vector<double> vec3 {1.1, 2.2, 3.3, 4.4, 5.5};
    disp(vec3);

    std::cout << std::endl;

    // ***** SIZE - CAPACITY *****

    disp(vec1);
    std::cout << "Size: " << vec1.size() << std::endl;
    std::cout << "Max size: " << vec1.max_size() << std::endl;
    std::cout << "Capacity: " << vec1.capacity() << std::endl;

    vec1.push_back(6);
    disp(vec1);
    std::cout << "Size: " << vec1.size() << std::endl;
    std::cout << "Max size: " << vec1.max_size() << std::endl;
    std::cout << "Capacity: " << vec1.capacity() << std::endl;

    vec1.shrink_to_fit();
    disp(vec1);
    std::cout << "Size: " << vec1.size() << std::endl;
    std::cout << "Max size: " << vec1.max_size() << std::endl;
    std::cout << "Capacity: " << vec1.capacity() << std::endl;

    vec1.reserve(100);
    disp(vec1);
    std::cout << "Size: " << vec1.size() << std::endl;
    std::cout << "Max size: " << vec1.max_size() << std::endl;
    std::cout << "Capacity: " << vec1.capacity() << std::endl;

    std::cout << std::endl;

    // ***** AT *****

    disp(vec1);
    vec1[0] = 100;
    vec1.at(1) = 200;
    disp(vec1);

    std::cout << std::endl;

    // ***** PUSH BACK - EMPLACE BACK *****

    std::vector<Player> players;

    Player p1 {"Alvaro", 36};
    players.push_back(p1);
    disp(players);

    Player p2 {"Berenice", 31};
    players.push_back(p2);
    disp(players);

    players.emplace_back(Player {"Carlos", 26});
    disp(players);

    // ***** FRONT - END *****

    std::cout << "Front: " << players.front() << std::endl;
    std::cout << "Back: " << players.back() << std::endl;

    std::cout << std::endl;

    // ***** CLEAR - ERASE *****

    disp(vec1);
    vec1.clear();
    disp(vec1);

    vec1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vec1.erase(vec1.begin(), vec1.begin() + 2);
    disp(vec1);

    auto v = vec1.begin();
    while (v != vec1.end())
    {
        if (*v %2 == 0)
        {
            vec1.erase(v);
        }
        else
        {
            v++;
        }
    }
    disp(vec1);

    std::cout << std::endl;

    // ***** SWAP *****

    disp(vec1);
    display(vec2);

    vec1.swap(vec2);

    disp(vec1);
    display(vec2);

    std::cout << std::endl;

    // ***** SORT *****

    std::vector<int> vec4 {4, 2, 5, 9, 3, 7};
    std::sort(vec4.begin(), vec4.end());
    disp(vec4);

    std::cout << std::endl;

    // ***** BACK INSERTER *****

    std::vector<int> v1 {1, 2, 3, 4, 5};
    std::vector<int> v2 {10, 20, 30};

    std::copy(v1.begin(), v1.end(), std::back_inserter(v2));
    disp(v1);
    display(v2);

    v1 = {1, 2, 3, 4, 5};
    v2 = {10, 20, 30};

    std::copy_if(v1.begin(), v1.end(), std::back_inserter(v2), [](int x) { return x % 2 == 0; });

    disp(v1);
    display(v2);

    std::cout << std::endl;

    // ***** TRANSFORM *****

    v1 = {1, 2, 3, 4, 5};
    v2 = {10, 20, 30, 40, 50};
    std::vector<int> v3;

    std::transform(v1.begin(), v1.end(), v2.begin(), std::back_inserter(v3), [](int x, int y) { return x * y; });

    disp(v3);
    
    return 0;
}