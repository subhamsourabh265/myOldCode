class number
{
java.util.Scanner sc = new java.util.Scanner(System.in);
int a,b,c;
void accept()
{
System.out.println("Enter the numbers");
a=sc.nextInt();
b=sc.nextInt();
}

void add()
{
c=a+b;
System.out.println("Sum = " +c);

}
public static void main(String[] args)
{
number ob = new number();
ob.accept();
ob.add();
}


}