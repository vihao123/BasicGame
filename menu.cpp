#include "menu.h"

void list() {
    std::cout << "______________________________________________________________" << std::endl;
    std::cout << "|        1. Tài xỉu                                          |" << std::endl;
    std::cout << "|        2. Số chia may mắn                                  |" << std::endl;
    std::cout << "|        3. Đoán con số                                      |" << std::endl;
    std::cout << "|        4. Xem luật chơi                                    |" << std::endl;
    std::cout << "|        5. Thoát Game !                                     |" << std::endl;
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
    std::cout << "Mời bạn chọn game: ";
}

void menu() {
    big_small play1;
    devided play2;
    guess_number play3;
    
    char rePlay;
	do
	{
		bool inCorrect = false;
		do {
			list();
			int selections;
			inCorrect = 0;
			scanf("%d",&selections);
			switch(selections) {
				case 1:
					{
                        play1.control();
                        break;
					}
				case 2:
					{
						play2.control();
						break;	
					}
				case 3:
					{
						play3.control();
						break;
					}
				case 4:
					{
						std::cout << "Xem trong file rule.txt" << std::endl;
					}
				case 5:
					exit(0);
				default:
					inCorrect = true;
			}
			printf("\n");
		} while(inCorrect == true);
		printf("| Bấm Y để chơi tiếp / Bấm phím bất kì để thoát game | ?:");
		scanf(" %c",&rePlay);
		printf("\n");
	} while ((rePlay == 'Y') || (rePlay == 'y'));
        
}
