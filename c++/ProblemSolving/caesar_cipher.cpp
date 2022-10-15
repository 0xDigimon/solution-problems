#include <iostream>
using namespace std;
string encrypt(string text, int s)
{
    string result = "";

    for (int i = 0; i < text.length(); i++) {

        // Encrypt Uppercase letters
        if (isupper(text[i]))
            result += char(int(text[i] + s - 65) % 26 + 65);
        // Encrypt Lowercase letters
        else
            result += char(int(text[i] + s - 97) % 26 + 97);
    }
    return result;
}



string decrypt(string text, int s)
{
    string result = "";

    for (int i = 0; i < text.length(); i++) {

        // Decrypt Uppercase letters
        if (isupper(text[i]))
            result += char(int(text[i] - s + 26 - 65) % 26 + 65);
        // Decrypt Lowercase letters
        else
            result += char(int(text[i] - s + 26 - 97) % 26 + 97);
    }

    return result;
}




int main()
{
    string password ;
    string text;
    char sing;
    int s;
    cout <<"Enter your Text wants to Encrypt or decrypt: ";
    cin>>text;
    cout << "Press E to Encrypt or D to Decrypt: ";
    cin>>sing;
    if (sing == 'E')
    {
        cout<<"Enter Value of Shift Encrypt your text (0-25): ";
        cin>>s;
        cout << "Text : " << text;
        cout << "\nShift: " << s;
        cout << "\nCipher Encryption: " << encrypt(text, s)<<endl;
    }
    else 
    {
        cout<<"Enter Value of Shift to Decrypt your text (0-25): ";
        cin>>s;
        
        cout << "Text : " << text;
        cout << "\nShift: " << s;
        cout<<"\nEnter your password: ";
        cin>>password;
        if (password=="0xDigimon"||password=="Elamrosy"){
        cout << "\nCipher Decryption: " << decrypt(text, s)<<endl;
        }
        else{
            cout<<"Access Denied!\n";
        }
    }
    return 0;
}