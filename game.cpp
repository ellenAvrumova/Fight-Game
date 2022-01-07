#include <iostream>
#include <time.h>

int main() {
    srand((unsigned) time(NULL));

    std::string key;
    std::cout << "\nWelcome to the Fight Game. Your goal is to defeat your enemy. They stepped on your toe once so now, you must finish them.\n" << std::endl;
    std::cout << "Enter the special letter to continue. If you're wrong, you can't play." << std::endl;
    std::cin >> key;
    std::cout << "Wow you got it on the first try! Just kidding, ALL letters are special :)" << std::endl;

    int enemyHP = 10;
    int myHP = 10;
    int choice;

    while (enemyHP > 0 && myHP > 0) {
        if (enemyHP > 0) {
            std::cout << "\nWhat do you want to do?\n1) Attack\n2) Check my HP\n3) Check enemy's HP" << std::endl;
            std:: cin >> choice;

            if (choice == 1) {
                int yourAttack = rand() % 5 + 1;
                std::cout << "\nIt's time to attack. You deal " << yourAttack << " damage." << std::endl;
                enemyHP -= yourAttack;

                if (yourAttack < 3) {
                    std::cout << "You could do more damage with a toothpick..." << std::endl;
                }
                else {
                    std::cout << "Wow you must be really angry! I would be too, if someone stepped on my toe." << std::endl;
                }

                int theirAttack = rand() % 4 + 1;
                std::cout << "\nYour enemy isn't happy about that. They deal " << theirAttack << " damage." << std::endl;
                myHP -= theirAttack;

                if(theirAttack < 3) {
                    std::cout << "Ha, weakling." << std::endl;
                }
                else {
                    std::cout << "Ouch, that's gotta hurt." << std::endl;
                }
            }

            if(choice == 2) {
                std::cout << "\nYou have " << myHP << " HP." << std::endl;
            }

            if(choice == 3) {
                std::cout << "\nYour enemy has " << enemyHP << " HP." << std::endl;
            }
        }
    }

    if (enemyHP <= 0 && myHP <= 0) {
        std::cout << "Well this was a waste of time. You're both losers. It's a tie." << std::endl;
    }
    else if(enemyHP <= 0) {
        std::cout << "\nYour enemy dramatically wipes away their tears and runs away. You won and your toes are safe. Hooray!" << std::endl;
    }
    else {
        std::cout << "\nMaybe you should've worked out a little before starting this fight. You lost and your enemy laughed in your face. That's gotta be humiliating.\nIt's sad times for a clown :o(" << std::endl;
    }

    std:: cout << "Thanks for playing! :)" << std::endl;
    return 0;
}