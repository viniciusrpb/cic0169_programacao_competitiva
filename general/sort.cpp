/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva
 * Prof. Dr. Vinicius R. P. Borges
 *
 * Tópico: Fundamentos de C/C++
 * Esse código-fonte apresenta operacoes de busca sequencial e binaria (lower bound e upper bound) em vetores
 *
 * Compilar no terminal:
 *   $ g++ sort.cpp -std=c++17 -o ordena
 * Executar:
 *   $ ./ordena
*/

#include<bits/stdc++.h>

using namespace std;

typedef pair<int,int> pii;

bool comparaPares(pii a, pii b){
    if(a.second < b.second)
        return true;
    return false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,aux,ans;
    vector<int> v;
    vector<pii> vpairs;
    
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> aux;
        v.push_back(aux);
        vpairs.push_back(make_pair(aux,i));
    }
    
    sort(v.begin(),v.end());
    
    // ordena em relacao ao elemento second do pair
    sort(vpairs.begin(),vpairs.end(),comparaPares);
    

    return 0;
}
