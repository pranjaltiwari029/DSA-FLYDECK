#include<iostream>
using namespace std;

void printinc(int n){
    if(n==0){
        return;
    }
    printinc(n-1);
    cout<<n;
}

int main(){
    int n;
    cin>>n;
    printinc(n);
}