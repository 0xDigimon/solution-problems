#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int min = 0;
    for (int i = 0; i < n; i++)
    {
        min= i;
        for (int j = i+1; j < n; j++){
        if (arr[j] < arr[min])
            min = j;
            }
            int temp = arr[i];
                arr[i] = arr[min];
                arr[min] = temp;
                
        

    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    cout << endl;
    return 0;
}