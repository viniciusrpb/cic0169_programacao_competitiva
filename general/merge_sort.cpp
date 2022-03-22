/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva 
 * Prof. Dr. Vinicius R. P. Borges
 * 
 * Tópico: Divisão e conquista
 * Esse código-fonte está associado à implementação do algoritmo de ordenação Merge Sort. Ordenação crescente.
 * 
 * Compilar no terminal: g++ merge_sort.cpp -std=c++11 -o mgsort
 * Executar: ./mgsort
 */

#include<bits/stdc++.h>
#define MAX 10002

using namespace std;

void merge(int v[], int temp[], int inicio, int meio, int fim)
{
    int i,j,k;
    
    i = inicio;
    j = meio+1;
    k = inicio;
    
    while(i <= meio && j <= fim)
    {
        if(v[i] <= v[j])
            temp[k++] = v[i++];
        else
            temp[k++] = v[j++];
    }
    
    while(i <= meio)
        temp[k++] = v[i++];
    
    while(j <= fim)
        temp[k++] = v[j++];
    
    for(i = inicio; i <= fim; i++)
        v[i] = temp[i];
}

void mergeSort(int v[], int temp[], int inicio, int fim)
{
    int meio;
    if(inicio < fim)
    {
        meio = (inicio + fim)/2;
        /*subvetor da esquerda*/
        mergeSort(v,temp,inicio,meio);
        
        /*subvetor da direita*/
        mergeSort(v,temp,meio+1,fim);
        
        /*merge: uniao*/
        merge(v,temp,inicio,meio,fim);
    }
}

int main()
{
    int N;
    int v[MAX];
    int temp[MAX];
    
    scanf("%d",&N);
    
    for(int i = 0; i < N; i++)
        scanf("%d",v+i);
    
    mergeSort(v, temp, 0, N-1);
    
    for(int i = 0; i < N; i++)
        printf("%d ",v[i]);
    printf("\n");
    
    return 0;
}
