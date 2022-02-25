/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva 
 * Prof. Dr. Vinicius R. P. Borges
 * 
 * Tópico: Two Pointers
 * Objetivo: Código-fonte que o resolve o problema do sub-array contíguo de soma máxima
 *           utilizando o algoritmo de Kadane versão Two Pointers
 * 
 * Compilar: g++ kadane_two_pointers.cpp -std=c++11 -o enadak
 * Executar: ./enadak
 *  
 * Complexidade: O(N)
 * 
 */

#include<bits/stdc++.h>

using namespace std;

int kadane(vector<int> array, int *inicio, int *fim)
{
    int s,somamax,somatemp;
    
    s = 0;
    *inicio = 0;
    *fim = 0;
    
    somamax = -1e9;
    somatemp = 0;
    
    for(int i = 0; i < array.size(); i++)
    {
        somatemp = somatemp + array[i];

        if(somatemp > somamax)
        {
            somamax = somatemp;
            *inicio = s;
            *fim = i;
        }
        
        if(somatemp < 0)
        {
            somatemp = 0;
            s = i+1;
        }
    }
    
    return somamax;
}

int main()
{
    int n,aux,inicio,fim,sum;

    vector<int> array;
    
    scanf("%d",&n);
    
    for(int i =0; i < n; i++)
    {
        scanf("%d",&aux);
        array.push_back(aux);
    }

    sum = kadane(array,&inicio,&fim);

    printf("[%d,%d] = %d\n",inicio,fim,sum);
    return 0;
}
