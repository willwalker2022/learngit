#include <iostream>
#include "Player.h"
Player::Player(const std::string &name, const char &symbol, int x, int y)
{
    _location.first = x;
    _location.second = y;
    _name = name;
    _symbol = symbol;
}
Player::~Player()
{
    std::cout << _name << " Failed";
    printf("\n");
}
std::pair<int, int> Player::get_location()
{
    return _location;
}
void Player::update_location(int type)
{
    /*0 up  1 down  2 left  3 down*/
    /*预先check过，允许移动*/
    switch (type)
    {
    case 0:
        /* code */
        break;

    default:
        break;
    }
}