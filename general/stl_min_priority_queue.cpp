/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva
 * Prof. Dr. Vinicius R. P. Borges
 *
 * Tópico: Estruturas de Dados, biblioteca STL, Fila de Prioridade Mínima
 *    Funcao desse programa: apresentar metodos da classe Priority_Queue da STL
 *
 * Compilar: g++ stl_min_priority_queue.cpp -std=c++17 -o filapr
 * Executar: ./filapr
 */

#include<bits/stdc++.h>

using namespace std;

int main(){

    priority_queue<int,vector<int>,greater<int>> pq_min; /*fila de prioridade minima*/

    if(pq_min.empty())
        printf("Fila pq min vazia\n");

    pq_min.push(4);
    pq_min.push(3);
    pq_min.push(2);
    pq_min.push(9);
    pq_min.push(1);

    printf("Quantidade de elementos da pq min: %d\n", (int) pq_min.size());

    printf("Primeiro elemento de pq min: %d\n",pq_min.top());

    /*Percorrer a fila de prioridade e desenfileirar
    elemento por elemento ate ficar vazia*/
    while(!pq.empty()){
        pii elem = pq.top();
        printf("Elemento a ser desenfileirado: (%d,%d)\n",elem.first,elem.second);  // O(1)
        pq.pop();  // O(log n)
    }

    return 0;
}
