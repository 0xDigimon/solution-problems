#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int s = 0, d = 0;
    int l = 0, r = n - 1;
    bool sereja = true;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    while (l <= r)
    {
        if (arr[l] >= arr[r])
        {
            if (sereja)
            {
                s += arr[l];
            }
            else
            {
                d += arr[l];
            }
            l++;
        }
        else if (arr[r] > arr[l])
        {
            if (sereja)
            {
                s += arr[r];
            }
            else
            {
                d += arr[r];
            }
            r--;
        }
        if (sereja)
            sereja = false;
        else
            sereja = true;
    }

    cout << s << " " << d;
    return 0;
}