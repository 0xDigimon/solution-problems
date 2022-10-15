#include <iostream>
using namespace std;
int main()
{
    {
        string s;
        cin >> s;

        int steps = 0;
        int last = 0;
        for (int i = 0; i < s.length(); i++)
        {
            int first = s[i] - 97;
            int gole = abs(last - first);
            if (gole < 13)
            {
                steps += gole;
            }
            else
            {
                steps += 26 - gole;
            }
            last = first;
        }
        cout << steps << endl;
        return 0;
    }
}