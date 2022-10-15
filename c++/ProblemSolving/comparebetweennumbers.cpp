#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int minimum = 2000;
    int maximum = -2000;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        if (input > maximum)
        {
            maximum = input;
        }
        if (input < minimum)
        {
            minimum = input;
        }
    }
    cout << minimum << ' ' << maximum << endl;
}
