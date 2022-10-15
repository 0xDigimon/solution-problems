#include<iostream>
using namespace std;
int main(){
    long long int n
    , mini, maxm
    ,i;
//===========================================================
    cin >> n;
    long long int arr[n+10];
    for (i=0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long int first = arr[0], last = arr[n - 1];
//===========================================================
    for (i=0 ; i < n; i++)
    {
//===========================================================
        if (i == 0)//first element
        {
            mini = abs(arr[1] - first);
            maxm = abs(last - first);
        }
//===========================================================
        else if (i == n - 1)//last element
        {
            mini = abs(last - arr[n - 2]);
            maxm = abs(last - first);
        }
//===========================================================
        else //any other element
        {
            long long int left = arr[i + 1], right = arr[i - 1];
            mini = min(abs(arr[i] - left), abs(arr[i] - right));
            maxm = max(abs(arr[i] - first), abs(arr[i] - last));
        }
        cout << mini << " " << maxm << endl;
    }

return 0;
}