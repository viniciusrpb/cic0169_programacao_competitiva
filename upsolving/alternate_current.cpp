#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string str;
    stack<char> pilha;
    
    cin >> str;
    
    for(int i = 0; i < str.size(); i++)
    {
        if(!pilha.empty())
            if(pilha.top() == str[i])
                pilha.pop();
            else
                pilha.push(str[i]);
        else
            pilha.push(str[i]);
    }
    
    if(pilha.empty())
        cout << "Yes\n";
    else
        cout << "No\n";
    
    return 0;
}
