#include<iostream>
#include<string>
using namespace std;
int main(){
    string a;
    cin>>a;
    int b=a.find("0");
    if(b==-1){
        cout<<a.substr(0,a.size()-1);
    }
    else{
        cout<<a.substr(0,b)+a.substr(b+1,a.size())<<endl;
    }
    return 0;
}