#pragma once

#include "logic.hpp"
#include <random>

size_t get_empty_cells (size_t* free_cells, CellState* field) { //получение количества пустых клеток
    size_t* last_element = free_cells;
    size_t free_cells_num{};
    for (size_t i = 0; i < FIELD_WIDTH * FIELD_WIDTH; i++) {
         if (field[i] == CellState::Empty) {
             *last_element = i;
             last_element++;
             free_cells_num++;
         }
    }
    return free_cells_num;
}

Pos_move get_random_empty_cell(CellState* field) { //получение случайной клетки
    size_t free_cells[FIELD_WIDTH*FIELD_WIDTH];
    size_t free_cells_num = get_empty_cells(free_cells, field);
    std::mt19937 algorithm;
    std::uniform_int_distribution<> dist(0, free_cells_num - 1);
    auto random_idx = dist(algorithm);
    size_t target_idx = free_cells[random_idx];
    return Pos_move{target_idx % FIELD_WIDTH, target_idx / FIELD_WIDTH};
}

Pos_move make_predict_move(CellState* field) { //предсказание на ход вперед
    CellState* test_field = new CellState[FIELD_WIDTH * FIELD_WIDTH];
    std::copy_n(field, FIELD_WIDTH * FIELD_WIDTH, test_field);
    
    size_t free_cells[FIELD_WIDTH*FIELD_WIDTH];
    size_t free_cells_num = get_empty_cells(free_cells, field);

    for (size_t i= 0; i < free_cells_num; i++) {
        size_t free_cells_idx = free_cells[i];
            test_field[free_cells_idx] = CellState::O;        
            if (check_turn_outcome(test_field) == TurnOutCome::O_WIN) {
                return Pos_move{ free_cells_idx % FIELD_WIDTH, free_cells_idx / FIELD_WIDTH};
            }
            test_field[free_cells_idx] = CellState::X;
            if (check_turn_outcome(test_field) == TurnOutCome::X_WIN) {
                    return Pos_move{ free_cells_idx % FIELD_WIDTH, free_cells_idx / FIELD_WIDTH};
            }
        test_field[free_cells_idx] = CellState::Empty;
        }
    return get_random_empty_cell(field);
}

Pos_move query_ai_move(CellState* field) {
    
    return make_predict_move(field);
}