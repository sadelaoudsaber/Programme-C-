#include <iostream>
using namespace std;
int fibo(int n){
if(n==0){
    return 0;
}else if(n==1){
    return 1;
}else{
     return fibo(n-2)+fibo(n-1);
}    
}

int main()
{

int n;
cout<<"enter a number randommly !";
cin>>n;

cout<<"la somme FIBONACCI de "<<n<<" est: "<<fibo(n);

return 1;
}