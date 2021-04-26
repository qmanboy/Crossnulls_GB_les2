#include <iostream>
#include "logic.hpp"
#include "playermove.hpp"
#include "aimove.hpp"
#include <cassert>
 
int main() {

print_greeting(); //приветствие 

do //повторять пока не выбран выход из игры
{ 

    TurnOutCome outcome{}; //переменная статуса игры 

    GameField field{}; //поле

    PlayerSign current_player = PlayerSign::X; //знак текущего игрока
         //запрос и вывод размеров поля

    print_field(field);

    do //повторять пока статус "continue"  не изменится
    {
        Pos_move pos;
        
        if (current_player == PlayerSign::X) {
            pos = query_player_move(field); //запрос позиции клетки хода игрока
        } else {
            pos = query_ai_move(field);
        }    
        set_cell(field, pos.x, pos.y, sign_to_cell(current_player)); // запись символа игрока в указанную позицию
        
        outcome =  check_turn_outcome(field); //обновление статуса игры после хода
    
        print_field(field); //вывод поля

        current_player = next_player(current_player); //переход хода (знака игрока)
        
    } while (outcome == TurnOutCome::CONTINUE); //сравнение статуса игры

    print_game_outcome(outcome); //вывод результата игры

} while (query_replay()); //запрос повтора игры

return 0;
}