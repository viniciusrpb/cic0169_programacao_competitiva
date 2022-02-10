/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva 
 * Prof. Dr. Vinicius R. P. Borges
 * 
 * Tópico: Operadores bitwise e bitmasks
 * Aula: Resolucao do problema 
 *                     Educational Codeforces Round 105 (Rated for Div. 2) - A. ABC String (https://codeforces.com/problemset/problem/1494/A)
 * 
 * POR FAVOR: nao submeter esse código-fonte diretamente no Codeforces
 * 
 * Compilar no terminal: g++ abc_string.cpp -std=c++11 -o abcstring
 * Executar: ./abcstring
 */

#include<bits/stdc++.h>
 
using namespace std;
 
int n,l,r,x;

 
int isSet(int pos, int number)
{
    int pot2 = (1<<pos);
    if(number & pot2)
        return 1;
    else
        return 0;
}
 
int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    char c;
    char bracket[2] = {'(',')'};
    
    cin >> t;
    
    while(t--)
    {
        string str;
        string ans = "NO\n";
        cin >> str;
        int bitmask = 0;
        
        while(bitmask < 8)
        {
            stack<char> pilha;

            for(int i = 0; i < str.size(); i++)
            {
                c = bracket[isSet(str[i]-'A',bitmask)];

                if(c == '(')
                {
                    pilha.push(c);
                }
                else
                {
                    if(!pilha.empty() && pilha.top() == '(')
                        pilha.pop();
                    else
                        pilha.push(c);
                }
            }
            if(pilha.empty())
            {
                ans = "YES\n";
                break;
            }
            bitmask++;
        }
        cout << ans;
    }
    
    return 0;
}
