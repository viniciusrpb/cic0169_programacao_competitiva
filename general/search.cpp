/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva
 * Prof. Dr. Vinicius R. P. Borges
 *
 * Tópico: Fundamentos de C/C++
 * Esse código-fonte apresenta operacoes de busca sequencial e binaria (lower bound e upper bound) em vetores
 *
 * Compilar no terminal:
 *   $ g++ search.cpp -std=c++17 -o ss
 * Executar:
 *   $ ./ss
*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,aux,key,ans,lwb,upb;
    vector<int> v;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> aux;
        v.push_back(aux);
    }

    cout << "Busca Sequencial O(n)\n";
    cout << "Digite um numero para buscar no vetor: "; 
    
    cin >> key;
    
    ans = -1;
    for(int i = 0; i < n; i++){
        if(v[i] == key){
            ans = i;
            break;
        }
    }
    
    if(ans >= 0)
        cout << key << " encontrado na posicao " << ans << "\n";
    else
        cout << key << " nao foi encontrado\n";
        
    sort(v.begin(),v.end());
    
    cout << "Busca Binaria via Lower Bound e Upper Bound O(n log n)\n";
    
    lwb = lower_bound(v.begin(),v.end(),key) - v.begin();
    
    upb = upper_bound(v.begin(),v.end(),key) - v.begin();
    
    cout << "Lower bound: " << lwb << "\n";   
    
    cout << "Upper bound: " << upb << "\n";

    return 0;
}
