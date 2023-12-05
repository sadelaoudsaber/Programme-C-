#include <iostream>
using namespace std;
int fact(long n){
if(n<=1){
    return n;
}else{
    return n* fact(n-1); 
}
}
int main (){
long n;
cout<<"enter un nombre !";
cin>>n;
cout<<"le factorielle de "<<n<<"  est : "<<fact(n);




}