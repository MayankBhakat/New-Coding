#include<iostream>
using namespace std;
int &f(int n){
    int a=n;
    return a;
}
int main(){
    int i=10;
    int &k=f(i);
    cout<<k;
}