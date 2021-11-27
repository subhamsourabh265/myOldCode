import java.util.*;
class salary
{
Scanner sc = new Scanner(System.in);
int gross_sal,basic_sal;
void accept()
{
System.out.println("Enter your salary");
basic_sal =sc.nextInt();
}
void gross()
{
if(basic_sal >= 5000)
{
System.out.println("hra = 15%  and  da = 150%");
gross_sal = basic_sal *(165/100) + basic_sal;
}
else if(basic_sal <= 5000)
{
System.out.println("hra = 10%  and  da = 110%");
gross_sal = basic_sal *(120/100) + basic_sal;
}
else if(basic_sal<=0)
System.out.println("Wrong Input!!!");
else
System.out.println("Wrong");
}
void display()
{
System.out.println("Gross  salary  is   "+gross_sal);
}
public static void main(String[] args)
{
salary ob = new salary();
ob.accept();
ob.gross();
ob.display();
}


}