/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva 
 * Prof. Dr. Vinicius R. P. Borges
 * 
 * Tópico: Divisão e conquista
 * Esse código-fonte está associado à implementação do algoritmo de ordenação Merge Sort.
 * 
 * Compilar no terminal: g++ merge_sort.cpp -std=c++11 -o mgsort
 * Executar: ./mgsort
 */

#include<bits/stdc++.h>

using namespace std;


void merge(int v[], int temp[], int inicio, int meio, int fim)
{
    int i, j, k;
 
    i = inicio; 
    j = meio;
    k = inicio;
    while ((i <= meio - 1) && (j <= fim))
    {
        if (v[i] <= v[j])
            temp[k++] = v[i++];
        else
            temp[k++] = v[j++];
    }
 
    while (i <= meio - 1)
        temp[k++] = v[i++];
 
    while (j <= fim)
        temp[k++] = v[j++];
 
    for (i = inicio; i <= fim; i++)
        v[i] = temp[i];
 
}

void mergeSort(int v[], int temp[], int inicio, int fim)
{
    int meio;
    if (inicio < fim)
    {
        meio = (inicio+fim) / 2;
 
        mergeSort(v, temp, inicio, meio);
        mergeSort(v, temp, meio + 1, fim);
 
        merge(v, temp, inicio, meio + 1, fim);
    }
}


int main()
{
    int N = 7;
    int v[N] = {6,5,-1,7,2,12,-3};
    int temp[N];
    
    mergeSort(v,temp,0,N-1);
    
    for(int i =0; i < N;i++)
        printf("%d ",v[i]);
    printf("\n");
    
    return 0;
}
