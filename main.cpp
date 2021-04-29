#include <iostream>
#include "playermove.hpp"
#include "aimove.hpp"
#include "field.hpp"
#include <cassert>
 
int main() {

do //повторять пока не выбран выход из игры
{ 

    TurnOutCome outcome{}; //переменная статуса игры   

    CellState *field = Fieldptr; //поле

    init_field(field); // инициализация поля

    PlayerSign current_player = query_player_sign(); //запрос знака игрока
    
    PlayerSign human_player = current_player; //инициализация для сравнения

    PlayerSign buf_player = current_player; //буфер для вывода победителя

    print_field(field);

    do //повторять пока статус "continue"  не изменится
    {
        Pos_move pos;
        
        if (current_player == human_player) {
            pos = query_player_move(field); //запрос позиции клетки хода игрока
        } else {
            pos = query_ai_move(field);
        }    
        set_cell(field, pos.x, pos.y, sign_to_cell(current_player)); // запись символа игрока в указанную позицию
        
        outcome =  check_turn_outcome(field); //обновление статуса игры после хода
    
        print_field(field); //вывод поля

        buf_player = current_player; //запись в буфер до смены хода

        current_player = next_player(current_player); //переход хода (знака игрока)
        
    } while (outcome == TurnOutCome::CONTINUE); //сравнение статуса игры

    print_game_outcome(outcome, buf_player, human_player); //вывод результата игры

} while (query_replay()); //запрос повтора игры

return 0;
}