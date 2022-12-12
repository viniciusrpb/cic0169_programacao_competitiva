#include<bits/stdc++.h>

using namespace std;

typedef pair<int,int> pii;

struct Comparator{
    bool operator()(pii a, pii b){
        if(a.second > b.second)
            return true;
        return false;
    }
};

int main(){
    set<int> conj;
    map<int,char> mapping;
    priority_queue<pii,vector<pii>,Comparator> pq;
    
    conj.insert(1);
    conj.insert(5);
    conj.insert(7);
    conj.insert(2);
    
    if(conj.count(5))
        printf("5 estah no conjunto\n");
        
    if(!conj.count(4))
        printf("4 nao estah no conjunto\n");
    
    for(set<int>::iterator is = conj.begin(); is != conj.end(); is++){
        printf("%d\n",*is);
    }
    
    for(int elem : conj){
        printf("%d\n",elem);
    }
    
    printf("\nMapping\n");
    
    mapping[1] = 'a';
    mapping[23] = 'b';
    
    for(auto m : mapping){
        printf("%d %c\n",m.first,m.second);
    }
    
    printf("\nPriority Queue\n");
    
    pq.push({1,2});
    pq.push({3,4});
    pq.push({2,3});
    pq.push({5,0});
    
    while(!pq.empty()){
        printf("f: %d s: %d\n",pq.top().first,pq.top().second);
        pq.pop();
    }
    
    return 0;
}
