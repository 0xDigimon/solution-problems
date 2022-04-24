#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int bird[n];
    for (int i = 0; i < n; i++)
    {
        cin >> bird[i];
    }

    int m;
    cin>>m;
 
    for(int i=0;i<m;i++)
    {
        int x, y;
        cin>>x>>y;
        x--;

        if (x > 0 && x < n - 1)
        {
            bird[x - 1] += y - 1;//bird[x - 1] = bird[x - 1] +y-1;
            bird[x + 1] += bird[x] - y;//bird[x + 1] = bird[x + 1] + bird[x] - y;
            bird[x] = 0;
        }
        else
        {
            bird[x - 1] += y - 1;//bird[x - 1] = bird[x - 1] + y-1;
            bird[x + 1] = bird[x + 1] + bird[x] - y;
            bird[x] = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << bird[i]<<endl;
    }

    return 0;
} // namespace std;
