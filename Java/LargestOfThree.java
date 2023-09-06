// Java program to find the largest of three numbers.

import java.util.Scanner;

class LargestOfThree{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter first number : ");
        String x = sc.next();
        int a = Integer.parseInt(x);
        
        System.out.print("Enter second number : ");
        String y = sc.next();
        int b = Integer.parseInt(y);
        
        System.out.print("Enter third number : ");
        String z = sc.next();
        int c = Integer.parseInt(z);

        if( a == b && b == c){
            System.out.println("All numbers are equal");
        }
        else if(a >= b && a >= c)
            System.out.println(a + " is the largest number among entered three numbers.");

        else if (b >= a && b >= c)
            System.out.println(b + " is the largest number among entered three numbers.");

        else
            System.out.println(c + " is the largest number among entered three numbers.");
    }
}
