#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter number of index: ";
    cin >> num;
    int arr[num + 10] = {};
    for (int i = 0; i < num; ++i)
    {
        cout<< "enter number" << i + 1 << " : ";
        cin >> arr[i];
    }
    cout << "Even : " << endl;
    for (int i = 0; i < num; ++i)
    {
        if (arr[i] % 2 == 0)
        {
            cout << arr[i] << ", ";
        }
    }
    cout << "" << endl;
    cout << "odd : " << endl;
    for (int i = 0; i < num; i++)
    {
        if (arr[i] % 2 != 0)
        {
            cout << arr[i] << ", ";
        }
    }
}