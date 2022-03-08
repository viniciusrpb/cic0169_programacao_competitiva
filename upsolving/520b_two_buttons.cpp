/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva 
 * Prof. Dr. Vinicius R. P. Borges
 * 
 * Tópico: Busca completa (Busca em Largura - BFS)
 * Resolucao do problema: 
 *           Codeforces Round #295 (Div. 2) - B. Two Buttons (https://codeforces.com/problemset/problem/520/B)
 *  
 * POR FAVOR: nao submeter esse código-fonte diretamente no Codeforces
 * 
 * Compilar no terminal: g++ 520b_two_buttons.cpp -std=c++11 -o device
 * Executar: ./device
 */

#include<bits/stdc++.h>

using namespace std;

typedef pair<int,int> pii;

int main()
{
    int n,m,clicks;
    queue<pii> fila;
    vector<bool> visited(10002,false);
    
    scanf("%d %d",&n,&m);
    
    fila.push(make_pair(n,0));
    visited[n] = true;
    
    while(!fila.empty())
    {
        tie(n,clicks) = fila.front();
        /*pii atual = fila.front();
        n = atual.first;
        clicks = atual.second;*/
        fila.pop();
        
        if(n == m)
            break;
        
        if(n*2 <= 10000 and !visited[n*2])
        {
            visited[n*2] = true;
            fila.push(make_pair(n*2,clicks+1)); // fila.push({n*2,clicks+1});
        }
        
        if(n - 1 > 0 and !visited[n-1])
        {
            visited[n-1] = true;
            fila.push(make_pair(n-1,clicks+1));
        }
    }
    
    printf("%d\n",clicks);
    
    return 0;
}
