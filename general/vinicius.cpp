/*
 * No Terminal do Linux, digite:
 * compilar:
 *     g++ vinicius.cpp -std=c++17 -o vinbin
 * executar
 *     ./vinbin
 * */

#include<bits/stdc++.h>

using namespace std;

// x e y sao os parametros da funcao
// soma eh o nome da funcao
// a funcao soma retorna um valor inteiro
int soma(int x, int y){
    return x+y;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a,b,s,n,m;
    char c;
    float r;
    vector<int> vetor;

    /*
    scanf("%f",&r);
    scanf("%c",&c);

    scanf("%d",&a);
    scanf("%d",&b);
    s=soma(a,b);
    printf("%d\n",s);*/

    cin >> n;

    s = 0;

    for(int i = 0; i < n; i++){ //i++ => i+=1 => i=i+1
        cin >> a;//scanf("%d",&a);
        vetor.push_back(a);
        s+=a;
    }

    for(int i = 0; i < vetor.size();i++){
        cout << vetor[i] << " ";
    }

    cout << s << " " << n << "\n";

    if(s > 0){
        cout << "Verdadeiro" << "\n";
    }else{
        if(s == 0){
            cout << "Zero" << "\n";
        }else{
            cout << "False" << "\n";
        }
    }
    //printf("qualquer coisa %d ao mesmo tempo %d\n",s,n);

    return 0;
}
