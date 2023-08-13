// Java program to find GCD of two numbers.

import java.util.Scanner;

class GCD{
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.print("Enter first number : ");
    String x = sc.next();
    int a = Integer.parseInt(x);
    System.out.print("Enter second number : ");
    String y = sc.next();
    int b = Integer.parseInt(y);
    
    int g = 1;

    for (int i = 1; i <= a && i <= b; ++i) {
      if (a % i == 0 && b % i == 0)
        g = i;
    }
    System.out.println("GCD of " + a +" and " + b + " is " + g);
  }
}