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

/*Comparador customizado: ordena crescente no first do pair, ordena decrescente no second do pair*/
class comp{
public:
    bool operator()(pii& a, pii& b){
        if(a.first == b.first){
            return a.second < b.second; // se a.second < b.second, faz a troca
        }
        return a.first > b.first;
    };
};

int main()
{
    priority_queue<pii,vector<pii>,comp> pq; /*fila de prioridade maxima*/

    if(pq.empty())
        printf("Fila customizada vazia\n");

    // enfileirar O(log n)
    pq.push(make_pair(10,2));
    pq.push(make_pair(5,9));
    pq.push(make_pair(5,3));
    pq.push(make_pair(7,4));
    pq.push(make_pair(5,7));

    printf("Quantidade de elementos da pq: %d\n", (int) pq.size());

    printf("Primeiro elemento de pq: (%d,%d)\n",pq.top().first,pq.top().second);

    /*Percorrer a fila de prioridade e desenfileirar
    elemento por elemento ate ficar vazia*/
    while(!pq.empty()){
        pii elem = pq.top();
        printf("Elemento a ser desenfileirado: (%d,%d)\n",elem.first,elem.second);  // O(1)
        pq.pop();  // O(log n)
    }

    return 0;
}
