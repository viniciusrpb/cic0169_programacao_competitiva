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
 * Compilar no terminal: g++ 1949a_abc_string.cpp -std=c++17 -o abcstring
 * Executar: ./abcstring
 * 
 * Complexidade: O(8 * |string|)
 */

#include<bits/stdc++.h>
 
using namespace std;
 
bool isSet(int num, int bitPos){
    return (num & (1 << bitPos)) != 0;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    char brackets[2] = {'(',')'};
    
    cin >> t;
    
    while(t--){
        string str;
        string ans = "NO\n";
        cin >> str;
        
        for(int bitmask = 0; bitmask < 8; bitmask++){
            stack<int> pilha;
            
            for(int i = 0; i < str.size(); i++){
                char c = brackets[isSet(bitmask,str[i]-'A')];
                if(c == '('){
                    pilha.push(c);
                }
                else{
                    if(!pilha.empty() and pilha.top() == '(')
                        pilha.pop();
                    else
                        pilha.push(c);
                }
            }
            
            if(pilha.empty()){
                ans = "YES\n";
                break;
            }
        }
        cout << ans;
    }
    
    return 0;
}
