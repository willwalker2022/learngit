#include <iostream>
#include <string>
class Player
{
private:
    std::pair<int, int> _location;
    std::string _name;
    /*未来可能还需要加入朝向，显得更真实一点*/
    char _symbol;
    /*to do*/ /* based on need*/

public:
    Player(const std::string &name, const char &symbol, int x, int y);
    ~Player();              /*析构函数 noisy constructor*/
    void update_location(); /*args are needed*/
    std::pair<int, int> get_location();
    /**/
};