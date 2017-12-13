#include<iostream.h>
#include<string.h>
class patient
{
private:
char name[100];
int age,b1,b2,pr,hb;
long platelets;
public:
int normal,res;
patient(int a,char n[100],int b11,int b22,int prr,long pp,int h)
{
age=a;
strncpy(name,n,100);
b1=b11;
b2=b22;
pr=prr;
platelets=pp;
hb=h;
}
int btw(long val,long low,long high)
{ 
if(val >= low && val <= high)
{
res=1;
}
else
{
res=0;
}
return res;
}
void checkup()
{
if(!btw(b1,120,140) && !btw(b2,80,90))
{
cout<<"BP is normal\n";
}
else
{
cout<<"BP is not in required range\n";
}
if(!btw(pr,60,100))
{
cout<<"pulse rate is normal\n";
}
else
{
cout<<"pulse rate is not in required range\n";
}
if(!btw(platelets,150000,450000))
{
cout<<"Normal\n";
}
else
{
cout<<"Dengue\n";
}
if(!btw(hb,13,18))
{
cout<<"HB is in required range\n";
}
else
{
cout<<"HB is not in required range\n";
}
}
};
void main()
{
char n[100];
long a=0,b1=0,b2=0,pr=0,p=0,h=0;
cout<<"Enter patient name\n";
cin>>n;
cout<<"Enter patient age\n";
cin>>a;
cout<<"BP level ex num over num\n";
cin>>b1>>b2;
cout<<"Pulse rate\n";
cin>>pr;
cout<<"Platelets in thousands\n";
cin>>p;
cout<<"HB range\n";
cin>>h;
patient pat(a,n,b1,b2,pr,p,h);
pat.checkup();
}
