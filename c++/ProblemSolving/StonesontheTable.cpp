#include <iostream>
using namespace std;
#include <string>
int main()
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == a[i + 1])
        {
            sum += 1;
        }
    }

    cout << sum << endl;
}
