#include<iostream>

using namespace std;

int factorial (int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*i;
    }

    return ans;
}

int ncr(int n, int r){
    int nf,deno;
    // nf=factorial(n);
    // rf=factorial(r);
    // pf=factorial(p);
    nf=factorial(n);
    deno=factorial(r)*factorial(n-r);

    return nf/deno;
    
}

int main(){

    int n,r,nc;
    cin>>n>>r; 
   
    nc=ncr(n,r);
     
    cout<<nc<<endl;

    return 0;
}