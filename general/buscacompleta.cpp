/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva 
 * Prof. Dr. Vinicius R. P. Borges
 * 
 * Tópico: Busca completa
 * Esse código-fonte gera todos os subvetores de um vetor informado na entrada
 * 
 * Compilar no terminal: g++ busca_completa.cpp -std=c++11 -o bc
 * Executar: ./bc
 */

#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> all_sublists;
vector<int> a;
    
void csearch(int i, vector<int> sublist)
{    
    if(i < 0)
    {
        all_sublists.push_back(lis);
        return ;
    }
    
    /* podemos não pegar o elemento a[i] */
    csearch(i-1,sublist);
    
    /* podemos pegar o elemento a[i] */
    sublist.push_back(a[i]);
    
    csearch(i-1,sublist);    
}

int main()
{
    int aux,n;
    vector<int> l;
    
    /* n tem que ser pequeno */
    scanf("%d",&n);
    
    for(int i =0; i < n; i++)
    {
        scanf("%d",&aux);
        a.push_back(aux);
    }
    
    csearch(n-1,l);
    
    for(int i = 0; i < all_sublists.size(); i++)
    {
        printf("[");
        for(int elem : all_sublists[i])
        {
            printf("%d,",elem);
        }
        printf("]\n");
    }
    
    return 0;
}
