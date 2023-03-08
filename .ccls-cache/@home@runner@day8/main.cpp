#include <iostream>
#include<string>
using namespace std;
void howmany(string input){
  int ok=input.length();
  cout<<ok<<endl;
  
  
  
  }

int main() {
  //cout << "Hello World!\n";
 string a;
  cin>>a;
  howmany(a);
  int k =3212;
  int ok=0;
  if(k==0){
    cout<<k;
  }
  while(k !=0){
    k=k/10;
    ++ok;
  }
  cout<<ok;
}