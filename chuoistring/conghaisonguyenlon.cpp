#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void rever(int in[], int n){
	int l=0;
	int r=n-1;
	while(l<r){
		int tmp=in[l];
		in[l] = in[r];
		in[r] = tmp;
		l++;
		r--;
	}
}
void add(char kytu1[], char kytu2[]){
	int n1 = strlen(kytu1);
	int n2 = strlen(kytu2);
	int n=0;
	int x[n1], y[n1];
	int z[n1+1];
	for(int i=0; i<n1; i++){
		x[i] = kytu1[i] - 48;
	}
	for(int i=0; i<n2; i++){
		y[i] = kytu2[i] - 48;
	}
	rever(x, n1);
	rever(y, n2);
	for(int i=n2; i<n1; i++){
		y[i] = 0;
	}
	int nho=0;
	for(int i=0; i<n1; i++){
		int tmp=0;
		tmp += x[i] + y[i] + nho;
		z[n++] = tmp%10;
		nho = tmp/10;
	}
	if(nho){
		z[n++] = nho;
	}
	for(int i=n-1; i>=0; i--){
		printf("%d", z[i]);
		
	}
}

int main(int argc, char *argv[]) {
	char kytu1[300];
	char kytu2[300];
	gets(kytu1);
	gets(kytu2);
	if(strlen(kytu1) >= strlen(kytu2)){
		add(kytu1, kytu2);
	}
	else{
		add(kytu2, kytu1);
	}
	return 0;
}

