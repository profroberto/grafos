#include<bits/stdc++.h>
using namespace std;
int n,a,b,dist[10001];
bool visitados[10001];
queue<int>fila;
int main(){
    cin >> n >> a >> b;
    vector<int> g[n+1];
    for(int i=0;i<n-1;i++){
        int r,s;
        cin >> r >> s;
        g[r].push_back(s);
        g[s].push_back(r);
    }
    bool achou = false;
    visitados[a]=true;
    dist[a]=0;
    fila.push(a);
    if(a==b)achou = true;
    while(!fila.empty()){
        int atual = fila.front();
        fila.pop();
        for(auto p:g[atual]){
            if(visitados[p])continue;
            visitados[p]=true;
            dist[p]=dist[atual]+1;
            fila.push(p);
            if(p==b){
                cout << dist[b] << endl;
                return 0;
            }
        }
    }
    return 0;
}
