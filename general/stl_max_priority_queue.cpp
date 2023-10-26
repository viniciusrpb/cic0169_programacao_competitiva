/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva
 * Prof. Dr. Vinicius R. P. Borges
 *
 * Tópico: Estruturas de Dados, biblioteca STL, Fila de Prioridade Maxima
 *    Funcao desse programa: apresentar metodos da classe Priority_Queue da STL
 *
 * Compilar: g++ stl_max_priority_queue.cpp -std=c++17 -o filapr
 * Executar: ./filapr
 */

#include<bits/stdc++.h>

using namespace std;

int main()
{
    priority_queue<int> pq_max; /*fila de prioridade maxima*/

    if(pq_max.empty())
        printf("Fila pq max vazia\n");

    pq_max.push(1);
    pq_max.push(5);
    pq_max.push(7);
    pq_max.push(3);
    pq_max.push(2);

    printf("Quantidade de elementos da pq_max: %d\n", (int) pq_max.size());

    printf("Primeiro elemento de pq_max: %d\n",pq_max.top());

    /*Percorrer a fila de prioridade e desenfileirar
    elemento por elemento ate ficar vazia*/
    while(!pq_max.empty()){
        int elem = pq_max.top();
        printf("Elemento a ser desenfileirado: %d\n",elem);  // O(1)
        pq_max.pop();  // O(log n)
    }

    return 0;
}
