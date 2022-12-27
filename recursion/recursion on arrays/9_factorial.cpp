#include<iostream>
using namespace std;

int factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    
    int fact =  n*factorial(n - 1);
    return  fact;
}


int main(){
    int n; 
    cout<<"enter a number";
    cin>>n;
    cout<<factorial(n);
}