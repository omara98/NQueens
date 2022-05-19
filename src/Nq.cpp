/**
* @author Omar Alsayed
* @date April 2022
*/

#include "Nq.h"
#include "UI.h"
#include <iostream>

bool Nq::isValid(int row, int col) {
    //horizontal
    for (int i = 0; i < col; i++) {
        if (board[row][i] == 'Q') {
            return false;
        }
    }

    //diagonals
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 'Q') {
            return false;
        }
    }

    for (int i = row, j = col; i < n && j >= 0; i++, j--) {
        if (board[i][j] == 'Q') {
            return false;
        }
    }

    return true;

}
//backtracking function
bool Nq::solve(int qCol) {
    //base case
    if (qCol >= n) {
        return true;
    }

    for (int i = 0; i < n; i++) {
        if (isValid(i, qCol)) {
            board[i].at(qCol) = 'Q';

            if (solve(qCol+1)) {
                return true;
            }
            //backtrack
            board[i].at(qCol) = '_';
        }
    }
    return false;
}

void Nq::makeBoard() {
    UI* ui = new UI();
    n = ui->getN();
    std::cout << "N = " << n << std::endl;
    for (int i = 0; i < n; i++) {
        std::vector<char> b;
        for (int j = 0; j < n; j++) {
            b.push_back('_');
        }
        board.push_back(b);
    }
    solve(0);
    ui->print(board);
    delete ui;
}