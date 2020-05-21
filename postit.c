#include<stdio.h.h>

#include<fstream.h>
#include<string.h>
#include<process.h>
#include<stdio.h>
#include<conio.h>
class post_it
{
public:
char name[40],uname[40],pos[56],pass[40];
void reg()//to register
{
printf("\n\n\t\t Enter the name:\t");
gets(name);
printf("\n\n\t\t User Name:\t");
gets(uname);
printf("\n\n\t\t Enter Password:\t");
gets(pass);
printf("\n\n\t\t Enter starting Post");
post();
}
void log()//login
{
printf("\n\n\t\t Enter the User Name:\t");
gets(uname);
}
void post()//to enter a post
{
printf("\n\n\t\t Enter Post:-\n\n\t\t");
gets(pos);
}
char*vpost()//to find a post
{
return pos;
}
char*passd()//to find password
{
return pass;}
char*nam()//to get name
{
return name ;
}
}
;
void me()
{
clrscr();
printf("\n\n\t\tThis the program to CONNECT people with each other and share\n\n\t\t IDEAS and thoughts by posting them.");
printf("\n\n\t\t A user has to first REGISTER by providing their name,\n\n\t\ta unique username , a password and a starting post");
printf("\n\n\t\t.After this the user can login to view their posts ,\n\n\t\tpost anew idea or view others' posts .");
printf("\n\n\t\tThe post it contains following useful option like:- \n\t\t Enter a post,View a post,News Feed,\n\n\ttLogout and Delete Your Account");
printf("\n\n\t\t\t\t\t\tBY Rajaram Joshi");
}
int main ()
{
post_it i,h;
//elements of class
char u[40] ,p[40],ch='n';
int choice;
while(ch=='n')
{
again:
clrscr();
printf("\t\t*****************************************************
*");
printf("\n\n\t\t\t\t");
printf("welcome to POST IT.");
printf("\n\n\n\t\t************************************************
*****");
printf("\n\n\t\t1.Register\n\n\t\t");
printf("2.Login\n\n\t\t");printf("3.Know how it Works\n\n\t\t");
printf("4.Exit\n\t\t");
cin>>choice;
if(choice==1)
{
i.reg();
strcpy(u,i.uname) ;
strcat(u,".dat");
fstream fout ,fin;
fin.open(u,ios::in|ios::binary);
// to check weather the file exist or not
if(fin)
{
printf("\n\n\t\t Sorry!! This USER NAME has been
taken\n\ttPlease try again with different USER NAME");
;
getch();
fin.close();
goto again;
}
else if(!fin )
{
fin.close();
}
fout.open(u,ios::out|ios::app|ios::binary) ;
fout.write((char*)&i,sizeof(i));
fout.close();
printf("\n\t\t registered!!!!!!");
printf("\n\t\t Do yo want to Exit(y/n)");
cin>>ch;
}
else if(choice==3)
{
me();
getch();
goto again;
}
else if (choice==4)
{
clrscr();printf("\n\n\t\t !!@@ WE HOPE YOU WILL COME AGAIN
@@!!");
getch();
return-1;
}
else if(choice==2)
{
j:
i.log();
fstream f,c;
strcpy(u,i.uname) ;
strcat(u,".dat");
c.open(u,ios::in|ios::binary);
// to check weather the file exist or not
if(!c)
{
printf("\n\n\t\t No such user name\n\t\t !!Please first REGISTER
your self !!");
getch();
c.close();
goto again;
}
else if(c)
{
c.close();
}
f.open(u,ios::in|ios::out|ios::binary);
if(!f)
{
printf("cant open file");
return 1;
}
printf("\n\n\t\tenter the password:t");
gets(p);
f.read((char*)&i,sizeof(i));
if( strcmp(i.passd(),p)==0)
{
printf("\n\n\t\t password is correct");
printf("\n\n\t\t hello "<<i.nam();
getch();}
else if(strcmp(i.passd(),p)!=0)
{
printf("\n\n\t\t password is incorrect");
getch();
f.close();
goto again;
}
again2:
choice=0;
clrscr();
printf("\n\n\t\t:::::::::::CHOOSE an OPTION:::::::::::");
printf("\n\n\t\t1.Enter a post \n\n\t\t2.View a post \n\n\t\t3.News
Feed\n\n\t\t4.Logout\n\n\t\t5.Delete Your Account\n\n\t\t6.Exit");
cin>>choice ;
fstream k,l;
k.open(u,ios::in|ios::out|ios::app|ios::binary);
if(!k)printf("cant open file");
else
{
if(choice==1 )
{
pa:
i.post();
k.write((char*)&i,sizeof(i));
printf("\n\n\t\t Add one more post(y/n) \t\t");
cin>>ch;
if (ch=='y')
{
goto pa;
}
printf("\n\t\t Goto Previous Menu");
getch();
clrscr();
f.close();
k.close();
clrscr();
goto again2;
}
else if(choice==2){
while (!k.eof())
{
k.read((char*)&i,sizeof(i)) ;
printf("\n\t\t"<<i.vpost()<<"n");
getch();
}
k.close();
printf("\n\n\t\t^^^ This is your latest post");
printf("\n\n\t\t!!!!@@InCASE you don't see the Post i.e.\n\t\t
you have not entered a POST @@!!!!");
printf("\n\n\t\tGoto Previous Menun\t\t");
getch();
f.close();
clrscr();
goto again2;
}
else if (choice==3)
{
k.close();
char us[40];
printf("\n\n\t\tEnter user name:t" ;
gets(us);
strcat(us,".dat");
l.open(us,ios::in|ios::out|ios::app|ios::binary );
while (!l.eof())
{
l.read((char*)&h,sizeof(h)) ;
printf("\n\t\t"<<h.vpost()<<"n");
getch();
}
l.close();
printf("\n\n\t\t^^^ This is the latest post");
printf("\n\n\t\t!!!!@@InCASE you don't the Post i.e.
because\n\n\t\t you have entered an INVALID USER NAME or \n\t\t there
are no POSTs by this USER NAME @@!!!!");
printf("\n\n\t\t Goto Previous Menu");
getch();
clrscr();
f.close();goto again2;
}
else if (choice==4) goto again;
else if(choice==5)
{
remove(u);
printf("\n\n\t\tYour Account has been DELETED
successfully!");
getch();
goto again;
}
else if (choice==6)
{
clrscr();
printf("\n\n\t\t !!@@ HOPE YOU WILL COME AGAIN
@@!!");
getch();
k.close();
return 1;
}
else
{
printf("\n\n\t\tPlease Enter a VALID choice");
getch();
k.close();
goto again2;
}
}
}
else
{
printf("\n\n\t\tPlease Enter a VALID choice" ;
getch();
goto again;
}
getch();
}
return 0;
}
