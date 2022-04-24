#include <iostream>
using namespace std;
int main()
{
    int n, x = 0, y = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        char f;
        cin >> f;
         if (f == 'A')
        {
            x++;
        }
        else if (f == 'D')
        {
            y++;
        }
    }
    if (x > y)
    {
        cout << "Anton"<<endl;
    }
    else if (y > x)
    {
        cout << "Danik"<<endl;
    }
    else
    {
        cout << "Friendship"<<endl;
    }
}