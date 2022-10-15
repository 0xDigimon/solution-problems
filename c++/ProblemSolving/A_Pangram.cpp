#include<iostream>
#include <set>
#include<algorithm>
 
using namespace std;
 
int main()
{
    int l,counter=0;
    cin >> l;
    string chars;
    cin>>chars;

    set<char> a;
    for(int i=0; i<l; i++){
        if(chars[i]>=65 && chars[i]<=90){
            chars[i]=(char)tolower(chars[i]);
    }
    }
    for (int j=0; j<l; j++){
        a.insert(chars[j]);
    }
    
    if(a.size()==26){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
