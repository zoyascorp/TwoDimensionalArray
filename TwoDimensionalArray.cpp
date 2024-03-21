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

    struct tm buf;
    time_t t = time(NULL);
    localtime_s(&buf, &t);
    buf.tm_mday;
    int index = buf.tm_mday % size;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            array[i][j] = i + j;
            cout << " " << array[i][j];
        }
        cout << endl;
    }
    for (int j = 0; j < size; j++)
    {
        sum = array[index][j];
    }
    cout << "On " << buf.tm_mday << " we have " << sum << endl;
}

