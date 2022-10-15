#include <iostream>
using namespace std;
long long factorian(int x)
{
    long long answer=1;
    for (int i = 2; i <= x; i++)
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
float circularPermutations(float n,float r){
    float answer;
    answer = permutation(n,r)/r;
    return answer;
}

int main(){
        cout << "this app to solve permutations\n";
        int n;
        cin>>n;
        cout << "P";
        int r;
        cin>>r;
        /* cout<<(factorian(n)/(factorian(n-r)))<<endl; */
        cout<<permutation(n,r)<<endl;
        cout<<circularPermutations(n,r)<<endl;
        
}