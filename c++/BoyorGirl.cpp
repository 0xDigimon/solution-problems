#include <iostream>
using namespace std;
#include <string>

#include <algorithm>
int main()
{
    string a;
    cin >> a;

    int sum = 0;
    for (int j = 'a' || 'A'; j <= 'z' || j <= 'Z'; j++)
    {
        for (int i = 0; i < a.length(); i++)
        {
            if (j == a[i])
            {
                sum += 1;
                break;
            }
        }
    }
    if (sum % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
}