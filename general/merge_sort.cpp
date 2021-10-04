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

void merge(vector<int>& v, int inicio, int meio, int fim)
{
    vector<int> aux;
    int j,k,n;
    bool fim_p1=false,fim_p2=false;
    
    n = fim-inicio+1;
    
    j = inicio;
    
    k = meio+1;
    
    for(int i = 0; i < n; i++)
    {
        if(!fim_p1 && !fim_p2)
        {
            if(v[j] < v[k])
                aux.push_back(v[j++]);
            else
                aux.push_back(v[k++]);
            
            if(j > meio)
                fim_p1 = true;
            if(k > fim)
                fim_p2 = true;
        }
        else
        {
            if(!fim_p1)
                aux.push_back(v[j++]);
            else
                aux.push_back(v[k++]);
        }
    }
    
    for(int p = 0, q = inicio; p < n; p++,q++)
    {
        v[q] = aux[p];
    }
}

void mergeSort(vector<int>& v, int inicio, int fim)
{
    int meio;
    if(inicio < fim)
    {
        meio = (inicio+fim)/2;
        mergeSort(v, inicio, meio);
        mergeSort(v, meio+1, fim);
        merge(v,inicio,meio,fim);
    }
}

int main()
{
    vector<int> vetor = {6,5,-1,7,2,12};
    int N = vetor.size();
    
    mergeSort(vetor,0,N-1);
    
    for(int i =0; i < N;i++)
        printf("%d ",vetor[i]);
    printf("\n");
    
    return 0;
}
