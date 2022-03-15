/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva 
 * Prof. Dr. Vinicius R. P. Borges
 * 
 * Tópico: Busca completa (Busca em Profunidade - DFS com Backtracking)
 * Resolucao do problema: 
 *           Codeforces Round #197 (Div. 2) - C. Xenia and Weights (https://codeforces.com/problemset/problem/339/C)
 *  
 * POR FAVOR: nao submeter esse código-fonte diretamente no Codeforces
 * 
 * Compilar no terminal: g++ 339c_xenia_weights.cpp -std=c++11 -o quenia
 * Executar: ./quenia
 */

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int m;
vector<int> answer;
vector<ll> peso_prato(2,0);
string str;

bool dfs(int i, int ultimoPrato, int quiloUltimoPeso)
{
    if(i >= m)
        return true;
    
    for(int j = 0; j < 10; j++)
    {
        if(str[j]=='0')
            continue ;
        
        if((quiloUltimoPeso != j+1) and (peso_prato[ultimoPrato^1] + (j+1) > peso_prato[ultimoPrato]))
        {
            ultimoPrato^= 1;
            peso_prato[ultimoPrato] += j+1;
            
            if(dfs(i+1,ultimoPrato,j+1))
            {
                answer.push_back(j+1);
                return true;
            }

            peso_prato[ultimoPrato] -= j+1;
            ultimoPrato^= 1;
        }
        
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0); 

    cin >> str;
    cin >> m;
    
    if(!dfs(0,1,-1))
        cout << "NO\n";
    else
    {
        cout << "YES\n";
        for(int i = answer.size()-1; i >= 0; i--)
            cout << answer[i] << " ";
        cout << "\n";
    }
    
    return 0;
}
