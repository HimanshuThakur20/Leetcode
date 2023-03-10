#include<iostream>

using namespace std;

int setbits(int n){

    int count =0;
    for(int i=1;n!=0;i++){
        if(n&1==1)
        count++;
        n=n>>1;
    }
    return count;
}

int main(){

    int a,b;
    cin>>a>>b;
    cout<<setbits(a)<<"  "<<setbits(b);
    
    return 0;
}