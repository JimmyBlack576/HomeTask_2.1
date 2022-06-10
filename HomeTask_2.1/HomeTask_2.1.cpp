#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int x, y;
    float s=1;
    cout << "Введите значение №1: \n";
    cin >> x;
    cout << "Введите значение №2: \n";
    cin >> y;
    
    for(int i = 1;i<=abs(y);i++)
    {
        s = s * x;
        
    }
    if (y < 0) { s = 1 / s; }
    cout << s;
}

