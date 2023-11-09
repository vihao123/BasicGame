#include "game.h"
#include "menu.h"
#include "big_small.h"
#include "devided.h"

int main() {
    menu();
    std::cout << "Nhấn Enter để thoát...";
    std::cin.get();
    system("pause");
    return 0;
}