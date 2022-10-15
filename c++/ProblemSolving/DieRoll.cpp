#include <iostream>
using namespace std;
int main()
{
    int Y, W;
    cin >> Y >> W;
    int A = max(Y, W);
    // cout<<A<<endl;
    string D[6] = {"1/1", "5/6", "2/3", "1/2", "1/3", "1/6"};
    cout << D[A - 1] << endl;
    /*if ((A - 1) == 1)
        cout << "5/6";
    else if ((A - 1) == 2)//6-1 5/6
        cout << "2/3" << endl;//4/6
    else if ((A - 1) == 3)
        cout << "1/2" << endl; //6-3 3/6
    else if ((A - 1) == 4)
        cout << "1/3" << endl; //6-4 2/6
    else if ((A - 1) == 5)
        cout << "1/6" << endl;//6-5 1/6
    else
        cout << "1/1" << endl; //6-6 6/6 */
        return 0;
} // namespace std;
