#include <iostream>
using namespace std;
int main () {

int numbers,counter=0;
cin >> numbers;
int Size[numbers+10];
for (int i = 0; i < numbers; i++) {
    cin >> Size[i];
}

int first=Size[0];

for (size_t i = 0; i<numbers ; i++)
{

    if(Size[i] < Size[i+1]){
        cout<<"\nff\n";
    }
    else {
        cout<<Size[i];
        i--;
    }
    
}

    return 0; 
}