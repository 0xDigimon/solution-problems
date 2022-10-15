#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>arr;
    int a;
    cin>>a;
    int arr1[a+10],arr2[a+10],arr3[a+10];
    for (size_t i = 0; i < a; i++)
    {
        cin>>arr1[i];
    }
    for (size_t i = 0; i < a; i++)
    {
        cin>>arr2[i];
    }
    for (size_t i = 0; i < a; i++)
    {
        cin>>arr3[i];
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            for(int k=0;k<a;k++)
            {
                if (arr1[i]==arr2[j]&&arr2[j]==arr3[k])
                {
                    arr.insert(arr1[i]);
                }
            }
        }
    }
    for(int i: arr)
    {
        cout<<i<<endl;
    }
    
}