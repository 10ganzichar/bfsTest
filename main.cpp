#include <iostream>
#include"bfs.h"

int main()
{
    C_BFS cBfs{};

    cBfs.add(0, 100);
    cBfs.add(100, 200);
    cBfs.add(100, 300);
    cBfs.add(200, 300);
    cBfs.add(200, 400);
    cBfs.add(300, 400);
    cBfs.add(300, 500);
    cBfs.add(500, 600);
    cBfs.add(500, 700);
    cBfs.add(600, 800);

    cBfs.print();
    cBfs.run(0);
}