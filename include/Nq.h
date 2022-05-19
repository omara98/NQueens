/**
* @author Omar Alsayed
* @date April 2022
*/

#ifndef NQ_H
#define NQ_H
#include <vector>
#include "UI.h"
/**
 * Makes the n x n board and places the queens
 */ 
class Nq {
    public:
      Nq() {}

      ~Nq() {}

      /**
       * Checks if queen placement is valid
       * @param row the row to be checked
       * @param col the col to be checked
       * @return bool true if placement is valid, false if otherwise
       */
      bool isValid(int row, int col);
      /**
       * Places the queens on the board
       * @param qCol the column in which the queen will be placed
       * @return bool true if the queen was placed, false if otherwise
       */
      bool solve(int qCol);

      /**
       * Makes board of size n x n
       */
      void makeBoard();

      std::vector<std::vector<char>> board;

      private:
       int n;
      

};

#endif