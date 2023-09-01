// Java program to reverse the entered number. 

import java.util.Scanner;

class ReverseNumber{
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    
    System.out.print("Enter the number : ");
    String x = sc.next();
    int num = Integer.parseInt(x);
    int reversed = 0;
    
    System.out.println("Original Number: " + num);

    while(num != 0) {
      int digit = num % 10;
      reversed = reversed * 10 + digit;
      num /= 10;
    }
    System.out.println("Reversed Number: " + reversed);
  }
}
