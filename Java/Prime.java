// Java program to check whether a number is prime or not.

import java.util.Scanner;

public class Prime{
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);

    System.out.print("Enter the number : ");
    String x = sc.next();
    int n = Integer.parseInt(x);

    boolean flag = false;
    for (int i = 2; i <= n / 2; ++i){
      if (n % i == 0) {
        flag = true;
        break;
      }
    }

    if (flag == false)
      System.out.println(n + " is a prime number.");
    else
      System.out.println(n + " is not a prime number.");
  }
}