#include <iostream>
#include <time.h>
#include "Vector.h"
#include "List.h"
using namespace std;

double elapsed_time( clock_t start, clock_t finish){
   return (finish - start)/(double)(CLOCKS_PER_SEC/1000);
}

int main()
{
    const int SIZE = 50000;

    int data[SIZE];

    for(int i = 0; i < SIZE; i++)
    {
        data[i] = rand() % 51; // Random integer in [0, 50]
    }


    double v_insertTime, l_insertTime, v_visitTime, l_visitTime;
    Vector<int> V, V_copy;
    List<int> L, L_copy;
    clock_t start, finish;
    
    start = clock();
    for(int i = 0; i < SIZE; i++)
    {
        V.push_back(data[i]);
    }
    finish = clock();
    v_insertTime = elapsed_time(start, finish);

    start = clock();
    for(int i = 0; i < SIZE; i++)
    {
        L.push_back(data[i]);
    }
    finish = clock();
    l_insertTime = elapsed_time(start, finish);

    start = clock();
    V.visitAll();
    finish = clock();
    v_visitTime = elapsed_time(start, finish);

    start = clock();
    L.visitAll();
    finish = clock();
    l_visitTime = elapsed_time(start, finish);

    cout << "Matthew Lee" << endl;
    cout << "301283427" << endl;
    cout << "leekeonl" << endl;
    cout << "Program: Part1" << endl;
    cout << "Type of Elements: int" << endl;
    cout << "Number of Elements Added: " << SIZE << endl;
    cout << "Time units: milliseconds" << endl;
    cout << "Time for Vector Insertion: " << v_insertTime << endl;
    cout << "Time for List Insertion: " << l_insertTime << endl;
    cout << "Time for Vector Visiting: " << v_visitTime << endl;
    cout << "Time for List Visiting: " << l_visitTime << endl;

    return 0;
}
