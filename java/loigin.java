import java.io.*;
import java.util.*;
class login
{
public static void main(String[] args)
{
Scanner sc = new Scanner(System.in);

while(true)
{
System.out.println("Welcome to Java ");
System.out.println("Type 1 for Register;  2 for Login; 3 for Exit");
int a = sc.nextInt();
switch(a)

{
case 1:
register();
break;
case 2:
login();
break;
case 3:
System.exit(0);
break;
default:
System.out.println("Wrong Id and Password");
}
}


}
}
class demo
{
int c;

console cnsl = null;
String name = null;
String userid = null;
char[] password ;

cnsl = System.console();
void register()
{
File writer = new FileWriter("E:\\java.txt",true);
BufferWriter bw = new BufferWriter(writer);
try
{
name = cnsl.readLine("name: ");
bw.write(name);
bw.write(",");
userid = cnsl.readLine("userid ");
bw.write(userid);
bw.write(",");
password = cnsl.readPassword("Enter the password");
bw.write(password);
bw.write(System.getProperty("line.Separator "));

}
catch(Exception e)
{
e.printStackTrace();
}
}
void login()
{
name = cnsl.readLine("Enter your name: ");
password = cnsl.readPassword("Enter the password");
String thisLine = null;
try{
FileReader reader = FileReader("E:\\java.txt");
BufferReader br = new BufferReader(reader);
while((thisLine= br.readLine()) !=null)
{
String[] values = thisLine.split(",");

}
}

}
}