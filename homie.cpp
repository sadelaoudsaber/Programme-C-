#include<iostream>
using namespace std; 
int moyenne(int s){
if(s==0){
    return 0;
}else{
    return moyenne(s/5);
}
}
int main(){
	int x;double s=0;
	cout<<"enter les 5 nombres"<<endl;
	cin>>x;s=s+x;
	cin>>x;s=s+x;
	cin>>x;s=s+x;
	cin>>x;s=s+x;
	cin>>x;s=s+x;
	cout<<"la moyenne est : "<<moyen(s)<<endl;
	
	return 0;
}