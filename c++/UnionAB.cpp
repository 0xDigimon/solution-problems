#include <iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
    set<int>arr;
    int a;
    cin>>a;
    int arr1[a+10];
    for(int i=0 ;i<a;i++){
        cin>>arr1[i];
        arr.insert(arr1[i]);
    }
    cout<<"=====================\n";
    int b;cin>>b;
    int arr2[b+10];
    for(int i=0 ;i<b;i++){
        cin>>arr2[i];
        arr.insert(arr2[i]);
    }
    //for intersection between them
    
    
    for(auto i:arr){
        cout<<i<<endl;

    }



}