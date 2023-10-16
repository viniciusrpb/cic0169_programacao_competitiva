#include<bits/stdc++.h>

using namespace std;

typedef tuple<int,int,int> tii;

typedef pair<int,int> pii;

class cmpi{
    public:
        // a eh o proximo, b eh o atual
        bool operator()(tii&a , tii&b){
            int x,y,z,r,s,t;
            tie(x,y,z) = a;
            tie(r,s,t) = b;

            if(x==r)
                return y > s;
            else
                return x < r;
        }
};

class cmpe{
    public:
        bool operator()(tii&a , tii&b){
            int x,y,z,r,s,t;
            tie(x,y,z) = a;
            tie(r,s,t) = b;

            if(x==r)
                return y < s;
            else
                return x > r;
        }
};

bool comp(pii&a, pii&b){
    if(a.first == b.first)
        return a.second < b.second;
    return a.first > b.first;
};

int main(){
    int n,num,w,aux,row;
    char passengers[400001];
    vector<pii> v = {{4,9},{5,2},{4,6}};
    priority_queue<tii,vector<tii>,cmpi> introvertido;
    priority_queue<tii,vector<tii>,cmpe> extrovertido;

    sort(v.begin(),v.end(),comp);

    for(int i = 0; i < v.size();i++){
        printf("(%d,%d)\n",v[i].first,v[i].second);
    }

    scanf("%d",&n);

    vector<int> ans;

    for(int i = 0; i < n; i++){
        scanf("%d",&aux);
        introvertido.push({2,aux,i+1});
        extrovertido.push({2,aux,i+1});
    }

    getchar();
    scanf("%s",passengers);

    for(int i = 0; i < 2*n; i++){
        if(passengers[i]=='0'){
            tie(num,w,row) = introvertido.top();
            printf("int: %d %d %d\n",num,w,row);
            introvertido.pop();
        }else{
            tie(num,w,row) = extrovertido.top();
            printf("ext: %d %d %d\n",num,w,row);
            extrovertido.pop();
        }
        printf("%d ",row);
        if(num ==2){
            introvertido.push({num-1,w,row});
            extrovertido.push({num-1,w,row});
        }
    }
    printf("\n");

    return 0;
}
