#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter  number of digits: ";
    cin >> num;
    int freq[num + 10] = {};

    for (int i = 0; i < num; ++i)
    {
        int in;
        cout << "enter digit " << i + 1 << " : ";
        cin >> in;
        freq[in]++;
    }
    for (int i = 0; i < num; ++i)
    {
        if (freq[i] > 0)
        {
            cout << i << " : " << freq[i] << endl;
        }
    }
}
