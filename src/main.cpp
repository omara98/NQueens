/**
* @author Omar Alsayed
* @date April 2022
*/
#include <iostream>
#include <vector>
#include <string>
#include "UI.h"
#include "Nq.h"

int main() {
    Nq* nq = new Nq();
    nq->makeBoard();
    delete nq;
    return 0;
}