#include<bits/stdc++.h>
#include<stack>
#define MAX 100
using namespace std;
class graph{
	private:
		int n, s, A[MAX][MAX];
	public:
		int getS();
		void euler(int u);
		friend istream &operator >>(istream &is, graph& g);
		friend ostream &operator <<(ostream &os, graph g);
};
int graph::getS(){
	return s;
}
istream &operator >>(istream &is, graph& g){
	is >> g.n >> g.s;
	for(int i = 1; i <= g.n; i++){
		for(int j = 1; j <= g.n; j++){
			is >> g.A[i][j];
		}
	}
}
void graph::euler(int u){
	stack<int> stack, ce;
	stack.push(u);
	while(!stack.empty()){
		int s = stack.top();
		int isolated = 1;
		for(int t = 1; t <= n; t++){
			if(A[s][t] == 1){
				isolated = 0;
				stack.push(t);
				A[s][t] = A[t][s] = 0;
				break;
			}
		}
		if(isolated == 1){
			ce.push(s);
			stack.pop();
		}
	}
	while(!ce.empty()){
		cout << ce.top() << " ";
		ce.pop();
	}
}

int main(int argc, char** argv) {
	graph g;
	cin >> g;
	g.euler(g.getS());
	return 0;
}

/*
6
1
0 0 0 1 1 0
0 0 1 1 1 1
0 1 0 1 1 1
1 1 1 0 1 0
1 1 1 1 0 0 
0 1 1 0 0 0 
output = 1 4 2 3 4 5 2 6 3 5 1
*/
