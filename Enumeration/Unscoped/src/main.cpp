#include <iostream>
#include <vector>

enum Direction {North, South, East, West=10};

std::string direction_to_string(Direction direction)
{
    std::string result;
    
    switch (direction)
    {
        case North:
            result = "North";
            break;
        case South:
            result = "South";
            break;
        case East:
            result = "East";
            break;
        case West:
            result = "West";
            break;
        default:
            result = "Unknown direction";
    }

    return result;
}

enum GroceryItem {Milk, Bread, Apple, Orange};

std::ostream &operator<<(std::ostream &os, GroceryItem groceryItem)
{
    switch (groceryItem)
    {
        case Milk:
            os << "Milk";
            break;
        case Bread:
            os << "Bread";
            break;
        case Apple:
            os << "Apple";
            break;
        case Orange:
            os << "Orange";
            break;
        default:
            os << "Invalid item";
    }
    return os;
}

bool is_valid_grocery_item(GroceryItem groceryItem)
{
    switch (groceryItem)
    {
        case Milk:
        case Bread:
        case Apple:
        case Orange:
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

int main()
{
    // ***** ENUMERATION *****

    Direction direction {North};
    std::cout << "Direction = " << direction << std::endl;
    std::cout << direction_to_string(direction) << std::endl;

    direction = South;
    std::cout << "Direction = " << direction << std::endl;
    std::cout << direction_to_string(direction) << std::endl;

    direction = Direction(2);
    std::cout << "Direction = " << direction << std::endl;
    std::cout << direction_to_string(direction) << std::endl;

    direction = Direction(10);
    std::cout << "Direction = " << direction << std::endl;
    std::cout << direction_to_string(direction) << std::endl;

    direction = static_cast<Direction>(10);
    std::cout << "Direction = " << direction << std::endl;
    std::cout << direction_to_string(direction) << std::endl;

    std::cout << std::endl;

    // ***** USING OVERLOADING OPERATOR<< *****

    std::vector<GroceryItem> shoppingList;

    shoppingList.push_back(Apple);
    shoppingList.push_back(GroceryItem(2));
    shoppingList.push_back(Milk);
    shoppingList.push_back(GroceryItem(1));
    shoppingList.push_back(Orange);

    int Beer {1000};

    shoppingList.push_back(GroceryItem(Beer));

    display_grocery_list(shoppingList);
    
    return 0;
}