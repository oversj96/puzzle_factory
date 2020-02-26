// SimpleNurikabe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "RowBrain.h"


int main()
{
    // Implementation of simple rows allows for the correct determining of a 2x2 only
    // Implemenation of ambiguous rows will allow for the rest (Not Yet Implemented)
    /*RowBrain brain(3);

    int count = 0;
    for (int i = 0; i < brain.triviallyLegalRows.size(); ++i) {
        for (int j = 0; j < brain.triviallyLegalRows[i].size(); ++j) {
            if (brain.triviallyLegalRows[i][j]) {
                ++count;
            }
        }
    }
    std::cout << std::to_string(count) << std::endl;
    std::cin.get();
*/

    std::vector<std::vector<char>> strings = RowBrain::partitionerStrings(10);

    for (auto const &str : strings) {
        std::cout << "[";
        for (auto item : str) {
            std::cout << std::to_string(item) << ", ";
        }
        std::cout << "]" << std::endl;
    }
    std::cout << std::to_string(strings.size()) << std::endl;
    std::cin.get();
    return 0;
}

