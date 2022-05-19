/**
* @author Omar Alsayed
* @date April 2022
*/

#include "UI.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int UI::getN() {
    int n;
    bool b = false;
    while (b == false) {
        cout << "Enter size of board (# between 4-24)\n";
        cin >> n;
        if (n < 4 || n > 24) {
            cout << "Invalid entry. Try again\n";
        }
        else {
            b = true;
        }
    }
    return n;
}

void UI::print(std::vector<std::vector<char>> board) {
    char c = 65;
    for (int i = 0; i < board.size(); i++) {
        cout << c << "   ";
        c++;
    }
    cout << "\n";
    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board[i].size(); j++) {
            cout << board[i][j] << " | ";
        }
        cout << " " << i+1 << "\n";
    }
}