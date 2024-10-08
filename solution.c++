#include<iostream>

int main(){
int a;
int &ref = a;
cin>>ref;
cout<<"resultat du decalage: "<<(a<<2);
  return 0;
}
