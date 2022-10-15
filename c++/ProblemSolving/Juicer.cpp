#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0) ;cout.tie(0);
    int n, b, d,a,sum = 0, c = 0;
    cin >> n >> b >> d;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a <= b)
            sum += a;

        if (sum > d)
        {
            c += 1;
            sum = 0;
        }
    }
    cout << c;
    return 0;
}
