#include <iostream>
using namespace std;

int currentpos = -1;
int arr[10] ;
// scope = 10 can be upgraded 

void push(){
   if (currentpos == 10){
     cout<<"OVERFLOW !!! "<<endl;
   }
   else {
     int x;
     cout<<"ENTER ELEMENT TO PUSH : ";
     cin>>x;
     arr[++currentpos] = x;
     cout<<"PUSHED "<<x<<endl;
   }
}

void pop(){
  if (currentpos == -1){
    cout<<"NO ELEMENT TO POP : ( "<<endl;
  }
  else {
      cout<<"POPPED ELEMENT "<<arr[currentpos]<<endl;
      currentpos--;
  }
}

void view(){
   int len = sizeof(arr)/sizeof(arr[0]);
   cout<<"STACK :: "<<endl;
   for (int i = 0 ; i < currentpos ; i++) {
     cout<<arr[i]<<endl;
   }
}

int main(){
  int x;
  bool y = true ;
  cout<<"SCOPE = 10"<<endl;
  while (y) {
     cout<<"CHOICES :: \n1. Push\n2. Pop\n3. view\n4. leave \n";
     cout<<"ENTER CHOICE :: \n";
     cin>>x;
     switch(x){

       case 1:
         push();
         break;

       case 2:
         pop();
         break;


       case 3:
         view();
         break;

       case 4:
         y = false;
         break;
     } 


  }
  
}
