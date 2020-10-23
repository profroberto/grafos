#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> v[1000];
int vizinhos(int x){return v[x].size();}
void listarvizinhos(int x){
    for(int i=0;i<v[x].size();i++){
        cout<<v[x][i]<<" ";
    }
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        int p,q;
        cin >> p >> q;
        v[p].push_back(q);
        v[q].push_back(p);
    }
    cout << "\n";
    for(int i=1; i<=n+1;i++){
        cout << "Listando o vertice " << i << ":";
        for(auto p:v[i])cout << p << " ";
        cout << "\n";
    }

    return 0;
}
