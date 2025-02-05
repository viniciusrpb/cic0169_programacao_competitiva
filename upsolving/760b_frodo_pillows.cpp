/* Universidade de Brasília
 * Departamento de Ciência da Computação
 * CIC0169 - Programação Competitiva
 * Prof. Dr. Vinicius R. P. Borges
 *
 * Tópico: Busca Binária
 * Aula: Resolucao do problema
 *                     Codeforces Round #393 (Div. 2) - B. Frodo and pillows (https://codeforces.com/problemset/problem/760/B)
 *
 * POR FAVOR: nao submeter esse código-fonte diretamente no Codeforces
 *
 * Compilar no terminal: g++ 760b_frodo_pillows.cpp -std=c++17 -o frodo
 * Executar: ./frodo
 * Complexidade: O(log m) no tempo
 */

int main(){
    int k,l,r,mid,ans;

    scanf("%d %d %d",&n,&m,&k);

    l = 1; // qtde minima de travesseiros do Frodo
    r = m; // qtde maxima para o meu chute
    ans = 1;

    while(l <= r){
        // chutar a qtde de travesseiros do Frodo
        mid = (l+r)/2;
        if(check(mid,k) == true){
            ans = mid; // guardar a resposta valida
            l = mid+1; // tentar maximizar a resposta
        }
        else{
            r = mid-1;
        }
    }

    printf("%d\n",ans);
    return 0;
}

