#include<bits/stdc++.h>
using namespace std;
int v,a,o,d;
bool visitados[100];
queue<int>fila;
int main(){
    cin >> v >> a;
    vector<int> g[v];
    for(int i=0;i<a;i++){
        int r,s;
        cin >> r >> s;
        g[r].push_back(s);
        g[s].push_back(r);
    }
    cin >> o >> d;
    bool achou = false;
    visitados[o]=true;
    fila.push(o);
    while(!fila.empty()&&!achou){
        int atual = fila.front();
        fila.pop();
        for(auto p:g[atual]){
            if(visitados[p])continue;
            visitados[p]=true;
            fila.push(p);
            if(p==d){
                achou = true;
                break;
            }
        }
    }
    if(achou)cout << "EXISTE\n";
    else cout << "NAO EXISTE\n";
    return 0;
}
