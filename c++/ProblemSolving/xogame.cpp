#include <iostream>
using namespace std;

int main()
{
    cout << "this is oxo game you need enter char x or o" << endl;
    char xo[4][4] = {}; //recommend it is greater than real number 3
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << "enter char " << i + 1 << " : " << j + 1 << " : ";
            cin >> xo[i][j];
            cout << endl;
        }
    }
    cout << "your game" << endl;
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << " " << xo[i][j];
        }
        cout << endl;
    }

    return 0;
}