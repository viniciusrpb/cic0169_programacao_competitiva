/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva 
 * Prof. Dr. Vinicius R. P. Borges
 * 
 * Tópico: Estruturas de Dados, biblioteca STL, Fila de Prioridade
 *    Funcao desse programa: apresentar metodos da classe Priority_Queue da STL
 * 
 * Compilar: g++ stl_priority_queue.cpp -std=c++11 -o filapr
 * Executar: ./filapr
 */

#include<bits/stdc++.h>

using namespace std;

int main()
{
    priority_queue<int> pq_max; /*fila de prioridade maxima*/
    
    priority_queue<int,vector<int>,greater<int>> pq_min; /*fila de prioridade minima*/
    
    if(pq_min.empty())
        printf("Fila pq min vazia\n");
    
    pq_max.push(1);
    pq_max.push(5);
    pq_max.push(7);
    
    pq_min.push(4);
    pq_min.push(3);
    pq_min.push(2);
    
    printf("Primeiro elemento de pq_min: %d\n",pq_min.top());
    
    printf("Primeiro elemento de pq_max: %d\n",pq_max.top());
    
    pq_max.pop();
    
    printf("Como ficou pq_max: %d\n",pq_max.top());
    
    return 0;
}
