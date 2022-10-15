#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s, t;
    cin >> s >> t;
    int c = 0;
    for (int i = 0; i < t.length(); i++)
    {
        if (s[c] == t[i])
        {
            c++;
        }
    }
    cout << c + 1 << endl;
    return 0;
}
