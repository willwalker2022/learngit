#include <iostream>
#include <string>
const int length = 20;
const int width = 20;
class Map
{
private:
    char _map[width + 2][length + 2] =
        {{'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
         {'|', ' ', ' ', ' ', ' ', '#', '#', '#', '#', '#', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', '#', ' ', '|'},
         {'|', ' ', '|', ' ', '|', '|', '|', '|', '|', '|', '|', '|', '|', '|', '|', '|', ' ', ' ', '#', '#', ' ', '|'},
         {'|', ' ', '|', ' ', ' ', '|', ' ', ' ', ' ', ' ', ' ', '#', '#', '#', '|', ' ', '#', ' ', '|', '#', ' ', '|'},
         {'|', ' ', '|', '#', '#', '|', ' ', ' ', ' ', ' ', ' ', '|', '|', '|', '#', '#', '|', ' ', ' ', ' ', ' ', '|'},
         {'|', ' ', '|', '#', ' ', ' ', ' ', '|', '|', '|', '#', '#', '#', ' ', '|', '#', '#', ' ', '#', ' ', ' ', '|'},
         {'|', ' ', ' ', ' ', '#', '#', ' ', '|', '|', '|', '|', '|', '|', ' ', '|', '#', ' ', ' ', '#', ' ', ' ', '|'},
         {'|', '#', '#', ' ', '#', '#', ' ', '|', '#', '#', '#', ' ', ' ', ' ', '|', '#', ' ', ' ', '#', ' ', ' ', '|'},
         {'|', '#', '|', ' ', '|', ' ', ' ', ' ', ' ', ' ', ' ', '#', '#', ' ', ' ', '|', ' ', '|', '#', '#', ' ', '|'},
         {'|', ' ', '|', ' ', '|', ' ', ' ', ' ', ' ', '#', '#', '#', ' ', ' ', ' ', '|', ' ', '|', ' ', '#', '#', '|'},
         {'|', ' ', '|', ' ', '|', ' ', ' ', '#', '#', '#', '|', '|', '|', ' ', '|', '|', ' ', '#', ' ', '#', '#', '|'},
         {'|', ' ', ' ', ' ', '|', ' ', ' ', '|', '|', '|', ' ', ' ', ' ', ' ', '|', '|', ' ', '#', ' ', '|', '|', '|'},
         {'|', ' ', '#', ' ', ' ', ' ', '#', '#', '|', '#', '#', '#', '|', '#', '|', '#', ' ', '#', ' ', '|', ' ', '|'},
         {'|', ' ', '#', ' ', '|', '|', '|', '|', '|', ' ', ' ', ' ', ' ', '#', ' ', '#', ' ', '#', ' ', '|', ' ', '|'},
         {'|', ' ', '|', ' ', '|', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', '#', '#', '#', ' ', '|', ' ', '|'},
         {'|', ' ', ' ', '#', '|', '#', '#', '|', '|', ' ', ' ', ' ', '#', '#', ' ', '#', '#', ' ', '|', '#', ' ', '|'},
         {'|', '#', ' ', '#', ' ', '#', ' ', ' ', ' ', ' ', '#', '#', '|', '#', ' ', '#', '|', ' ', '|', '#', '#', '|'},
         {'|', '#', '|', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', '|', ' ', '#', '|', '|', ' ', ' ', '#', ' ', '|'},
         {'|', '#', '|', ' ', '#', '#', '#', '#', '#', '|', '|', '#', ' ', ' ', '#', '|', '|', ' ', '|', ' ', ' ', '|'},
         {'|', '#', ' ', '#', '#', ' ', ' ', ' ', ' ', '#', '#', ' ', ' ', ' ', '#', '|', '|', ' ', '|', ' ', ' ', '|'},
         {'|', ' ', ' ', ' ', '#', ' ', ' ', '#', '#', '|', '|', '|', '|', ' ', '#', ' ', '|', ' ', '#', ' ', ' ', '|'},
         {'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-'}};

public:
    Map();
    ~Map();
    void update_map(std::pair<int, int> pos, int type);
    void print_current();
};