#include <iostream>
using namespace std;
int main()
{
    int n, selec = 0;
    cin >> n;
    int arr[n + 10];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > selec)
            selec = arr[i];
      
    }
   cout << selec<< endl;
}