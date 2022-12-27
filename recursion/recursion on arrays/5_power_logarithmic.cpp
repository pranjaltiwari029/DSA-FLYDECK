#include<iostream>
using namespace std;

int powerlog(int x,int n){
    if(n==0){
        return 1;
    }
    int half=powerlog(x,n/2);

    if(n%2==0){
        return half*half;
    }
    else{
        return x*half*half;
    }


}
int main(){
    int x,n;
    cin>>x>>n;
    cout<<powerlog(x,n);
}