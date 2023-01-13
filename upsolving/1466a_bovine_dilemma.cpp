/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva 
 * Prof. Dr. Vinicius R. P. Borges
 * 
 * Tópico: Estruturas de Dados
 * Aula: Resolucao do problema 
 *                     Codeforces Good Bye 2020 - A. Bovine Dilemma (https://codeforces.com/contest/1466/problem/A)
 * 
 * POR FAVOR: nao submeter esse código-fonte diretamente no Codeforces
 * 
 * Compilar no terminal: g++ 1466a_bovine_dilemma.cpp -std=c++17 -o boi
 * Executar: ./boi
 * 
 * Complexidade: O(t*(n + n*n))
 */

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,t,a;
    
    scanf("%d",&t);
    
    while(t--){
        scanf("%d",&n);
        
        vector<int> trees;
        set<int> triangles;
        
        for(int i = 0; i < n; i++){
            scanf("%d",&a);
            trees.push_back(a);
        }
        
        for(int i = 0; i < trees.size(); i++){
            for(int j = 0; j < i; j++){
                triangles.insert(trees[j] - trees[i]);
            }
        }
        printf("%d\n",(int) triangles.size());
    }
    return 0;
}
