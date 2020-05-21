#include<iostream>
using namespace std;
struct Node{
	
	Node *next;
} *start,*nptr,*save,*ptr;

Node* CreateNewNode(int n){
ptr=new Node;
ptr->info = n;
ptr->next=NULL;
return ptr;
} 
void Insertbeg(Node *np){
if(start==NULL)
	start=np;
else{
	save=start;
	start=np;
	np->next=save;//link
}
}
void display(Node *np){
while(np!=NULL){
cout<<np->info<<"->";
np=np->next;
}
}
int main(){
start=NULL;
char ch='y';
int inf;
while(ch=='y'){
cout<<"\n enter info. to add";
cin>>inf;
nptr=CreateNewNode(inf);
if(nptr!=NULL){cout<<"Node created\n";}
Insertbeg(nptr);
display(start);
cout<<"Do you want to add more ";
cin>>ch;
}
}
