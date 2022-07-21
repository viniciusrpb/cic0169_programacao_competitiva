/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva 
 * Prof. Dr. Vinicius R. P. Borges
 * 
 * Tópico: Estruturas de Dados
 * Aula: Resolucao do problema 
 *                     Codeforces Round #551 (Div. 2) - A. Serval and Bus (https://codeforces.com/problemset/problem/1153/A)  
 * 
 * POR FAVOR: nao submeter esse código-fonte diretamente no Codeforces
 * 
 * Compilar no terminal: g++ 1153a_serval_bus.cpp -std=c++17 -o servaldo
 * Executar: ./servaldo
 * Complexidade: O(t log(n)) no tempo
 */

#include<bits/stdc++.h>
 
using namespace std;
 
typedef pair<int,int> pii;
 
int main()
{
    int t,l,freq,first,n,ans,serval;
    vector<int> bus_freq;
    priority_queue<pii,vector<pii>,greater<pii>> linhaTempo;
 
    scanf("%d %d",&n,&serval);
 
    for(int i = 0; i < n; i++)
    {
        scanf("%d %d",&first,&freq);
        bus_freq.push_back(freq);
        linhaTempo.push(make_pair(first,i));
    }
 
    t = 0;
 
    while(t < 100001)
    {
        pii ponto = linhaTempo.top();
        t = ponto.first;
        l = ponto.second;
        linhaTempo.pop();
 
        if(serval <= ponto.first)
        {
            ans = ponto.second;
            break;
        }
        else
        {
            linhaTempo.push(make_pair(t+bus_freq[l],l));
        }
    }
 
    printf("%d\n",ans+1);
 
    return 0;
}
