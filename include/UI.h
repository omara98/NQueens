/**
* @author Omar Alsayed
* @date April 2022
*/

#ifndef UI_H
#define UI_H
#include <vector>

/**
 * Displays the board
 */
class UI {
    public: 
      
      UI() {}

      ~UI() {}

      /**
       * Prints the board with the queens
       * @param board the board with the queens
       */
      void print(std::vector<std::vector<char>> board);

      /**
       * Prompts the user for the size of the board
       * @return an int equal to the size of the board
       */
      int getN();

};

#endif