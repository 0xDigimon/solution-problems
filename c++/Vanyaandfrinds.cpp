#include <iostream>
using namespace std;
int main()
{
    int v;
    cin >> v;
    int h;
    cin >> h;
    int hv;
    int sum = 0;
    for (int i = 0; i < v; ++i)
    {
        cin >> hv;
        if (hv > h)
        {
            sum += 2;
        }
        else
            sum++;
    }
    cout << sum << endl;
}