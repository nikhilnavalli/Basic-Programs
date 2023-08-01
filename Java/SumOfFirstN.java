//Java program to calculate sum of first N natural numbers.

import java.util.Scanner;

class SumOfFirstN{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter a number : ");
        String x = sc.next();
        int n = Integer.parseInt(x);

        int sum = 0;
        for(int i=1; i<=n; i++){
            sum += i;
        }
        System.out.println("The sum of first "+n+" natural numbers is = "+sum);
    }
}