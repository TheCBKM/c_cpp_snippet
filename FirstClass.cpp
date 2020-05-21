 #include<iostream>
using namespace std;

class vehic{
public :
int eng; 
int mwheel;
int seat
};
class m2v : private vehic{

public:
void putdata(){
cout<<eng<<endl<<mwheel;

}
m2v(){
eng=1;
mwheel=2;
}
};
class m4v :private vehic{

public:
void putdata(){
cout<<eng<<endl<<mwheel;
}
m4v(){
eng=1;
mwheel=4;
}
};
int main(){
m4v m2;
m2.putdata();

}








/home/the_prober/Desktop/Code/libesoobS.so

