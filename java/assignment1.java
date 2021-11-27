//Ques:1Write A program to accept  Four digit number from user and count zero , odd and even digits from the entered number.
import java.util.*;
class assignment1
{
Scanner sc = new Scanner(System.in);
int[] digit = new int[4];
int num,flag,i,j;

void accept( )
{
System.out.println("ENTER THE 4 DIGIT NUMBER");
num = sc.nextInt();
if(num>9999  && num<1000)
System.out.println("Wrong Input");
count();
}
void count()
{
for( i=0;i<=3;i++)
{
digit[i]=num%10;
num=num/10;
}
for(j=0;j<=3;j++)
{
if(digit[j]==0)
flag = 0;
else if(digit[j]/2==0)
flag =1;
else flag =2;
}
if(flag==0)
System.out.println("number of zeros is " +j);
else if(flag==1)
System.out.println("number of even is  " +j);
else
System.out.println("number of odd is  " +j);
}
public static void main(String[] args)
{
assignment1 ob = new assignment1();
ob.accept();
}
}