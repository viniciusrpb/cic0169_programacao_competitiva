/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva 
 * Prof. Dr. Vinicius R. P. Borges
 * 
 * Tópico: Operadores bitwise e bitmasks
 * Aula: Resolucao do problema 
 *                     CodeTON Round 6 - B. Friendly Arrays (https://codeforces.com/contest/1870/problem/B)
 * 
 * POR FAVOR: nao submeter esse código-fonte diretamente no Codeforces
 * 
 * Compilar no terminal: g++ ton6b_friendly_arrays.cpp -std=c++17 -o friends
 * Executar: ./friends
 * Complexidade: O(t*(n+m)) no tempo
 */

#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b,n,m,t,min_x,b_or,max_x,xor_a;
    
    scanf("%d",&t);
    
    while(t--){
        scanf("%d %d",&n,&m);
        
        vector<int> va;
        
        scanf("%d",&xor_a);
        va.push_back(xor_a);
        
        for(int i = 1; i < n; i++){
            scanf("%d",&a);
            xor_a = xor_a^a;
            va.push_back(a);
        }
        
        scanf("%d",&b_or);
        for(int i = 1; i < m; i++){
            scanf("%d",&b);
            b_or = b_or | b;
        }
        
        int xor_ab = 0;
        for(int i = 0; i < n; i++){
            xor_ab = xor_ab^(b_or | va[i]);
        }
        
        if(n % 2 == 0){
            
            max_x = xor_a;
            min_x = xor_ab;
        }else{
            
            max_x = xor_ab;
            min_x = xor_a;
        }
        
        printf("%d %d\n",min_x,max_x);
        
    }
    return 0;
}
