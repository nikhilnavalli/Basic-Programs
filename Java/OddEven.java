// Java progrm to check whether the entered number is even or odd.

import java.util.Scanner;

class OddEven{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter a number : ");
        String x = sc.next();
        int n = Integer.parseInt(x);

        if(n%2 == 0){
            System.out.println(n+" is an even number");
        }
        else{
            System.out.println(n+" is an odd number");
        }
    }
}