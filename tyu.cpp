#include<bits/stdc++.h>
using namespace std;

class cube{
private:
double height;
double base ;
double length;

public:
cube(){
 cout<<"enter the length:";
cin>>length;
cout<<"enter the base:";
cin>>base;
cout<<"enter the height:";
cin>>height;
}
int vol(){
int volume = length*base*height;
return volume;

}

int update (){
cout<<"enter the value of height:";
cin>>height;
cout<<height;
return height;
}
};
int main(){
class cube c;
   int vol = c.vol();
   cout<<vol<<endl;
   int h= c.update();
   cout<<h;
}

