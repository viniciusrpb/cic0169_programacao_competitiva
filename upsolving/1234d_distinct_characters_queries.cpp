/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva 
 * Prof. Dr. Vinicius R. P. Borges
 * 
 * Tópico: Estruturas de Dados
 * Aula: Resolucao do problema 
 *                     Codeforces Round #590 (Div. 3) - D. Distinct Characters Queries (https://codeforces.com/contest/1234/problem/D)
 * 
 * POR FAVOR: nao submeter esse código-fonte diretamente no Codeforces
 * 
 * Compilar no terminal: g++ 1234d_distinct_characters_queries.cpp -std=c++11 -o distc
 * Executar: ./distc
 */

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int l,r,ans,q,op,pos;
    char c;
    set<int> letras_indices[26];
    string str;
    
    cin >> str;
    
    cin >> q;
    
    for(int i = 0; i < str.size();i++)
        letras_indices[str[i]-'a'].insert(i);
    
    while(q--) // 10^5 operacoes
    {
        cin >> op;
        
        if(op == 1)
        {
            cin >> pos >> c;
            letras_indices[str[pos-1]-'a'].erase(pos-1);
            str[pos-1] = c;
            letras_indices[c-'a'].insert(pos-1);
        }
        else
        {
            ans = 0;
            cin >> l >> r;
            
            // O(26*log N) ~ O(log N)
            for(int i = 0; i < 26; i++)
            {
                if(!letras_indices[i].size())
                    continue;
                // O (log N)
                set<int>::iterator it = letras_indices[i]..lower_bound(l-1);
                if(it != letras_indices[i].end() and *it <= r-1)
                    ans++;
            }
            
            cout << ans << "\n";
        }
    } // 10⁵ * 10⁵ = 10^10 operacoes
      // 1 segundo = 10^8
      // 2 segundos
    
    return 0;
}
