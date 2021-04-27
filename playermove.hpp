#pragma once

#include <iostream>
#include "logic.hpp"

PlayerSign query_player_sign() { //запрос символа игрока и проверка на корректность
    bool ok{};
    char player_sign;
    while (!ok) {
       std::cout << "Choose your sign (x or o): ";
       std::cin >> player_sign;
       switch (player_sign)
       {
        case 'x':
            return PlayerSign::X;
        break;
        case 'o':
            return PlayerSign::O;
        default:
            std ::cout << "\nError: sign is not x or o.\n";
            break;
       }
    }
}

Pos_move query_player_move(CellState* field) { //считывание хода игрока, проверка на правильность введенных данных
    // передача в функцию поля для проверки введеной клетки на пустоту
    Pos_move pos;
    bool ok = false;
    std::cout <<"Please make a move, input two numbers in range 1 to 3\n";
    while (!ok) 
    {
        std::cout << "> ";
        std::cin >> pos.x >> pos.y;
        pos.x--;
        pos.y--;         
        if (!std::cin)
        {               
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');            
            std::cout << "Errror: please input numbers.\n";
        } else if (!is_valid_pos(pos.x,pos.y)) {
            std::cout <<"Error: position is not correct!\n";
        } else if (get_cell(field, pos.x, pos.y) !=  CellState::Empty) {
            std::cout <<"Error: cell is not empty!\n";
        } else {
            ok = true;
        }
        
        
    }
return pos;
}