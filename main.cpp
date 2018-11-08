#include <iostream>
using namespace std;

// <-- ADD YOUR FUNCTION PROTOTYPE HERE
void swap(int &a, int &b, int &c);

int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red, blue, green;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;
  //...END OF "DO NOT CHANGE" AREA


  // <-- ADD YOUR FUNCTION CALL HERE
swap(red, green, blue);

  //DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
}
void swap(int &a, int &b, int &c)
{
if(a>b && b>c){
}else if(a>b && c>b && a>c){
int temp = b;
b = c;
c = temp;
}else if(b>a && a>c){
int temp = a;
a = b;
b = temp;
}else if(b>c && c>a){
int temp = a;
a = b;
b = c;
c = temp;
}else if(c>a && a>b){
int temp = a;
a = c;
c = b;
b = temp;
}else if(c>a && c>b && b>a){
int temp = c;
c = a;
a = temp;

}
}
// <-- ADD YOUR FUNCTION DEFINITON HERE
