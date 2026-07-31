#include <string>
#include <iostream>

using namespace std;
int main()
{
    string s;getline(cin,s);

    for (int i=0;i<s.length();i++){
        if (!isdigit(s[i])){    //若有一个非数字字符，则error
            cout<<"error"<<'\n';
            return 0;
        }
    }
    int n=stoi(s);
    cout<<n+1<<'\n';
    return 0;
}