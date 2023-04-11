/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva
 * Prof. Dr. Vinicius R. P. Borges
 *
 * Tópico: Fundamentos de C/C++
 * Esse código-fonte apresenta operacoes de entrada e saida em objetos vector da STL
 *
 * Compilar no terminal:
 *   $ g++ vectors_stl.cpp -std=c++17 -o vct
 * Executar:
 *   $ ./vct
*/

#include<bits/stdc++.h>
#define MAX 500

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,aux;
    vector<int> v;
    vector<int> v2(10,0); /* cria um vector com 10 elementos, todos iguais a zero */
    vector<int> v3 = {5,8,4,2};

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> aux;
        v.push_back(aux);
    }

    cout << "Primeiro Vetor lido: " << "\n";
    //for(int i = 0; i < n; i++){
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << "\n";

    cout << "Segundo Vetor lido: " << "\n";
    for(int i = 0; i < v2.size(); i++){
        cout << v2[i] << " ";
    }
    cout << "\n";

    cout << "Terceiro Vetor lido: " << "\n";
    for(int i = 0; i < v3.size(); i++){
        cout << v3[i] << " ";
    }
    cout << "\n";

    return 0;
}
