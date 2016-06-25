public class prime
{
public static void main(String[] args)
{
int n = 10;
System.out.println("Prime numbers between 1 and " + n);
for(int i=1; i < 10; i++)
{
boolean isPrime = true;
for(int j=2; j < i ; j++)
{
if(i % j == 0)
{
isPrime = false;
break;
}
}
if(isPrime)
System.out.print(i + " ");
}
}
}
