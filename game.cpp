#include "game.h"

long long int game::money = 100000000;
long long int game::money_bet = 0;
long long int game::reward = 0;

void game::setName(std::string name) {
    this->name = name;
}

void game::setVersion(std::string version) {
    this->version = version;
}

void game::getName() {
    std::cout << "Game: " << name << std::endl;
}

void game::getVersion() {
    std::cout << "Version: " << version << std::endl;
}

void game::bet() {
    money_bet = 0;
    std::cout << "Nhập số tiền cược: ";
    std::cin >> money_bet;
    if(money_bet > money) {
        std::cout << "Bạn không đủ tiền cược ! Be my lover or get out :)))" << std::endl;
        std::cout << "Ván này có thắng cũng không có tiền nhá bạn ! " << std::endl;
    }
    else {
        money -= money_bet;
        std::cout << "Cược thành công !" << std::endl;
    }
}

void game::show_money() {
    std::cout << "Số tiền hiện tại bạn có là: " << money << std::endl;
}

void game::updateMoney() {
    if(win_lose) {
        money += money_bet + money_bet * 0.9 + reward;
        money_bet = 0;
    }
    money_bet = 0;
}

void game::bonus(float set) {
    reward = set * (money_bet * 0,9);
}
