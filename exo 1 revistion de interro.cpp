#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int somme(int n){

if(n==0){
    return 0;
}else{
    return n+somme(n -1);
}
}
int main (){
int n;
cout<<"Please enter a number";
cin>> n;
cout<<somme(n);
return 1;
}
