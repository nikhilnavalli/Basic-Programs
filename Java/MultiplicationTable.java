// Java program to calculate multiplication table of a given number.

import java.util.Scanner;

class MultiplicationTable{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter the number : ");
        String x = sc.next();
        int n = Integer.parseInt(x);

        System.out.println("The multiplication table of "+n+" is");
        for(int i=1; i<=10; i++){
            System.out.println(n+" * "+i+" = "+n*i);
        }
    }
}