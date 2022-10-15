#include <iostream>
using namespace std;
long long factorian(long long x)
{
    long long answer=1;
    for (int i = 1; i <= x; i++)
    {
        answer*=i;
    }
    return answer;
}
long long permutation(int n,int r){
    long long answer=1;
    for(int i=n-r+1;i<=n;i++){
        answer *=i ;
    }
    
    return answer;
}
int main(){
        cout << "this app to solve permutations\n";
        long long n;
        cin>>n;
        cout << "P";
        long long r;
        cin>>r;
        long long res;
        res=n-r;
        long long c =factorian(n);
        long long v=factorian(res);
        cout<<c/v<<endl;
        cout<<permutation(n,r)<<endl;
    }