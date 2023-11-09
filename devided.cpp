#include "devided.h"

void devided::set_Selection() {
    std::cout << "Nhập số bạn muốn chơi: " << std::endl;
    std::cout << "| 2  :  3  :  5  :  7  :  9 |  : ";
    std::cin >> selection;
}

void devided::get_Selection() {
    switch (selection) 
    {
    case 2:
        std::cout << "Bạn đã chọn 2 ! " << std::endl;
        break;
    case 3:
        std::cout << "Bạn đã chọn 3 ! " << std::endl;
        break;
    case 5:
        std::cout << "Bạn đã chọn 5 ! " << std::endl;
        break;
    case 7:
        std::cout << "Bạn đã chọn 7 ! " << std::endl;
        break;
    case 9:
        std::cout << "Bạn đã chọn 9 ! " << std::endl;
        break;
    default:
        std::cout << "Bạn đã chọn sai, đồng nghĩa mất tiền ! " << std::endl;
        break;
    }
}

void devided::set_result() {
    srand(time(NULL));
    result = rand() % 1000 + 1;
}

void devided::get_result() {
    std::cout << "Kết quả là số: " << result << std::endl;
}

void devided::notification() {
    if(selection != 2 && selection != 3 && selection != 5 && selection != 7 && selection != 9) {
        win_lose = false;
        std::cout << "Bạn đã thua do chọn sai số!" << std::endl;
    }
    else if(selection == 2 && result % 2 == 0) {
        win_lose = true;
        std::cout << "Bạn đã thắng !" << std::endl;
    }
    else {
        if((result % 3 == 0 && result % 5 == 0) && (selection == 3 || selection == 5)) {
            win_lose = false;
            std::cout << "Bạn đã thua do số này chia hết cho cả 3 và 5 !" << std::endl;
            std::cout << "Chúc bạn may mắn lần sau !";
        }
        else if((result % 3 == 0 && result % 7 == 0) && (selection == 3 || selection == 7)) {
            win_lose = false;
            std::cout << "Bạn đã thua do số này chia hết cho cả 3 và 7 !" << std::endl;
            std::cout << "Chúc bạn may mắn lần sau !";
        }
        else if((result % 3 == 0 && result % 9 == 0) && (selection == 3 || selection == 9)) {
            win_lose = false;
            std::cout << "Bạn đã thua do số này chia hết cho cả 3 và 9 !" << std::endl;
            std::cout << "Chúc bạn may mắn lần sau !";
        }
        else if((result % 5 == 0 && result % 7 == 0) && (selection == 5 || selection == 7)) {
            win_lose = false;
            std::cout << "Bạn đã thua do số này chia hết cho cả 5 và 7 !" << std::endl;
            std::cout << "Chúc bạn may mắn lần sau !";
        }
        else if((result % 5 == 0 && result % 9 == 0) && (selection == 5 || selection == 9)) {
            win_lose = false;
            std::cout << "Bạn đã thua do số này chia hết cho cả 3 và 7 !" << std::endl;
            std::cout << "Chúc bạn may mắn lần sau !";
        }
        else if((result % 7 == 0 && result % 9 == 0) && (selection == 7 || selection == 9)) {
            win_lose = false;
            std::cout << "Bạn đã thua do số này chia hết cho cả 7 và 9 !" << std::endl;
            std::cout << "Chúc bạn may mắn lần sau !";
        }
        else if(result % 3 == 0 && selection == 3) {
            bonus(3);
            win_lose = true;
            std::cout << "Bạn đã thắng !" << std::endl;
        }
        else if(result % 5 == 0 && selection == 5) {
            bonus(6);
            win_lose = true;
            std::cout << "Bạn đã thắng !" << std::endl;
        }
        else if(result % 7 == 0 && selection == 7) {
            bonus(7);
            win_lose = true;
            std::cout << "Bạn đã thắng !" << std::endl;
        }
        else if(result % 9 == 0 && selection == 9) {
            bonus(8);
            win_lose = true;
            std::cout << "Bạn đã thắng !" << std::endl;
        }
        else {
            win_lose = false;
            std::cout << "Bạn đã thua do xui xẻo ! " << std::endl;
        }
    }
}

void devided::control() {
    setName("Số chia may mắn ! ");
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