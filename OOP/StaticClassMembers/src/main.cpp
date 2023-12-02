#include <iostream>
#include "Player.hpp"

void display_active_players()
{
    std::cout << "Active players: " << Player::get_num_players() << std::endl;
}

// ***** STATIC CLASS MEMBERS *****

int main()
{
    display_active_players();
    
    Player player1("Alvaro");
    Player player2("Octavio");

    display_active_players();

    Player *player3 = new Player("Berenice");

    display_active_players();

    delete player3;

    display_active_players();
    
    return 0;
}