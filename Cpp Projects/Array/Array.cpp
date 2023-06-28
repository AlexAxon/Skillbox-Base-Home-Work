#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    //инициализируем структуру buf, передаём в неё время
    struct tm buf;
    time_t t = time(NULL);
    localtime_s(&buf, &t);

    //создаём, заполняем и одновременно выводим массив
    const int N = 5;
    int ArrN[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            ArrN[i][j] = i + j;
            cout << ArrN[i][j] << " ";
        }
        cout << "\n";
    }

    
    int Line = buf.tm_mday % N; // вычисляем строку
    long long SumLine = 0; 

    // Суммируем значение эллементов строки и выводим 
    for (int i = 0; i < N; i++)
    {
        SumLine += ArrN[Line][i];
    }
    cout << SumLine;
}

