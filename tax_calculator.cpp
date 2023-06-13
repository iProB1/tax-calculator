#include <iostream>

float calculate(float amount, float tax) {
    return amount * (tax / 100.0);
}

int main() {
    float tax = 0.0f;
    float game = 0.0f;
    
    std::string command;
    while (true) {
        std::cout << "Enter command: ";
        std::cin >> command;
        
        if (command == "/tax") {
            std::cin >> tax;
            std::cout << "Tax rate set to " << tax << "%" << std::endl;
        } else if (command == "/game") {
            std::cin >> game;
            std::cout << "Game amount set to " << game << std::endl;
        } else if (command == "/win1") {
            float taxAmount = calculate(game, tax);
            float winningAmount = game - taxAmount;
            std::cout << "Winning amount (after tax): " << winningAmount << std::endl;
        } else {
            std::cout << "Invalid command!" << std::endl;
        }
    }
    
    return 0;
}
