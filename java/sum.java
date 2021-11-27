class sum
{
java.util.Scanner s = new java.util.Scanner(System.in);
int a,b,c,d,e,sum;
float avg;
void accept()
{
System.out.println("Enter  the  numbers");
a=s.nextInt();
b=s.nextInt();
c=s.nextInt();
d=s.nextInt();
e=s.nextInt();
}

void process()
{
sum=a+b+c+d+e;
avg=(float)sum/5;
}

void display()
{
System.out.println("Sum  of  the 5  numbers is   "   +sum);
System.out.println("Average  of  the  numbers  is  "  +avg);
}

public static void main(String[] args)
{
sum o = new sum();
o.accept();
o.process();
o.display();
}


}