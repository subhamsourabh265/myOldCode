import java.util.*;
class multiplication
{
Scanner sc = new Scanner(System.in);
long  num,i,x;
void accept()
{
System.out.println("Enter  the  number");
num = sc.nextLong();
}
void table()
{
for(i=1;i<=10;i++)
{
x=num*i;
System.out.println(num+ " * "  +i+" = " +x);
}
}
public static void main(String[] args)
{
multiplication ob = new multiplication();
ob.accept();
ob.table();
}
}
