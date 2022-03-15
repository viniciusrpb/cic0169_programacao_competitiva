/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva 
 * Prof. Dr. Vinicius R. P. Borges
 * 
 * Tópico: Busca completa
 * Esse código-fonte gera todos os subvetores de um vetor informado na entrada
 * 
 * Compilar no terminal: g++ busca_completa_subvetores.cpp -std=c++11 -o bc
 * Executar: ./bc
 */

#include<bits/stdc++.h>

using namespace std;

vector<int> a;
int n; /* n tem que ser pequeno <= 20,30 */
vector<vector<int>> answer;

// versao raiz: nem verificamos estados jah foram criados anteriormente...

void dfs(int i, vector<int> subvector)
{
    // caso base
    if(i >= n)
    {
        answer.push_back(subvector);
        return ;
    }
    
    // termo geral: realiza as novas chamadas
    
    // nao pega o elemento na posicao i
    dfs(i+1,subvector);
    
    // pega o elemento na posicao i
    subvector.push_back(a[i]);
    
    dfs(i+1,subvector);

}

int main()
{
    
    vector<int> v;
    
    scanf("%d",&n);
    
    for(int i = 0; i < n; i++)
    {
        int aux;
        scanf("%d",&aux);
        a.push_back(aux);
    }
    
    dfs(0,v);
    
    for(int i = 0; i < answer.size(); i++)
    {
        printf("[");
        for(int elem : answer[i])
        {
            printf("%d ",elem);
        }
        printf("]\n");
    }
    
    return 0;
}
