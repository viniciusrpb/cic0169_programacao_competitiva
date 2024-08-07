/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva 
 * Prof. Dr. Vinicius R. P. Borges
 * 
 * Tópico: Divisão e conquista
 * Esse código-fonte está associado à implementação do algoritmo de ordenação Merge Sort, com contagem de inversoes.
 * 
 * Compilar no terminal: g++ merge_sort_enhanced.cpp -std=c++11 -o mgsort
 * Executar: ./mgsort
 */

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll merge(int v[], int temp[], int inicio, int meio, int fim){
    int i, j, k;
    ll swaps;
 
    i = inicio; 
    j = meio+1;
    k = inicio;
    
    swaps = 0;
    
    while (i <= meio && j <= fim){
        if (v[i] <= v[j])
            temp[k++] = v[i++];
        else
        {
            temp[k++] = v[j++];
            swaps = swaps + (meio-i+1);
        }
    }
 
    while (i <= meio)
        temp[k++] = v[i++];
 
    while (j <= fim)
        temp[k++] = v[j++];
 
    for (i = inicio; i <= fim; i++)
        v[i] = temp[i];
    
    return swaps;
 
}

ll mergeSort(int v[], int temp[], int inicio, int fim){
    int meio;
    ll swaps=0;
    if (inicio < fim){
        meio = (inicio+fim) / 2;
 
        swaps = swaps+mergeSort(v, temp, inicio, meio);
        swaps = swaps + mergeSort(v, temp, meio + 1, fim);
 
        swaps = swaps + merge(v, temp, inicio, meio, fim);
    }
    return swaps;
}


int main()
{
    int N = 7;
    int v[N] = {6,5,-1,7,2,12,-3};
    int temp[N];
    
    ll ans = mergeSort(v,temp,0,N-1);
    
    for(int i =0; i < N;i++)
        printf("%d ",v[i]);
    printf("\nInversoes: %lld\n",ans);
    
    
    return 0;
}
