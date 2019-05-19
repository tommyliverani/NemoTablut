#pragma once


#define MAX_DEPTH 20

#define SERVER_IP "localhost"

// 11.800.000 * 90 * 2
#define TRANSPOSITION_TABLE_DIM 25000000
#define TRANSPOSITION_TABLE_WIDTH 6

// 20.000.000 * (4 + 8 * MOVE_TABLE_WIDTH)
#define MOVE_TABLE_DIM 20000000
#define MOVE_TABLE_WIDTH 5
#define DEFER_DEPTH 3

#define WHITE_TURN 0
#define BLACK_TURN 1
#define WHITE_WIN_TURN 2
#define BLACK_WIN_TURN 3
#define DRAW_TURN 4
