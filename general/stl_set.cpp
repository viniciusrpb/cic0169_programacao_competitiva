/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva
 * Prof. Dr. Vinicius R. P. Borges
 *
 * Tópico: Estruturas de Dados, biblioteca STL, Sets
 *    Funcao desse programa: apresentar metodos da classe Set da STL
 *
 * Compilar: g++ stl_sets.cpp -std=c++17 -o sets
 * Executar: ./sets
 */

#include<bits/stdc++.h>

using namespace std;

int main(){

    int n,aux,q;
    scanf("%d %d",&n,&q);
    set<int> conj; // conjunto matematico

    for(int i = 0; i < n; i++){
        scanf("%d",&aux);
        conj.insert(aux); // insercao: O(log n)
    }

    while(q--){
        scanf("%d",&aux);
        if(conj.count(aux)) // consulta: O(log n)
            printf("Existe %d\n",aux);
        else
            printf("Nao existe\n");
    }

    printf("Tamanho: %d\n",(int) conj.size());

    conj.erase(4);  // remocao : O(log n)

    printf("Tamanho apos remocao: %d\n",(int) conj.size());

    /* Como percorrer um set? tres maneiras distintas a seguir: */

    for(set<int>::iterator pset = conj.begin(); pset != conj.end(); pset++){
        printf("%d ",*pset);
    }
    printf("\n");

    for(auto& elem : conj){
        printf("%d ",*elem);
    }
    printf("\n");

    for(int elem : conj){
        printf("%d ",*elem);
    }
    printf("\n");


    return 0;
}
