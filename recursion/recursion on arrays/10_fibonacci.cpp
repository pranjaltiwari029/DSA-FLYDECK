#include<iostream>
using namespace std;

int fib(int n){
    if(n==1){
        return 0;


    }
    if (n==2){
        return 1;
    }
     int a=fib(n-1)+fib(n-2);
     return a;

}
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    cout<<fib(n);
}