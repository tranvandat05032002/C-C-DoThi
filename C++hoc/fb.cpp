#include<stdio.h>

void swap(int &a, int &b){
int tam=a;
a = b;
b = tam;
}

void sapXepTang(int x[], int n){
for(int i=0; i<n-1; i++){
int vitrinhonhat = i;
for(int j=i+1; j<n; j++){
if(x[j]<x[vitrinhonhat])
vitrinhonhat = j;
}
swap(x[i],x[vitrinhonhat] );
}
}
void sapXepGiam(int x[], int n){
for(int i=0; i<n-1; i++){
int vitrilonnhat = i;
for(int j=i+1; j<n; j++){
if(x[j]>x[vitrilonnhat])
vitrilonnhat = j;
}
swap(x[i],x[vitrilonnhat] );
}
}

void printMang(int x[], int n){
for(int i=0; i<n; i++){
printf("%d ", x[i]);
}
}
