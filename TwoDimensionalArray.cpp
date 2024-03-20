#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h> 
using namespace std;

int main()
{
    const int size = 5;

    int array[size][size]{};

    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            array[i][j] = i + j;
            cout << " " << array[i][j];
            
            struct tm buf;
            time_t t = time(NULL);
            localtime_s(&buf, &t);
            buf.tm_mday;
            /*size_t col = 0;
            if (buf.tm_mday % size == col);
            {
                sum += i;
            }*/
        }
        cout << endl; //<< sum << endl;
    }
}

