#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    int in1[n+1], in2[m+1], in3[1000];
    int ptu = 0;
    for(int i = 0; i<n; i++){
        cin>>in1[i];
    }
    for(int j = 0; j<m; j++){
        cin>>in2[j];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(in1[i] != in2[j]){
                in3[ptu] = in1[i];
                ptu ++;
                cout<<ptu<<endl;
            }
        }
    }
//    for(int i = 0; i<ptu; i++){
////        cout<<in3[i];
//    }
}
