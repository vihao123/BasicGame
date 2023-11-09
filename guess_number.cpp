#include "guess_number.h"

int guess_number::count = 0;

void guess_number::set_result() {
    srand(time(NULL));
    result = rand() % 20 + 1;
}

void guess_number::get_result() {
    std::cout << "Kết quả là: " << result << std::endl;
}

void guess_number::set_Selection() {
    count = 1;
    for(; count <= 3;count++) {
        std::cout << "Lượt thứ " << count <<": ";
        std::cin >> selection;
        if(selection == result) {
            std::cout << "Bạn đã thắng !" << std::endl;
            win_lose = true;
            bonus(5 - count);
            break;
        }
        else {
            if(selection > result) {
                std::cout << "Giảm số xuống đi bạn ơi ! " << std::endl;
            }
            if(selection < result) {
                std::cout << "Tăng số lên đi bạn ! " << std::endl;
            }
        }
        win_lose = false;
    }
}

void guess_number::notification() {
    if(win_lose) {
        std::cout << "Bạn đã thắng ở lần chọn thứ " << count << std::endl;
    }
    else {
        std::cout << "Bạn đã thua !" << std::endl;
    }
}

void guess_number::control() {
    setName("Con số may mắn ! ");
    getName();
    setVersion("Beta 1.0");
    getVersion();
    show_money();
    bet();
    show_money();
    set_result();
    set_Selection();
    get_result();
    notification();
    updateMoney();
    show_money();
}
