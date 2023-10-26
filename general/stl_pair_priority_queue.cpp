/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva
 * Prof. Dr. Vinicius R. P. Borges
 *
 * Tópico: Estruturas de Dados, biblioteca STL, Fila de Prioridade com Comparador Customizado (Pairs)
 *    Funcao desse programa: apresentar metodos da classe Priority_Queue da STL
 *
 * Compilar: g++ stl_pair_priority_queue.cpp -std=c++17 -o filapr
 * Executar: ./filapr
 */

#include<bits/stdc++.h>

using namespace std;

typedef pair<int,int> pii;

class comp{
public:
    bool operator()(pii& a, pii&b){
        if(a.first == b.first){
            return a.second < b.second;
        }
        return a.first > b.first;
    };
};

int main()
{
    priority_queue<int,vector<int>,comp> pq; /*fila de prioridade maxima*/

    if(pq.empty())
        printf("Fila customizada vazia\n");

    pq.push(make_pair(10,2));
    pq.push(make_pair(5,9));
    pq.push(make_pair(5,3));
    pq.push(make_pair(7,4));

    printf("Primeiro elemento de pq: %d\n",pq.top());

    pq_max.pop();

    printf("Primeiro elemento (agora) na pq: %d\n",pq.top());

    return 0;
}
