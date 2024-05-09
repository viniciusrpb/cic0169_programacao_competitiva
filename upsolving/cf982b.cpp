#include<bits/stdc++.h>

using namespace std;

typedef tuple<int,int,int> tii;

struct maior_tii{
    bool operator()(tii a, tii b){
        if(get<0>(a) == get<0>(b))
            return get<1>(a) > get<1>(b);
        else
            return get<0>(a) > get<0>(b);
    }
};

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,ocupados,id,w;
    string passageiros;
    // fila de prioridade minima
    priority_queue<tii,vector<tii>,maior_tii> introvertidos;
    priority_queue<tii> extrovertidos;

    cin >> n;

    for(int i = 0; i < n; i++){ // O(n*(logn + logn))
        cin >> w;
        introvertidos.push({0,w,i+1});
        extrovertidos.push({0,w,i+1});
    }

    cin >> passageiros;

    for(int i = 0; i < 2*n; i++){ // O(nlogn) + O(n2logn)
        if(passageiros[i] == '0'){ // fila de passageiros
            tie(ocupados,w,id) = introvertidos.top();
            introvertidos.pop();
        }else{
            tie(ocupados,w,id) = extrovertidos.top();
            extrovertidos.pop();
        }
        cout << id << " ";
    }
    cout << "\n";

    return 0;
}
