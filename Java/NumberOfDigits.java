// Java program to count the number of digits in a number.

import java.util.Scanner;

public class NumberOfDigits{
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    
    System.out.print("Enter the number : ");
    String x = sc.next();
    int num = Integer.parseInt(x);

    int count = 0;

    while (num != 0) {
      num = num/10;
      ++count;
    }
    System.out.println("Number of digits: " + count);
  }
}