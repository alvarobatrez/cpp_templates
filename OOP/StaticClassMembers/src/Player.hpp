#ifndef _PLAYER_HPP_
#define _PLAYER_HPP_

#include <string>

class Player
{
    private:

    // static class attributes
    static int num_players;

    std::string user_name;

    public:

    Player(std::string name = "None");
    Player(const Player &source);
    ~Player();

    std::string get_name();

    // static class method
    static int get_num_players();
};

#endif