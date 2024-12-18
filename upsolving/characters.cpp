#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,t,q,op,l,pos,r,ans;
    char c;
    string s;
    vector<set<int>> chars(26);

    cin >> s;
    for(int i = 0; i < s.size(); i++){
        pos = s[i]-'a';
        chars[pos].insert(i+1);
    }

    cin >> q;

    while(q--){
        cin >> op;
        if(op == 1){
            cin >> pos >> c;
            char aux = s[pos-1];
            chars[aux-'a'].erase(pos);
            chars[c-'a'].insert(pos);
            s[pos-1] = c;
        }
        else{
            cin >> l >> r;
            l--;
            r--;

            ans = 0;

            for(int i = 0; i < 26; i++){
                if(chars[i].empty())
                    continue;

                set<int>::iterator p = chars[i].lower_bound(r);

                if(p != p.end()){
                    ans+=;
            }

            printf("%d\n",ans);
        }
    }

    return 0;
}
