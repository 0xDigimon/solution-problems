#include <iostream>
using namespace std;
int main()
{
    /* string a, b;
    cin >> a >>b;
    int c=0;
    for (int i = 0; i < a.length(); i++)
    {
        if(a[i]!=b[i]){
            if(a[i]-b[i]){
                c=1;
            }
            else c=-1;
        }
        else c=0;
    }
    cout<<c; */
    string s1,s2;
    cin>>s1>>s2;
    int c=0;
    for(int i=0;i<s1.size();i++){
        if(s1[i]<92 )
        {
            s1[i]+=32;
            
        }
        if ( s2[i]<92)
        s2[i]+=32;
    }
    
    if(s1>s2)
    c=1;
    else if (s1<s2)
    c=-1;
    else
    c=0;
    cout <<c;
}