/*
 * Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva 
 * Prof. Dr. Vinicius R. P. Borges
 * 
 * Tópico: Busca completa, Backtracking
 * Aula: resolução do problema "URI 1556 - Removing Letters" (https://www.urionlinejudge.com.br/judge/en/problems/view/1556)
 * 
 * POR FAVOR: nao submeta esse código-fonte no URI! 
 * 
 * Compilar no terminal: g++ uri1556_removing_letters.cpp -std=c++11 -o letters
 * Executar: ./letters
 */

#include<bits/stdc++.h>
 
using namespace std;

map<string,bool> visitado;
 
void dfs(string substr)
{
    visitado[substr] = true;
    
    for(int i = 0; i < substr.size(); i++)
    {
        char removido = substr[i];
        substr.erase(i,1);
        if(substr.size() > 0 && !visitado.count(substr))
        {
            dfs(substr);
        }
        substr.insert(i,1,removido);
    }
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    string str;
    
    while(cin>>str)
    {
        dfs(str);
        
        for(auto& p: visitado)
        {
            cout << p.first << "\n";
        }
        cout << "\n";
        visitado.clear();
    }
    
    return 0;
}
