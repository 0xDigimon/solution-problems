/* #include <bits/stdc++.h>
using namespace std;
int main()
{
   string s;

   cin >> s;

   int l = s.size();

   vector<char>c;

   for(int i=0;i<l;i++)
   {
      if(s[i]!='+')
      {
         c.push_back(s[i]);
      }
   }

   sort(c.begin(),c.end());
   l = c.size();

   for(int i=0;i<l-1;i++)
   {
      cout << c[i] << "+";
   }
      cout << c[l-1] <<endl;


    return 0;
} */
/* #include<iostream>
using namespace std;
#include<algorithm>
#include <sstream>
int main(){
   string s;
   cin>>s;
   string m;
   for (size_t i = 0; i < s.size(); i++)
   {
      if(s[i]!='+')
      {
         m+=s[i];
      }
   }
   stringstream geek(m);
   int x = 0;
   geek >> x;

   cout<<x<<endl;
} */
#include <iostream>

using namespace std;

int main()
{

   string x;
   cin >> x;
   int s = (x.size()-1);
/*    cout << s << endl;
 */   for (int j = s; j > 0; j -=2)
   {
      for (int i = 0; i < j; i += 2)
      {

         if (x[i] > x[j])
         {
            swap(x[i], x[j]);
         }
      }
   }

   cout << x;
}