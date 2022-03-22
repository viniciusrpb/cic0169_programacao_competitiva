/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva 
 * Prof. Dr. Vinicius R. P. Borges
 * 
 * Tópico: Divisão-e-conquista
 * Resolucao do problema: 
 *           Codeforces Round #702 (Div. 3) - D. Permutation Transformation (https://codeforces.com/problemset/problem/1490/D)
 *  
 * POR FAVOR: nao submeter esse código-fonte diretamente no Codeforces
 * 
 * Compilar no terminal: g++ 1490d_permutation_transformation.cpp -std=c++11 -o pertrans
 * Executar: ./pertrans
 */

#include<bits/stdc++.h>
#define MAX 201
using namespace std;

int v[MAX];
int ans[MAX];

void dfs(int inicio, int fim, int nivel)
{
    int meio=0,meio_ind;
    
    for(int i = inicio; i <= fim; i++)
    {
        if(meio < v[i])
        {
            meio = v[i];
            meio_ind = i;
        }
    }
    
    ans[meio_ind] = nivel;
    
    if(meio_ind > inicio)
        dfs(inicio,meio_ind-1,nivel+1);
    
    if(meio_ind < fim)
        dfs(meio_ind+1,fim,nivel+1);

}

int main()
{
    int t;
    int n;
    scanf("%d",&t);
    
    while(t--)
    {
        scanf("%d",&n);
        for(int i = 0; i < n; i++)
            scanf("%d",v+i);
        
        dfs(0,n-1, 0);
        
        for(int i = 0; i < n; i++)
            printf("%d ",ans[i]);
        printf("\n");
        
    }
    return 0;
}
