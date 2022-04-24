#include <iostream>
using namespace std;
int main()
{
    int nums;
    cout << "Enter number of index: ";
    cin >> nums;
    int arr[nums] = {};
    for (int i = 0; i < nums; ++i)
    {

        cout << "enter number " << i + 1 << ": ";
        cin >> arr[i];
    }
    for (int i = nums - 1; i >= 0; --i)
    {
        cout << arr[i] << endl;
    }
}