/*
 * Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva 
 * Prof. Dr. Vinicius R. P. Borges
 * 
 * Tópico: Divisão e Conquista, Merge Sort
 * Aula: resolução do problema "Arco e Flecha" da Olimpíada Brasileira de Informática 2016 (OBI 2016) - Fase 2 (https://olimpiada.ic.unicamp.br/pratique/p1/2016/f2/arco/)
 * 
 * POR FAVOR: nao submeta esse código-fonte no sistema Pratique! 
 * 
 * Compilar no terminal: g++ obi2016_arco_flecha.cpp -std=c++11 -o arrow
 * Executar: ./arrow
 */

#include<bits/stdc++.h>
#define MAX 100002
using namespace std;

typedef long long ll;

ll merge(ll v[], ll temp[], int inicio, int meio, int fim)
{
    int i,j,k;
    ll swaps = 0;
    i = inicio;
    j = meio+1;
    k = inicio;
    
    while(i <= meio && j <= fim)
    {
        if(v[i] > v[j])
            temp[k++] = v[i++];
        else
        {
            temp[k++] = v[j++];
            swaps+=meio+1-i;
        }
    }
    
    while(i <= meio)
        temp[k++] = v[i++];
    
    while(j <= fim)
        temp[k++] = v[j++];
    
    for(i = inicio; i <= fim; i++)
        v[i] = temp[i];
    
    return swaps;
}

ll mergeSort(ll v[], ll temp[], int inicio, int fim)
{
    int meio;
    ll swaps  = 0;
    if(inicio < fim)
    {
        meio = (inicio + fim)/2;
        
        swaps += mergeSort(v,temp,inicio,meio);
        
        swaps += mergeSort(v,temp,meio+1,fim);
        
        swaps += merge(v,temp,inicio,meio,fim);
    }
    return swaps;
}

int main()
{
    int N;
    ll v[MAX],temp[MAX];
    ll x,y,d;
    
    scanf("%d",&N);
    
    for(int i = 0; i < N; i++)
    {
        scanf("%lld %lld",&x,&y);
        d = x*x + y*y;
        v[i] = d;
    }
    
    d = mergeSort(v,temp,0,N-1);
    
    printf("%lld\n",d);
    
    return 0;
}
