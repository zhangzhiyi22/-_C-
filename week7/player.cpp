#include <iostream>
using namespace std;


class Player {
public:
   int x, y;
   int speed;

   void Move(int xa, int ya) {
      x += xa * speed;
      y += ya * speed;
   }
};

int main() {
    Player player;
    player.x = 5;
    player.y = 5;
    player.speed = 2;
    player.Move(1, -1);
    cout << player.x << endl;
    cout << player.y << endl;


   system("pause");
    return 0;}

