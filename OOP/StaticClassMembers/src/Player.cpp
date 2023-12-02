#include "Player.hpp"

int Player::num_players {0};

Player::Player(std::string name)
: user_name {name}
{
    num_players++;
}

Player::Player(const Player &source)
: Player {source.user_name} {}

Player::~Player()
{
    num_players--;
}

std::string Player::get_name()
{
    return user_name;
}

int Player::get_num_players()
{
    return num_players;
}