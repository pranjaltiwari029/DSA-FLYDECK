#include<iostream>
using namespace std;

void incdec(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    incdec(n-1);
    cout<<n<<endl;
}
int main(){
    
        int n;
        cout<<"enter n";
        cin>>n;
        incdec(n);
    
}