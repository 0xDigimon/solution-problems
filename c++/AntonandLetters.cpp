#include <iostream>
#include <iostream>
using namespace std;
#include <string>
#include <algorithm>
#include<set>
int main()
    {
        string s = {};
        getline(cin, s);
        string b={};
        set<int> c;
        
        int a =0;
        if (s[0] == '{' && s[(s.length() - 1)] == '}')
        {
            for (int i = 0; i < s.length(); i++)
            {
                if (s[i] >= 'a' && s[i] <= 'z')
                {
                    b += s[i];
                }
            }
            
            for (int i = 0; i < b.length(); i++)
            {
                int a = (int)b[i];
                c.insert(a);
                
            }
            
        }
     
        cout << c.size() << endl;
    }
