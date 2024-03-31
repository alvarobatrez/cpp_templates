#include <iostream>
#include <queue>

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
void display(std::priority_queue<T> pq)
{
    std::cout << "[ ";
    while (!pq.empty())
    {
        T element = pq.top();
        pq.pop();
        std::cout << element << " ";
    }
    std::cout << "]\n";
}

int main()
{
    // ***** PRIORITY QUEUE *****

    std::priority_queue<int> pq;
    for (int i : {3, 5, 7, 12, 23, 12, 4, 100, 0, 3, 5, 7})
    {
        pq.push(i);
    }

    std::cout << "Size: " << pq.size() << std::endl;
    std::cout << "Top: " << pq.top() << std::endl;

    display(pq);

    pq.pop();

    display(pq);

    std::priority_queue<Player> players;

    players.push(Player {"Alvaro", 10});
    players.push(Player {"Berenice", 3});
    players.push(Player {"Carlos", 5});
    players.push(Player {"Daniela", 7});
    players.push(Player {"Eugenia", 1});
    players.push(Player {"Francisco", 9});
    players.push(Player {"Gabriela", 2});

    display(players);
    
    return 0;
}