#include <iostream>
#include <cctype>
using namespace std;
int nep=0;
void beigas(){
  cout<<"Testā tu atbildēji uz 10 jautājumiem un no tiem Jums bija "<<nep<<" nepareizi";
  exit(0);
  }
void jautajums10(){
   string atbilde;
  cout<<"int x = 5, y = 3; \n cout << (5 > 3 || 3 < 4); \n Kāds būs iznākums?  \n a) true \n b) false \n c) 3 \n d) 5\n"; cin>>atbilde;
  if(atbilde=="a" || atbilde == "true"){
    beigas();
  }else
    nep++;
    beigas();
  
  }
void jautajums9(){
   string atbilde;
  cout<<"int x = 5, y = 3; \n cout << !(5 < 3 || 3 > 4); \n Kāds būs iznākums?  \n a) true \n b) false \n c) 3 \n d) 5\n"; cin>>atbilde;
  if(atbilde=="a" || atbilde == "true"){
    jautajums10();
  }else
    nep++;
    jautajums10();
  
  }
void jautajums8(){
   string atbilde;
  cout<<"int x = 5, y = 3; \n cout << !(5 > 3 || 3 > 4); \n Kāds būs iznākums?  \n a) true \n b) false \n c) 3 \n d) 5\n"; cin>>atbilde;
  if(atbilde=="b" || atbilde == "false"){
    jautajums9();
  }else
    jautajums9();
  nep++;

}
void jautajums7(){
   string atbilde;
  cout<<"int x = 5, y = 3; \n cout << (5 > 3 || 3 > 4); \n Kāds būs iznākums?  \n a) true \n b) false \n c) 3 \n d) 5\n"; cin>>atbilde;
  if(atbilde=="b" || atbilde == "false"){
    jautajums8();
  }else
    jautajums8();
  nep++;
}
void jautajums6(){
   string atbilde;
  cout<<"int x = 5, y = 3; \n cout << (5 > 3 || 3 < 4); \n Kāds būs iznākums?  \n a) true \n b) false \n c) 3 \n d) 5\n"; cin>>atbilde;
  if(atbilde=="a" || atbilde == "true"){
    jautajums7();
  }else
    jautajums7();
  nep++;
}
void jautajums5(){
  string atbilde;
  cout<<"int a = 5, b = 10, c = 15 \n if(a < b && b < c) \n Kāds būs iznākums? \n a) true \n b) false \n c) 15 \n d) 5\n"; cin>>atbilde;
  if(atbilde=="a" || atbilde == "true"){
    jautajums6();
  }else
    jautajums6();
  nep++;
} 

void jautajums4(){
 string atbilde;
  cout<<"Ko nozīmē simbols .!=. ? \n a) Patiess \n b) Aplams \n c) Mazāks \n d) Nepatiess\n"; cin>>atbilde;
  if(atbilde=="d" || atbilde == "Nepatiess"){
    jautajums5();
  }else
    jautajums5();
  nep++;
} 

void jautajums3(){
  string atbilde;
  cout<<"Ko nozīmē simbols .=. ? \n a) Vienāds \n b) Lielāks \n c) Mazāks \n d) Nepatiess\n"; cin>>atbilde;
  if(atbilde=="a" || atbilde == "Vienāds"){
    jautajums4();
  }else
    jautajums4();
  nep++;
}

void jautajums2(){
  string atbilde;
  cout<<"Ko nozīmē simbols .>. ? \n a) Vienāds \n b) Lielāks \n c) Mazāks \n d) Nepatiess\n"; cin>>atbilde;
  if(atbilde=="b" || atbilde == "Lielāks"){
    jautajums3();
  }else
    jautajums3();
  nep++;
}
void jautajums1(){
   string atbilde;
cout<<"Ko nozīmē simbols .<. ? \n a) Vienāds \n b) Lielāks \n c) Mazāks \n d) Nepatiess\n"; cin>>atbilde;
  if(atbilde=="c" || atbilde == "mazāks"){
    jautajums2();
  }else
    jautajums2();
  nep++;
}

int main() {
  
  
  string kkas;
  int izvele;
  do{
  
    
  cout<<"Ievadi ko vēlies darīt || 1. Sākt testu || ";
    cin>>izvele;
  switch(izvele){
    case 1: jautajums1();
    case 3: jautajums9();

      }
  }while(kkas == "j");
}