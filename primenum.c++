#include<conio.h>
void main()
{
int a,b,c,d;
cout<<"Enter the number");
cin>>a>>b>>c>>d;
cout<<"prime number between<<a<<b";
while(a<b)
{
d=0;
for(i=2;i<=a/2;++i)
{
if(a%c==0)
{
d=1;
break;
}
}
if(d==0)
cout<<a<<;
++a;
}
}
