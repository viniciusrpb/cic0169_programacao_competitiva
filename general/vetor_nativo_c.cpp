/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva
 * Prof. Dr. Vinicius R. P. Borges
 *
 * Tópico: Fundamentos de C/C++
 * Esse código-fonte apresenta operacoes de entrada e saida em um vetor nativo da linguagem C
 *
 * Compilar no terminal:
 *   $ g++ vetor_nativo_c.cpp -std=c++17 -o vetor
 * Executar:
 *   $ ./vetor
*/

#include<bits/stdc++.h>
#define MAX 500

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    int v[MAX];

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    cout << "Vetor lido: " << "\n";
    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
    cout << "\n";

    return 0;
}
