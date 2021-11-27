#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
char IPdec[100], IPbin[100], IPdec1[100], subnet_bin[100], subnet_bin_compl[100], IP_first_bin[100], IP_last_bin[100];
int mask,x,j=0;

void input();
void decbin();void bindec(char *, int);
void add_first();void add_last();
void subnet();void host();

int main()
{
int op;
input();
add_first();
add_last();
host();
return 0;
}

void input()
{
int i;
mask=0;
printf("\n Enter the IP address: \t");
fflush(stdin);
gets(IPdec);
fflush(stdin);
x=0;
for(i=0; i<strlen(IPdec); i++)
{
       if(IPdec[i]=='.')
       {
         decbin();
         x=0;
       }
       else if(IPdec[i]=='/')
      {
        decbin();
        x=0;
        while(++i <strlen(IPdec))
          {
            mask = mask * 10;
            mask=mask + IPdec[i] -48;
          }
      }
       else if(IPdec[i]!='.')
       {
          x = x*10;
          x = x + IPdec[i]-48;
       }
}
subnet();
}

void decbin()
{
int k=7;
while(k>=0)
{
    IPbin[j+k]=(x%2)+48;
    x=x/2;
    k--;
}
    j=j+8;
    x=0;
}


void bindec(char *p, int mas)
{
int i, count=7, temp=0, k=0, incr=0;
for(i=0; i<strlen(IPdec1) ;i++)
IPdec1[i]='.';

for(i=0; i<strlen(p) ;i++)
{
    if(count>=0)
    {
        if(p[i]==49)
        temp=temp+pow(2.00, count);
        count--;
    }
    else
    {
        count=7;
        if(temp==0)
        {
            IPdec1[k]='0';
            incr=1;
        }
        while(temp>0)
        {
            if(temp/100>0)
            {
                IPdec1[k+2]=(temp%10)+48;
                temp=temp/10;
                incr=3;
            }
            else if(temp/10>0)
            {
                IPdec1[k+1]=(temp%10)+48;
                temp=temp/10;
                if(incr==0)
                incr=2;

            }
            else
            {
                IPdec1[k]=(temp%10)+48;
                temp=temp/10;
                if(incr==0)
                incr=1;
            }
        }
        IPdec1[k+incr]='.';
        k=k+incr+1;
        incr=0;
        i--;
    }
}

if(temp==0)
{
    IPdec1[k]='0';
    incr=1;
}
while(temp>0)
{
    if(temp/100>0)
    {
        IPdec1[k+2]=(temp%10)+48;
        temp=temp/10;
        incr=3;
    }
    else if(temp/10>0)
    {
        IPdec1[k+1]=(temp%10)+48;
        temp=temp/10;
        if(incr==0)
        incr=2;

    }
    else
    {
        IPdec1[k]=(temp%10)+48;
        temp=temp/10;
        if(incr==0)
        incr=1;

    }
}
if(mas>0)
{
    IPdec1[k+incr]='/';
    k+=incr+1;
}
while(mas>0)
{
    if(mas/10>0)
    {
        IPdec1[k+1]=(mas%10)+48;
        mas=mas/10;
    }
    else
    {
        IPdec1[k]=(mas%10)+48;
        mas=mas/10;
    }
}
puts(IPdec1);
}

void add_first()
{
int i;
for(i=0; i<strlen(IPbin); i++)
{
    if(IPbin[i]!=subnet_bin[i])
    IP_first_bin[i]=48;

    else if(IPbin[i]==subnet_bin[i])
    IP_first_bin[i]=IPbin[i];
}
printf("\n The first IP address is:\t");
bindec(IP_first_bin,mask);
}

void add_last()
{
int i;
for(i=0; i<strlen(subnet_bin); i++)
{
    if(subnet_bin[i]==48)
    subnet_bin_compl[i]=49;

    else if(subnet_bin[i]==49)
    subnet_bin_compl[i]=48;
}
for(i=0; i<strlen(IPbin); i++)
{
    if(IPbin[i]!=subnet_bin_compl[i])
    IP_last_bin[i]=49;

    else if(IPbin[i]==subnet_bin_compl[i])
    IP_last_bin[i]=IPbin[i];
}
printf("\n The last IP address is :\t");
bindec(IP_last_bin, mask);
}

void subnet()
{
int i, temp;
temp=mask;
for(i=0; i<32; i++)
{
    if(temp>0)
    {
        subnet_bin[i]=49;
        temp--;
    }
    else if(temp==0)
        subnet_bin[i]=48;

}
}

void host()
{
int no_host;
no_host= pow(2.00, (32-mask));
printf("\n The number of hosts that can be accommodated are %d .\n\n",no_host);
}
