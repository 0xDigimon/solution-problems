#include <iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
    int a;
    cin>>a;
    int arr1[a+10];
    for(int i=0 ;i<a;i++){
        cin>>arr1[i];
    }
    cout<<"=====================\n";
    int b;cin>>b;
    int arr2[b+10];
    for(int i=0 ;i<b;i++){
        cin>>arr2[i];
    }
    //for intersection between them
    set<int>arr;
    for(int i=0 ;i<a;++i){
        for (int j = 0; j < b; ++j)
        {
                if (arr1[i]==arr2[j])
                {
                arr.insert(arr1[i]);
                }
        }
        
    }
    for(auto i:arr){
        cout<<i<<endl;

    }



}