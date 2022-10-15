#include <iostream>
using namespace std;
int main()
{
    
    int k, r, sum = 1;
    cin >> k >> r;
    bool A = true;
    /*while (A)
    {
        if ((k * sum) % 10 == r || (k * sum) % 10 == 0)
        {
            cout << sum << endl;
            break;
            A=false;
        }
        sum+=1;
    }*/
    for (int i = 0; i < 1; i--)
    {
        
        if ((k * sum) % 10 == r || (k * sum) % 10 == 0)
        {
            cout << sum << endl;
            break;
        }
        sum += 1;
    }

    return 0;
}
