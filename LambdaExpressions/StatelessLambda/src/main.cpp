#include <iostream>
#include <vector>
#include <functional>

class Player
{
    friend std::ostream &operator<<(std::ostream &os, const Player &rhs)
    {
        os << "[ Player: " << rhs.name << ", " << rhs.age << "]";
        return os;
    }
    
    private:

    std::string name;
    unsigned int age;

    public:
    
    Player(std::string name, unsigned int age) : name{name}, age{age} {};
    Player(const Player &p) : name{p.name}, age{p.age} {}
    ~Player() = default;

    std::string get_name() const { return name; }
    void set_name(std::string name) { this->name = name; }
    
    int get_age() const { return age; }
    void set_age(int age) { this->age = age; }
};

void filter_vector(const std::vector<int> &vec, std::function<bool(int)> func)
{
    std::cout << "[ ";
    for (auto i: vec)
    {
        if (func(i))
        {
            std::cout << i << " ";
        }
    }
    std::cout << "]" << std::endl;
}

auto make_lambda()
{
    return []() { std::cout << "This lambda was made using the make_lambda function\n"; };
}

int main()
{
    // ***** STATELESS LAMBDA *****

    []() { std::cout << "Hello World!\n"; }();
    [](int x) { std::cout << x << std::endl; }(100);
    [](int x, int y) { std::cout << x + y << std::endl; }(10, 1);

    std::cout << std::endl;

    // ***** USING AUTO *****

    auto l1 = []() { std::cout << "Hello World!\n"; };
    l1();

    auto l2 = [](int x, int y) { std::cout << x + y << std::endl; };
    l2(10, 1);

    int a = 100;
    int b = 200;
    l2(a,b);

    auto l3 = [](int &x, int &y)
    {
        std::cout << "x =  " << x << ", y = " << y << std::endl;
        x = 1000;
        y = 2000;
    };

    l3(a, b);
    std::cout << "a =  " << a << ", b = " << b << std::endl;

    // ***** VALUE AND REFERENCE OBJECTS *****

    Player p1 {"Alvaro", 36};
    std::cout << p1 << std::endl;

    auto l4 = [](Player p) { std::cout << p << std::endl; };
    l4(p1);

    auto l5 = [](const Player &p) { std::cout << p << std::endl; };
    l5(p1);

    auto l6 = [](Player &p)
    {
        p.set_name("Berenice");
        p.set_age(26);
        std::cout << p << std::endl;
    };
    l6(p1);
    std::cout << p1 << std::endl;

    // ***** PASSING A LAMBDA TO A FUNCTION *****

    std::vector<int> nums {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    filter_vector(nums, [](int x) { return x > 5; });
    filter_vector(nums, [](int x) { return x <= 5; });
    filter_vector(nums, [](int x) { return x >= 3 && x < 6; });

    std::cout << std::endl;

    // ***** RETURNING A LAMBDA FROM A FUNCTION *****

    auto l7 = make_lambda();
    l7();

    std::cout << std::endl;

    // ***** USING AUTO IN THE LAMBDA PARAMETER LIST *****

    auto l8 = [](auto x, auto y) { std::cout << "x = " << x << ", y = " << y << std::endl; };

    l8(1, 2);
    l8(3.1416, 2.7182);
    l8('5', 5.0);

    std::cout << std::endl;

    // ***** SORT - FOR_EACH *****

    

    return 0;
}