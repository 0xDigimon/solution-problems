#include <iostream>
using namespace std;

int main()
{
    int w_l, w_p;
    cin >> w_l;
    cin >> w_p;
    int n = 0;

    while (w_l <= w_p)
    {
        w_l *= 3;
        w_p *= 2;
        n++;
    }
    cout << n;

    return 0;
}