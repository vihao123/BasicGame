
#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

class game {
    private:
        std::string name;
        std::string version;
        static long long int money;
        static long long int money_bet;
        static long long int reward;
    protected:
        bool win_lose;

    public:
        void show_money();
        void setName(std::string name);
        void getName();
        void setVersion(std::string version);
        void getVersion();
        void bet();
        void updateMoney();
        void bonus(float set);
};