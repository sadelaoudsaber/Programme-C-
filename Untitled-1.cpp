#include <iostream>
using namespace std;
int main()
{
long long a;
int b,n;
cout<<"enter a number between 1000 and 9999 !";
cin>>a;
if((a>1000) and (a<9999)){
    b=a/1000;
    n = b % 2;
    if(n==0){
        cout<< b <<"  est paire";
    }else{
        cout<< b <<"  est impaire";
}
    
}else{
    cout<<"renter youre number!";
}
return 0;
}
