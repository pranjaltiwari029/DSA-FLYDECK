#include<iostream>
using namespace std;

int fac(int n){
    if(n==0||n==1){
        return 1;
    }
    int a= n*fac(n-1);
    return a;
}
int main(){
     int n, r;  
    float ncr;  
    cin >> n >> r;
  
    ncr = fac(n) / ( fac(r) * fac(n - r) );  
    cout << ncr; 
  
      
}  