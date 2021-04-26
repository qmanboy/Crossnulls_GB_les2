#pragma once

#include "logic.hpp"
#include <iostream>

void print_greeting() {  //приветствие
    std::cout <<"Welcome to Tic Tak Toe game!\n\n";
}

Pos_move query_player_move(GameField& field) { //считывание хода игрока, проверка на правильность введенных данных
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

