/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva 
 * Prof. Dr. Vinicius R. P. Borges
 * 
 * Tópico: Estruturas de Dados, biblioteca STL, Fila
 *    Funcao desse programa: apresentar metodos da classe Queue da STL
 * 
 * Compilar: g++ stl_queue.cpp -std=c++17 -o fila
 * Executar: ./fila
 */

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_qwith_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    queue<int> fila;
    
    /* O(1) verifica se a fila esta vazia ou nao */
    
    if(fila.empty()){
        cout << "Fila vazia!\n";
    }
    
    /* O(1) push: enfileirar => insercao no final da fila */
    fila.push(5);
    fila.push(6);
    fila.push(1);
    fila.push(2);

    /* O(1) size: retorna a quantidade de elementos da fila */
    cout << "Fila contem " << fila.size() << " elementos\n";

    /* O(1) front: retorna o elemento do inicio da fila -- sem remove-lo */
    int elemRemovido = fila.front();

    /* O(1) pop: desenfileirar => remover o elemento do inicio da fila -- sem retorna-lo */
    fila.pop();

    /* O(n) : esvaziando completamente a fila */
    while(!fila.empty()){ // while(fila.size())
        int elemRemovido = fila.front();
        cout << elemRemovido << "\n";
        fila.pop();
    }
    
    return 0;
}
