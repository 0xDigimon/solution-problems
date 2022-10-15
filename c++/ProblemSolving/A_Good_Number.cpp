#include <iostream>
using namespace std;
int main (){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int numbers,counter=0;
char K_good;
cin>>numbers>>K_good;
string arr;

while(numbers--){
    bool ok = true;
    cin>> arr;

    for (char i='0'; i <= K_good ;i++)
    {
        if(arr.find(i) == -1){
            ok=false;
        }
    }
    if (ok)
        {
            counter++;
        }
}
cout<<counter<<endl;

return 0;
}