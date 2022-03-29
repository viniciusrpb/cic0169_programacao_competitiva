/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva 
 * Prof. Dr. Vinicius R. P. Borges
 * 
 * Tópico: Divisão-e-conquista, Busca Binária
 * Resolucao do problema: 
 *           Codeforces Round #367 (Div. 2) - B. Interesting drink (https://codeforces.com/problemset/problem/706/B)
 *  
 * POR FAVOR: nao submeter esse código-fonte diretamente no Codeforces
 * 
 * Compilar no terminal: g++ 706b_interesting_drink.cpp -std=c++11 -o soda
 * Executar: ./soda
 */

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,aux,key,q,ans;
    vector<int> price;
    
    scanf("%d",&n);
    
    for(int i = 0; i < n;i++)
    {
        scanf("%d",&aux);
        price.push_back(aux);
    }
    
    sort(price.begin(),price.end());
    
    scanf("%d",&q);
    
    while(q--)
    {
        scanf("%d",&key);
        ans = upper_bound(price.begin(),price.end(),key) - price.begin();
        printf("%d\n",ans);
    }
    
    return 0;
}
