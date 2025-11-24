#include <iostream>
#include <string>
#include "stdafx.h"

using namespace std;

int main()
{
    int numberOfRows = 10;


    char spaces = '.';
    char blocks = '#';

    // Punta del triángulo

    for (int row = 1; row <= numberOfRows; row++) {
        for (int j = 0; j < numberOfRows * 2 - row; j++)
        {
            cout << spaces;
        }
        for (int j = 0; j < row * 2 - 1; j++)
        {
            cout << blocks;
        }
        for (int j = 0; j < numberOfRows * 2 - row; j++)
        {
            cout << spaces;
        }
        cout << endl;
    }
    // resto del triángulo

    for (int row = 1; row <= numberOfRows; row++) {
        for (int j = 0; j < numberOfRows - row; j++)
        {
            cout << spaces;
        }
        for (int j = 0; j < row * 2 - 1; j++)
        {
            cout << blocks;
        }
        for (int j = 0; j < (numberOfRows - row) * 2 + 1; j++)
        {
            cout << spaces;
        }
        for (int j = 0; j < row * 2 - 1; j++)
        {
            cout << blocks;
        }
        for (int j = 0; j < numberOfRows - row; j++)
        {
            cout << spaces;
        }
        cout << endl;
    }

    return 0;
}