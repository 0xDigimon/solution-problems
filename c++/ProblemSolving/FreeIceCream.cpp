#include <iostream>
using namespace std;
int main()
{
    int long long nb,myice,nice,c=0;
    
    char sign;
    cin>>nb>>myice;
    for (int i = 0; i < nb; i++)
    {
        cin>>sign>>nice;
        if(sign =='+')
            {
                myice+=nice;
            }
        else{
            if(nice>myice){
                c++;
            
            }
            else{
                myice-=nice;
            }
        }

    }
    cout<<myice<<" "<<c<<endl;
}