#include <vector>
#include <iostream>

enum class GroceryItem {Milk=350, Bread=250, Apple=132, Orange=100};

std::ostream &operator<<(std::ostream &os, GroceryItem groceryItem)
{
    std::underlying_type_t<GroceryItem> value = std::underlying_type_t<GroceryItem>(groceryItem);

    switch (groceryItem)
    {
        case GroceryItem::Milk:
            os << "Milk";
            break;
        case GroceryItem::Bread:
            os << "Bread";
            break;
        case GroceryItem::Apple:
            os << "Apple";
            break;
        case GroceryItem::Orange:
            os << "Orange";
            break;
        default:
            os << "Invalid item";
    }
    
    os << " : " << value;

    return os;
}

bool is_valid_grocery_item(GroceryItem groceryItem)
{
    switch (groceryItem)
    {
        case GroceryItem::Milk:
        case GroceryItem::Bread:
        case GroceryItem::Apple:
        case GroceryItem::Orange:
            return true;
        default:
            return false;
    }
}

void display_grocery_list(const std::vector<GroceryItem> &groceryList)
{
    int invalidItemCount {0};
    int validItemCount {0};

    for (GroceryItem groceryItem : groceryList)
    {
        std::cout << groceryItem << std::endl;

        if (is_valid_grocery_item(groceryItem))
        {
            validItemCount++;
        }
        else
        {
            invalidItemCount++;
        }
    }
    std::cout << "Valid items: " << validItemCount << std::endl;
    std::cout << "Invalid items: " << invalidItemCount << std::endl;
    std::cout << "Total items: " << validItemCount + invalidItemCount<< std::endl;
}

class Player
{
    friend std::ostream &operator<<(std::ostream &os, const Player &p);
    
    public:

    enum class Mode {Attack, Defense, Idle};
    enum class Direction {North, South, East, West};

    Player(std::string name, Mode mode = Mode::Idle, Direction direction = Direction::North)
    : name{name}, mode{mode}, direction{direction} {}

    std::string get_name() const { return name; }
    void set_name(std::string name) { this->name = name; }

    Mode get_mode() const { return mode; }
    void set_mode(Mode mode) { this->mode = mode; }

    Direction get_direction() const { return direction; }
    void set_direction(Direction direction) { this->direction = direction; }

    private:

    std::string name;
    Mode mode;
    Direction direction;
};

std::string get_player_mode(Player::Mode mode)
{
    std::string result;
    switch (mode)
    {
        case Player::Mode::Attack:
            result = "Attack";
            break;
        case Player::Mode::Defense:
            result = "Defense";
            break;
        case Player::Mode::Idle:
            result = "Idle";
            break;
    }
    return result;
}

std::string get_player_direction(Player::Direction direction)
{
    std::string result;
    switch (direction)
    {
        case Player::Direction::North:
            result = "North";
            break;
        case Player::Direction::South:
            result = "South";
            break;
        case Player::Direction::East:
            result = "East";
            break;
        case Player::Direction::West:
            result = "West";
            break;
    }
    return result;
}

std::ostream &operator<<(std::ostream &os, const Player &p)
{
    os << "Player name:\t\t" << p.get_name() << std::endl
    << "Player mode:\t\t" << get_player_mode(p.mode) << std::endl
    << "Player direction:\t" << get_player_direction(p.direction) << std::endl;
    return os;
}

int main()
{
    // ***** SCOPED ENUMERATION *****

    std::vector<GroceryItem> shoppingList;

    shoppingList.push_back(GroceryItem::Apple);
    shoppingList.push_back(GroceryItem::Milk);
    shoppingList.push_back(GroceryItem::Orange);

    int Beer {1000};
    shoppingList.push_back(GroceryItem(Beer));
    shoppingList.push_back(GroceryItem(132));

    display_grocery_list(shoppingList);

    std::cout << std::endl;

    // ***** ENUMERATION - OBJECTS *****

    Player p1{"Alvaro", Player::Mode::Attack, Player::Direction::North};
    Player p2{"Berenice", Player::Mode::Defense, Player::Direction::West};
    Player p3{"Carlos", Player::Mode::Idle, Player::Direction::South};

    std::cout << p1 << std::endl;
    std::cout << p2 << std::endl;
    std::cout << p3 << std::endl;
    
    return 0;
}