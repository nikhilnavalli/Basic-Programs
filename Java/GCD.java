// Java program to find GCD of two numbers.

import java.util.Scanner;

class GCD{
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    System.out.print("Enter first number : ");
    String x = sc.next();
    int m = Integer.parseInt(x);
    System.out.print("Enter second number : ");
    String y = sc.next();
    int n = Integer.parseInt(y);
    
    int g = 1;

    for (int i = 1; i <= m && i <= n; ++i) {
      if (m % i == 0 && n % i == 0)
        g = i;
    }
    System.out.println("GCD of " + m +" and " + n + " is " + g);
  }
}
