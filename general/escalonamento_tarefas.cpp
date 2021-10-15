/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva 
 * Prof. Dr. Vinicius R. P. Borges
 * 
 * Tópico: Algoritmos Gulosos
 * Esse código-fonte está associado à implementação do problema de escalonamento de tarefas:
 *      - Sejam n tarefas, cada tarefa i descrita pelo sua duracao x e seu deadline d.
 *      - A finalização de execução de uma tarefa gera uma pontuação igual a d-x desde o inicio da execução de todas as tarefas.
 *      - Devemos escolher uma ordem de execução dessas tarefas, de modo que devemos maximizar a pontuacao total.
 * 
 * Compilar no terminal: g++ escalonamento_tarefas.cpp -std=c++11 -o esctar
 * Executar: ./esctar
*/

#include<bits/stdc++.h>

using namespace std;

typedef pair<int,int> pii;

int solve(vector<pii> tarefas)
{
    int score=0,t = 0;
    
    sort(tarefas.begin(),tarefas.end());
    
    for(int i = 0; i < tarefas.size(); i++)
    {
        score = score + tarefas[i].second - (tarefas[i].first+t);
        t = t + tarefas[i].first;
    }
    return score;
}

int main()
{
    int n,duracao,deadline;
    vector<pii> tarefas;
    
    scanf("%d",&n);
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d %d",&duracao,&deadline);
        tarefas.push_back(make_pair(duracao,deadline));
    }
    
    printf("%d\n",solve(tarefas));
    
    return 0;
}
