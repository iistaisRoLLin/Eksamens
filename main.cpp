#include <iostream>
#include <cctype>
using namespace std;
extern  int nep=0;
void jautajums1(){
  string atbilde;
cout<<"Ko nozīmē simbols .<. ? \n a) Vienāds \n b) Lielāks \n c) Mazāks \n d) Līdzīgs"; cin>>atbilde;
  if(atbilde=="c" || atbilde == "mazāks"){
    jautajums2();
  }else
    jautajums2();
  nep++;
}
void jautajums2(){
  
}
int main() {
  
  
  string kkas;
  int izvele;
  do{
  
    
  cout<<"Ievadi ko vēlies darīt || 1. Sākt testu || cin>>izvele";
  switch(izvele){
    case 1: jautajums1();




    cout<<"vai velies turpinat (j/n)";
  cin>>kkas;
      }
  }while(kkas == "j");
}