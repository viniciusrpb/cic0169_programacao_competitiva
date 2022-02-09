/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva 
 * Prof. Dr. Vinicius R. P. Borges
 * 
 * Tópico: Fundamentos de Linguagem C/C++
 * Aula: Resolucao do problema 
 *                     Codeforces Round #489 (Div. 2) - A. Nastya and an Array (https://codeforces.com/contest/992/problem/A)
 * 
 * POR FAVOR: nao submeter esse código-fonte diretamente no Codeforces
 * 
 * Compilar no terminal: g++ nastya_array.cpp -std=c++11 -o nastya
 * Executar: ./nastya
 */

#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,a,ans;
    vector<int> v;
    
    scanf("%d",&n);
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&a);
        v.push_back(a);
    }
    
    sort(v.begin(),v.end());
    
    ans = 0;
    
    if(v[0])
        ans++;
    
    for(int i = 1; i < v.size(); i++)
    {
        if(v[i] && v[i-1] != v[i])
        {
            ans++;
        }
    }
    
    printf("%d\n",ans);
    
    return 0;
}
