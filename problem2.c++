#include <iostream>

using namespace std;

int power(int value,int p=2){
    if (p==0){
        return 1;
    }
    else return  value * power(value,p-1);
}
int main(){
int value,p;
cin>>value;
cin>>p;
cout<<power(value,p);
 return 0;   
}