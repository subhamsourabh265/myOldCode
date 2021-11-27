import java.util.*;
class power
{
Scanner sc = new Scanner(System.in);
int i,x,y,pow=1;

void accept()
{
System.out.println("Enter the values of x and y");
x = sc.nextInt();
y = sc.nextInt();

calculate();
}

void calculate()
{
for(i=1;i<=y;i++)
{
pow=pow*x;
}
System.out.println("required  result is   " +pow);
}

public static void main(String[] args)
{
power ob = new power();
ob.accept();
}
}