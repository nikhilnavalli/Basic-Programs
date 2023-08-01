//Java program to perform simple arithmetic operations.

import java.util.Scanner;

class Arithmetic{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter first number : ");
        String x = sc.next();
        int a = Integer.parseInt(x);
        System.out.print("Enter second number : ");
        String y = sc.next();
        int b = Integer.parseInt(y);

        System.out.println("-------------------------------------------");
        System.out.println("The addition of "+a+" and "+b+" is : "+ (a+b));
        System.out.println("The subtraction of "+a+" and "+b+" is : "+ (a-b));
        System.out.println("The multiplication of "+a+" and "+b+" is :"+ (a*b));
        System.out.println("The division of "+a+" and "+b+" is : "+ (a/b));
        System.out.println("-------------------------------------------");
    }
}