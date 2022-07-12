/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva 
 * Prof. Dr. Vinicius R. P. Borges
 * 
 * Tópico: Operadores bitwise e bitmasks
 * Aula: Resolucao do problema 
 *                     Codeforces Round #306 (Div. 2) - B. Preparing Olympiad (https://codeforces.com/contest/550/problem/B)
 * 
 * POR FAVOR: nao submeter esse código-fonte diretamente no Codeforces
 * 
 * Compilar no terminal: g++ 550b_preparing_olympiad.cpp -std=c++11 -o olimp
 * Executar: ./olimp
 */

#include<bits/stdc++.h>
 
using namespace std;
 
int n,l,r,x;
vector<int> problems;
 
bool isSet(int pos, int number)
{
    int pot2 = (1<<pos);
    if(number & pot2)
        return true;
    else
        return false;
}
 
int addElement(int pos, int number)
{
    int pot2 = (1<<pos);
    return (number | pot2);
}
 
// O(1)
int LSB(int number)
{
    int pos=32;
    while(number)
    {
        number = number << 1;
        pos--;
    }
    return pos;
}
 
int LSB2(int number)
{
    return log2(number & -number);
}
 
// 
int MSB(int number)
{
    int pos = 0;
    while(number > 1)
    {
        number = (number >> 1);
        pos++;
    }
    return pos;
}
 
int bitmask2dec(int bitmask, int *menor, int *maior)
{
    int ans = 0;
    
    for(int i = 0; i < n; i++)
    {
        if(isSet(i,bitmask))
        {
            ans = ans+problems[i];
            *menor = min(*menor,problems[i]);
            *maior = max(*maior,problems[i]);
        }
    }
    return ans;
}
 
int busca_completa(int c, int bitmask)
{
    if(c < 0)
    {
        int menor=1e9,maior=-1e9;
        if(bitmask < 1)
            return 0;
        
        //int dif = abs(problems[MSB(bitmask)]-problems[LSB(bitmask)]);
        
        int soma = bitmask2dec(bitmask,&menor,&maior);
        int dif = maior-menor;
        
        if(soma >= l and soma <= r and dif >= x)
            return 1;
        else
            return 0;
    }
    
    int pega = busca_completa(c-1,addElement(c,bitmask));
    int nao_pega = busca_completa(c-1,bitmask);
    
    return pega+nao_pega;
}
 
int main()
{
    int c;
    
    scanf("%d %d %d %d",&n,&l,&r,&x);
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&c);
        problems.push_back(c);
    }
    
    //sort(problems.begin(),problems.end());
    
    printf("%d\n",busca_completa(n-1,0));
    
    return 0;
}
