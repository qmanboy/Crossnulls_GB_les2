#pragma once

#include "playermove.hpp"

void print_greeting() {
    std::cout << "Welcome to Tic Tac Toe Game!\n";
}

size_t query_field_size() { //запрос размера игрового поля и проверка на корректность введеных данных
    print_greeting(); //приветствие здесь
    size_t length{};
    bool ok{};    
    std::cout <<"Please input field size in range 3 to 100.\n";
    
    while (!ok) {
        std::cout << ">";
        std::cin >> length;
        if ((length >= 3) && (length <= 100)) 
            ok = true;
        else 
            std::cout <<"Error: please input field size in range.\n";
    } 
    return length;
}