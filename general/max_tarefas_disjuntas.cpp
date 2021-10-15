/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva 
 * Prof. Dr. Vinicius R. P. Borges
 * 
 * Tópico: Algoritmos Gulosos
 * Esse código-fonte está associado à implementação do problema de maximização de tarefas (intervalos ou eventos) disjuntas
 *      - Sejam n tarefas, cada tarefa i descrita pelo seu horário de início hi e seu horário de término ht.
 *      - Devemos maximizar a quantidade de tarefas executadas, de modo que uma única tarefa seja executada por vez.
 * 
 * Compilar no terminal: g++ max_tarefas_disjuntas.cpp -std=c++11 -o maxtardis
 * Executar: ./maxtardis
*/


#include<bits/stdc++.h>

using namespace std;

typedef pair<int,int> pii;

bool ordena_segundo(pii a, pii b)
{
    return a.second < b.second;
}

int solve(vector<pii> t)
{
    int ans;
    
    sort(t.begin(),t.end(),ordena_segundo);
    
    int termino_evento_anterior = t[0].second;
    ans = 1;
    
    for(int i = 1; i < t.size(); i++)
    {
        int inicio_prox_evento = t[i].first;
        int final_prox_evento = t[i].second;
        
        // se o evento i comeca depois do termino do ultimo evento
        if(inicio_prox_evento > termino_evento_anterior)
        {
            termino_evento_anterior = final_prox_evento;
            ans++;
        }
    }
    return ans;
}

int main()
{
    int n,hi,ht;
    vector<pii> tarefas;
    
    scanf("%d",&n);
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d %d",&hi,&ht);
        tarefas.push_back(make_pair(hi,ht));
    }
    
    printf("%d\n",solve(tarefas));
    
    return 0;
}
