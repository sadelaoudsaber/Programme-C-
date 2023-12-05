#include<iostream>
#include<string>
using namespace std;
int main(){
int n,i;
cout<<"enter ur range! ";
cin >> n;
int my_array[n];

for ( int i = 0; i <n; i++ ){
cin >> my_array[i];

for ( int i = n-1; i >= 0; i--){
cout << my_array[i] << " ";
}
return 0;
}
}