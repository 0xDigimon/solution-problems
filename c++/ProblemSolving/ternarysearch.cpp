#include <iostream>
using namespace std;
#include<algorithm>
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr + n);
    
    int l = 0, r = n - 1, m1, m2;
    while (l <= r)
    {
        m1 = l + (r - l) / 3;
        m2 = r + (r - l) / 3;
        if (arr[m1] == k || arr[m2] == k)
        {
            cout << "found" << endl;
            break;
        }
        else if (k < arr[m1])
        {
            r = m2 - 1;
        
        }
        else if (k > arr[m1])
        {
            l = m1 + 1;
        }
        else
        {
            l = m1 + 1;
            r = m2 - 1;
        }
    }
}