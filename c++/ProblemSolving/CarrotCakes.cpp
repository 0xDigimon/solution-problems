#include <iostream>
using namespace std;
int main()
{
    /*ios::sync_with_stdio(0);
    cin.tie(0) ;cout.tie(0);*/
    int n, t, k, d;
    cin >> n >> t >> k >> d;
    int c;
    if (n % k == 0)
    {
        c = n / k;
    }
    else
    {
        c = (n / k) + 1;
    }
    if (c * t > (t + d))
        cout << "YES";

    else
        cout << "NO";
}