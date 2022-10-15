#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int police[n+10];
    int newpolice=0;
    int crime=0;
    for(int i=0;i<n;i++){
        cin>>police[i];
    }
    
    
    for(int i=0;i<n;i++){
        if (police[i]!=-1) newpolice+=police[i];
        else{
            if (newpolice>0)newpolice-=1;
            else{
                crime++;
            }
        }
        
    }
    cout<<crime;
    
    

    return 0;
}