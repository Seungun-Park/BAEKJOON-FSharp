#include <iostream>
#include <string>

int main()
{
    using namespace std;
    
    string str;
    for(cin >> str; str != "0"; cin >> str)
    {
        int i = 0;
        for(i = 0; i < str.length() / 2; ++i)
        {
            if(str[i] != str[str.length() - i - 1]) break;
        }
        
        if(i == str.length() / 2) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    
    return 0;
}