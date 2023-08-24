#include<bits/stdc++.h>
using namespace std;

class cube{
private:
double height;
double base ;
double length;
public:
void input(){;
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
};
int main(){
class cube c;
    c.input();
   int vol = c.vol();
   cout<<vol<<endl;
}