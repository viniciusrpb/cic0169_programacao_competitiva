/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva 
 * Prof. Dr. Vinicius R. P. Borges
 * 
 * Tópico: Estruturas de Dados
 * Aula: Resolucao do problema 
 *                     Beecrowd 2065 - Fila de Supermercado (https://www.beecrowd.com.br/judge/en/problems/view/2065)
 * 
 * POR FAVOR: nao submeter esse código-fonte diretamente no Codeforces
 * 
 * Compilar no terminal: g++ beecrowd_2065.cpp -std=c++11 -o filasup
 * Executar: ./filasup
 */

#include<bits/stdc++.h>

using namespace std;

typedef pair<int,int> pii;

int main()
{
    int total,n,m,aux,tempo_atendimento,costumer;
    queue<int> clients;
    priority_queue<pii,vector<pii>,greater<pii>> cashiers;
    vector<int> tempo_caixa;
    
    scanf("%d %d",&n,&m);
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&aux);
        tempo_caixa.push_back(aux);
        cashiers.push(make_pair(0,i));
    }
    
    for(int i = 0; i < m; i++)
    {
        scanf("%d",&aux);
        clients.push(aux);
    }
    
    total = 0;
    
    while(!clients.empty())
    {
        // tirei o cliente no inicio da fila
        costumer = clients.front();
        clients.pop();
        
        // o caixa que ira atende-lo
        // cashier.first: momento (linha do tempo) em que o caixa cashier.second fica livre. cashier.second é o identificador do caixa
        pii cashier = cashiers.top();
        cashiers.pop();
        
        tempo_atendimento = costumer*tempo_caixa[cashier.second];
        
        total = max(total,cashier.first + tempo_atendimento);
        
        cashiers.push(make_pair(cashier.first + tempo_atendimento,cashier.second));        
    }
    
    printf("%d\n",total);
    
    return 0;
}
