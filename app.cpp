/*
Author  : John07-noob
Date    : Nov/08/2020
*/

#include <iostream>

int main() {
    std::string user_input;
    int user_num1, user_num2, result;

while(true){
    std::cout << "Welcome To Simple Calc\n";
    std::cout << "1.Addition\n";
    std::cout << "2.Subtraction\n";
    std::cout << "3.Multiplication\n";
    std::cout << "4.Division\n";
    std::cout << "Choose The Operation: ";

    std::cin >> user_input;
    if (user_input == "1") {
        std::cout << "Insert Number Here: ";
        std::cin >> user_num1;
        if (std::cin.fail()) {
            std::cout << "Invalid Command!\n";
            break;
        }else{
            std::cout << "Insert Number Here: ";
            std::cin >> user_num2;
            if (std::cin.fail()) {
                std::cout << "Invalid Command!\n";
                break;
            }else {
                result = user_num1 + user_num2;
                printf("The Result: %d\n", result);
            }
        }

    } else if (user_input == "2") {
        std::cout << "Insert Number Here: ";
        std::cin >> user_num1;
        if (std::cin.fail()) {
            std::cout << "Invalid Command!\n";
            break;
        }else {
            std::cout << "Insert Number Here: ";
            std::cin >> user_num2;
            if (std::cin.fail()) {
                std::cout << "Invalid Command!\n";
                break;
            }else {
                result = user_num1 - user_num2;
                printf("The Result: %d\n", result);
            }
        }

    } else if (user_input == "3") {
        std::cout << "Insert Number Here: ";
        std::cin >> user_num1;
        if (std::cin.fail()) {
            std::cout << "Invalid Command!\n";
            break;
        }else {
            std::cout << "Insert Number Here: ";
            std::cin >> user_num2;
            if (std::cin.fail()) {
                std::cout << "Invalid Command!\n";
                break;
            }else {
                result = user_num1 * user_num2;
                printf("The Result: %d\n", result);
            }
        }

    } else if (user_input == "4") {
        std::cout << "Insert Number Here: ";
        std::cin >> user_num1;
        if (std::cin.fail()) {
            std::cout << "Invalid Command!\n";
            break;
        }else {
            std::cout << "Insert Number Here: ";
            std::cin >> user_num2;
            if (std::cin.fail()) {
                std::cout << "Invalid Command!\n";
                break;
            }else {
                result = user_num1 / user_num2;
                printf("The Result: %d\n", result);
            }
        }
    } else {
        std::cout << "Invalid Command!\n";
    }

}
}
