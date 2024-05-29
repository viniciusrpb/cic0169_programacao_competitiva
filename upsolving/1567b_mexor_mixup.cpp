/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva 
 * Prof. Dr. Vinicius R. P. Borges
 * 
 * Tópico: Operadores bitwise e bitmasks
 * Aula: Resolucao do problema 
 *                     Codeforces Round #742 (Div. 2) - B. MEXor Mixup (https://codeforces.com/problemset/problem/1567/B)
 * 
 * POR FAVOR: nao submeter esse código-fonte diretamente no Codeforces
 * 
 * Compilar no terminal: g++ 1567b_mexor_mixup.cpp -std=c++17 -o cf_mexor
 * Executar: ./cf_mexor
 * Complexidade: O(n+t) no tempo
 */

#include<bits/stdc++.h>

using namespace std;

int main(){
    int t,a,b,ans;
    
    scanf("%d",&t);
    
    vector<int> chor(300001,0);
    for(int i = 1; i <= 300000; i++)
        chor[i] = chor[i-1] ^ i;
    
    while(t--){
        
        scanf("%d %d",&a,&b);
        
        if(chor[a-1] == b){
            ans = a;
        }else{
            if((chor[a-1]^b) == a)
                ans = a+2;
            else
                ans = a+1;
        }
        printf("%d\n",ans);
    }
    return 0;
}
