/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva
 * Prof. Dr. Vinicius R. P. Borges
 *
 * Tópico: Fundamentos de C/C++
 * Esse código-fonte apresenta operacoes com o tipos PAIR da classe STL
 *
 * Compilar no terminal:
 *   $ g++ pairs.cpp -std=c++17 -o pares
 * Executar:
 *   $ ./pares
*/

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

typedef pair<int,ll> pil;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,f,s;
    pair<int,double> parIntD;
    vector<pil> v;

    parIntD = make_pair(4,6.5);
    cout << parIntD.first << " " << parIntD.second << "\n";

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> f >> s;
        v.push_back(make_pair(f,s));
    }

    cout << "Vetor de pairs lido: " << "\n";
    for(int i = 0; i < v.size(); i++){
        cout << v[i].first << " " << v[i].second << "\n";
    }

    return 0;
}
