// Java program to swap the values of two variables without using third variable.

import java.util.Scanner;

class SwapTwoVariables{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter first number : ");
        String x = sc.next();
        int a = Integer.parseInt(x);
        System.out.print("Enter second number : ");
        String y = sc.next();
        int b = Integer.parseInt(y);

        System.out.println("Before swapping the values : "+ a +", "+b);

        a = a + b;
        b = a - b;
        a = a - b;

        System.out.println("After swapping the values : "+ a +", "+b);
    }
}