#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        arr[a[i] - 1] = i + 1;
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
