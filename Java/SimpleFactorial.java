// Java program to calculate factorial of a given number.

import java.util.Scanner;

class SimpleFactorial{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter a number : ");
        String x = sc.next();
        int n = Integer.parseInt(x);

        if(n < 0){
            System.out.print("Enter a non-negative number");
        }
        else if(n == 0 || n == 1){
            System.out.print("Factorial of "+n+" is : 1");
        }
        else{
            int fact = 1;
            for(int i=1; i<=n; i++){
                fact = fact * i;
            }
            System.out.print("Factorial of "+n+" is : "+fact);
        }
    }
}
