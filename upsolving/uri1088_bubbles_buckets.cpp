/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva 
 * Prof. Dr. Vinicius R. P. Borges
 * 
 * Tópico: Divisão e conquista, merge sort
 * Aula: resolução do problema "Bubbles and Buckets" (https://www.urionlinejudge.com.br/judge/en/problems/view/1088)
 * 
 * POR FAVOR: nao submeta esse código-fonte no URI! 
 * 
 * Compilar no terminal: g++ uri1088_bubbles_buckets.cpp -std=c++11 -o bolhas
 * Executar: ./bolhas
 */

#include<bits/stdc++.h>

using namespace std;

int merge(int v[], int temp[], int inicio, int meio, int fim)
{
    int i, j, k,swaps;
 
    i = inicio; 
    j = meio;
    k = inicio;
    
    swaps = 0;
    
    while ((i <= meio - 1) && (j <= fim))
    {
        if (v[i] <= v[j])
            temp[k++] = v[i++];
        else
        {
            temp[k++] = v[j++];
            swaps = swaps + (meio-i);
        }
    }
 
    while (i <= meio - 1)
        temp[k++] = v[i++];
 
    while (j <= fim)
        temp[k++] = v[j++];
 
    for (i = inicio; i <= fim; i++)
        v[i] = temp[i];
    
    return swaps;
 
}

int mergeSort(int v[], int temp[], int inicio, int fim)
{
    int meio,swaps=0;
    if (inicio < fim)
    {
        meio = (inicio+fim) / 2;
 
        swaps = swaps+mergeSort(v, temp, inicio, meio);
        swaps = swaps + mergeSort(v, temp, meio + 1, fim);
 
        swaps = swaps + merge(v, temp, inicio, meio + 1, fim);
    }
    return swaps;
}

int main()
{
    int N;
    int v[100005];
    int temp[100005];
    
    scanf("%d",&N);
    
    while(N)
    {
        for(int i = 0; i < N; i++){
            scanf("%d",v+i);
        }
        
        int ans = mergeSort(v,temp,0,N-1);
        
        if(ans%2==0)
            printf("Carlos\n");
        else
            printf("Marcelo\n");
        scanf("%d",&N);
    }
    
    return 0;
}
