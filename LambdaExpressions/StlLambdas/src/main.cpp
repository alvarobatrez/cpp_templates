#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

class Player
{
    friend std::ostream &operator<<(std::ostream &os, const Player &rhs)
    {
        os << "[Player: " << rhs.name << ": " << rhs.age << "]";
        return os;
    }
    
    private:

    std::string name;
    int age;

    public:

    Player(std::string name, int age) : name{name}, age{age} {}
    Player(const Player &p) : name{p.name}, age{p.age} {}
    ~Player() = default;

    std::string get_name() const { return name; }
    void set_name(std::string name) { this->name = name; }
    int get_age() const { return age; }
    void set_age(int age) { this->age = age; }
};

int main()
{
    // ***** FOR EACH *****
    
    std::vector<int> nums {1, 2, 3, 4, 5};

    std::for_each(nums.begin(), nums.end(), [](int num) { std::cout << num << " "; });
    
    std::cout << std::endl << std::endl;;

    // ***** IS PERMUTATION *****

    struct Point
    {
        int x;
        int y;
    };

    Point p1 {1, 2};
    Point p2 {4, 3};
    Point p3 {3, 5};
    Point p4 {3, 1};

    std::vector<Point> triangle1 {p1, p2, p3};
    std::vector<Point> triangle2 {p2, p3, p1};
    std::vector<Point> triangle3 {p1, p2, p4};

    if (std::is_permutation(triangle1.begin(), triangle1.end(), triangle2.begin(), [](Point lhs, Point rhs) { return lhs.x == rhs.x && lhs.y == rhs.y; }))
    {
        std::cout << "Triangle 1 and Triangle 2 are equivalent\n";
    }
    else
    {
        std::cout << "Triangle 1 and Triangle 2 are not equivalent\n";
    }

    if (std::is_permutation(triangle1.begin(), triangle1.end(), triangle3.begin(), [](Point lhs, Point rhs) { return lhs.x == rhs.x && lhs.y == rhs.y; }))
    {
        std::cout << "Triangle 1 and Triangle 3 are equivalent\n";
    }
    else
    {
        std::cout << "Triangle 1 and Triangle 3 are not equivalent\n";
    }

    std::cout << std::endl;

    // ***** TRANSFORM *****

    std::vector<double> scores {9.3, 8.8, 7.5, 6.8, 6.5};
    double bonus_point = 0.5;

    std::transform(scores.begin(), scores.end(), scores.begin(), [bonus_point](double score) { return score += bonus_point; });

    std::cout << "[ ";
    for (double &s: scores)
    {
        std::cout << s << " ";
    }
    std::cout << "]\n";

    std::cout << std::endl;

    // ***** REMOVE IF *****

    nums.erase(std::remove_if(nums.begin(), nums.end(), [](int num) { return num % 2 == 0; }));

    std::cout << "[ ";
    for (int &n: nums)
    {
        std::cout << n << " ";
    }
    std::cout << "]\n";

    std::cout << std::endl;

    // ***** SORT OBJECTS *****

    Player player1 {"Alvaro", 36};
    Player player2 {"Berenice", 31};
    Player player3 {"Carlos", 26};

    std::vector<Player> players {player2, player3, player1};

    // sort people in ascending order
    std::sort(players.begin(), players.end(), [](Player &lhs, Player &rhs) { return lhs.get_name() < rhs.get_name(); });

    for (Player &p: players)
    {
        std::cout << p << std::endl;
    }

    // sort people in descending order
    std::sort(players.begin(), players.end(), [](Player &lhs, Player &rhs) { return lhs.get_name() > rhs.get_name(); });

    for (Player &p: players)
    {
        std::cout << p << std::endl;
    }

    // sort people by age in descending order

    std::sort(players.begin(), players.end(), [](Player &lhs, Player &rhs) { return lhs.get_age() > rhs.get_age(); });

    for (Player &p: players)
    {
        std::cout << p << std::endl;
    }

    std::cout << std::endl;

    // ***** IN BETWEEN *****

    

    return 0;
}