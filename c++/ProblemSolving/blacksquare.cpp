#include <iostream>
#include <string>

using namespace std;

int main()
{
    int s1, s2, s3, s4;
    int sum = 0;
    string s;

    while (cin >> s1 >> s2 >> s3 >> s4)
    {
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                sum += s1;
            }
            else if (s[i] == '2')
            {
                sum += s2;
            }
            else if (s[i] == '3')
            {
                sum += s3;
            }
            else if (s[i] == '4')
            {
                sum += s4;
            }
        }
        cout << sum << endl;
        break;
    }

    return 0;
}
