#include "big_small.h"

void big_small::set_Selection() {
    std::cout << "Mời bạn chọn tài / xỉu: " << std::endl;
    std::cout << "1. Tài              2. Xỉu  <  1 : 2 >   ";
    std::cin >> selection;
}

void big_small::get_Selection() {
    switch (selection)
    {
    case 1:
        std::cout << "Bạn đã chọn Tài." << std::endl;
        break;
    case 2:
        std::cout << "Bạn đã chọn Xỉu." << std::endl;
        break;
    default:
        std::cout << "Bạn đã chọn bậy và mất tiền nhé !" << std::endl;
        break;
    }
}

void big_small::set_result() {
    srand(time(NULL));
    for(int i = 0; i < 3;i++) {
        result[i] = rand() % 6 + 1;
    }
}

void big_small::get_result() {
    std::cout << "Kết quả là: ";
    for(int i = 0; i < 3;i++) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;
}

int big_small::sum() {
    int res = 0;
    for(int i = 0; i < 3; i++) {
        res += result[i];
    }
    return res;
}

void big_small::notification() {
    if(sum() <= 10 && selection == 2) {
        std::cout << "Bạn đã thắng" << std::endl;
        win_lose = true;
    }
    else if(sum() > 10 && selection == 1) {
        std::cout << "Bạn đã thắng" << std::endl;
        win_lose = true;
    }
    else {
        std::cout << "Bạn đã thua và mất tiền :)) " << std::endl;
        win_lose = false;
    }
}

void big_small::control() {
    setName("Tài Xỉu");
    getName();
    setVersion("Beta 1.0");
    getVersion();
    show_money();
    bet();
    show_money();
    set_Selection();
    get_Selection();
    set_result();
    get_result();
    notification();
    updateMoney();
    show_money();
}