#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int puis(float X,int n){
if(n==0){
    return 1; 
}else{
    return X+puis(X,n-1);
}    
}
int main (){
int n;
float X;
cout<<"Please enter the first number!" \n";
cout<<"Please enter the second multi  number!\n";
cin>>X,n;
cout<<"la puissasnce du reel"<<X<<" par le entier"<<n<<"est:"<<puis(X,n);
    return 1;
}