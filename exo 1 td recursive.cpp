#include <iostream>
using namespace std;
int somme(int n){
if(n==0){
    return 0;
}else{
    return n+somme(n-1);
}    
}

int main()
{

int n;
cout<<"enter a number randommly !";
cin>>n;

    cout<<"la somme de "<<n<<" est: "<<somme(n);

return 1;
} 