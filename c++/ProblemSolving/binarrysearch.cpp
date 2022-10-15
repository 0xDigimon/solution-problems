#include <iostream>
using namespace std;
int main()
{
    int n, k, start = 0, mid;
    cin >> n >> k;
    int end = n - 1;
    int arr[n]; /*={1,2,3,4,5,6,7,8,9}*/
    int i;
    for (i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    int f = 0;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == k)
        {
            cout << "found in " << mid << endl;

            break;
        }
        else if (arr[mid] < k)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        f += 1;
        cout << "step: " << f << endl;
    }

    return 0;
}