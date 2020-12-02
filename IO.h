//
// Created by Admin on 02.12.2020.
//
#include <iostream>
using namespace std;
#ifndef PROJECT2_IO_H
#define PROJECT2_IO_H
void PrintBoard(char board[][3], int size)
{
    cout << endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << board[i][j] << " |  ";
        }
        cout << endl << " -|  - |  - |" << endl;
    }
}


int InputCoordinate()
{
    int coordinate;
    do{
        cout << "Enter number row  0 1 2 = ";
        cin >> coordinate;
    }while (!Check(coordinate));
    return coordinate;
}
#endif //PROJECT2_IO_H
