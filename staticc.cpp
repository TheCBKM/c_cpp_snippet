#include<iostream>
using namespace std;
class item
{	public :
  item(){cout<<"constructor 1 Activated.....\n ";}
	item(int a){cout<<"constructor 2 Activated.....\n ";}
	item(char a){cout<<"constructor 3 Activated.....\n ";}
  ~item(){cout<<"destructor Activated.....\n ";}
};

int main()
{	
  item a,b(3),c('w');
	item d=new item();
 
  return 0;
}
