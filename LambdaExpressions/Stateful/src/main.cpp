#include <iostream>
#include <vector>
#include <algorithm>

int X {1000};

class Player
{
    friend std::ostream &operator<<(std::ostream &os, const Player &rhs)
    {
        os << "[ Player: " << rhs.name << ": " << rhs.age << " ]";
        return os;
    }

    private:
    
    std::string name;
    unsigned int age;

    public:

    Player() = default;
    Player(std::string name, unsigned int age) : name{name}, age{age} {}
    Player(const Player &p) = default;
    ~Player() = default;

    std::string get_name() const { return name; }
    void set_name(std::string name) { this->name = name; }

    int get_age() const { return age; }
    void set_age(unsigned int) { this->age = age; }

    auto change_player1() { return [this] (std::string new_name, unsigned int new_age) { name = new_name; age = new_age; }; }
    auto change_player2() { return [&] (std::string new_name, unsigned int new_age) { name = new_name; age = new_age; }; }
};

class Lambda
{
    private:

    int y;

    public:

    Lambda(int y) : y{y} {};

    void operator() (int x) const { std::cout << x + y << std::endl; };
};

class People
{
    private:

    std::vector<Player> people;
    int max_people;

    public:

    People(int max = 10) : max_people(max) {}
    People(const People &p) = default;
    void add(std::string name, int age) { people.emplace_back(name, age); }
    void set_max_people(int max) { max_people = max; }
    int get_max_people() const { return max_people; }

    // This method returns a vector of Person objects in
    // people whose age > max_age AND it limits the number of 
    // persons returned to be <= the member variable max_people.
    // Note that the lambda in this example captures this, by reference, and by value
    std::vector<Player> get_people(int max_age)
    {
        std::vector<Player> result;
        int count {0};
        std::copy_if(people.begin(), people.end(), std::back_inserter(result),
        [this, &count, max_age](const Player &p) { return p.get_age() > max_age && ++count<=max_people; });
        
        return result;
    };
};

int main()
{
    // ***** CAPTURE BY VALUE *****

    int x {100};

    auto l1 = [x]()
    {
        std::cout << x << std::endl;
        std::cout << X << std::endl;
    };
    l1();

    std::cout << std::endl;

    // ***** CAPTURE BY VALUE - MUTABLE *****

    x = 1;

    auto l2 = [x]() mutable
    {
        x += 1;
        std::cout << x << std::endl;
    };
    l2();
    std::cout << x << std::endl;

    l2();
    std::cout << x << std::endl;

    std::cout << std::endl;

    // ***** CAPTURE BY REFERENCE *****

    x = 10;

    auto l3 = [&x]() mutable
    {
        x += 1;
        std::cout << x << std::endl;
    };
    l3();
    std::cout << x << std::endl;

    std::cout << std::endl;

    // ***** DEFAULT BY VALUE - MUTABLE *****

    x = 100;
    int y = 200;
    int z = 300;

    auto l4 = [=]() mutable
    {
        x += 100;
        y += 100;
        std::cout << x << std::endl;
        std::cout << y << std::endl;
    };
    l4();

    std::cout << x << std::endl;
    std::cout << y << std::endl;

    std::cout << std::endl;

    // ***** DEFAULT CAPTURE BY REFERENCE *****

    x = 1;
    y = 2;
    z = 3;

    auto l5 = [&]() mutable
    {
        x += 1;
        y += 1;
        std::cout << x << std::endl;
        std::cout << y << std::endl;
        std::cout << z << std::endl;
    };
    l5();

    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << z << std::endl;

    std::cout << std::endl;

    // ***** DEFAULT CAPTURE BY VALUE / CAPTURE BY REFERENCE *****

    x = 100;
    y = 200;
    z = 300;

    auto l6 = [=, &y]() mutable
    {
        x += 100;
        y += 100;
        z += 100;
        std::cout << x << std::endl;
        std::cout << y << std::endl;
        std::cout << z << std::endl;
    };
    l6();

    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << z << std::endl;

    std::cout << std::endl;

    // ***** DEFAULT CAPTURE BY REFERENCE / CAPTURE BY VALUE *****

    x = 1;
    y = 2;
    z = 3;

    auto l7 = [&, x, z]() mutable
    {
        x += 1;
        y += 1;
        z += 1;
        std::cout << x << std::endl;
        std::cout << y << std::endl;
        std::cout << z << std::endl;
    };
    l7();

    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << z << std::endl;

    std::cout << std::endl;

    // ***** DEFAULT CAPTURE BY REFERENCE USING OBJECTS *****

    // Default capture by reference of the current object using [this]
    // [=], [&], and [this] are equivalent when capturing an object's member variables - all are captured by reference
    Player player{"Alvaro", 36};
    std::cout << player << std::endl;

    // Default capture [this]
    // Preferred way
    auto change_player1 = player.change_player1();
    change_player1("Berenice", 31);
    std::cout << player << std::endl;

    auto change_player2 = player.change_player2();
    change_player2("Carlos", 26);
    std::cout << player << std::endl;

    std::cout << std::endl;

    // ***** LAMBDA CLASS EQUIVALENCE *****

    y = 100;

    Lambda lambda1(y);
    auto lambda2 = [y](int x) { std::cout << x + y << std::endl; };

    lambda1(200);
    lambda2(200);

    People friends;
    friends.add("Alvaro", 36);
    friends.add("Berenice", 31);
    friends.add("Carlos", 26);
    friends.add("Daniela", 21);
    friends.add("Eugenia", 16);
    friends.add("Francisco", 11);

    auto result = friends.get_people(17);

    for (const auto &p: result)
    {
        std::cout << p << std::endl;
    }

    friends.set_max_people(3);

    result = friends.get_people(17);

    for (const auto &p: result)
    {
        std::cout << p << std::endl;
    }

    result = friends.get_people(30);

    for (const auto &p: result)
    {
        std::cout << p << std::endl;
    }

    return 0;
}