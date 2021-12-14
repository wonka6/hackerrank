/* Basic Output formatting. "%-15s" used for space digits that comes after string and "%03d" for digit which is less than 999.*/

import java.util.Scanner;


class Solution {

    public static void main(String[] args) {
            Scanner sc=new Scanner(System.in);
            System.out.println("================================");
            for(int i=0;i<3;i++){
                String s1=sc.next();
                int x=sc.nextInt();
                if(x < 999){
                    System.out.printf("%-15s%03d%n", s1, x);
                }else
                    System.out.printf("%-15s%d%n", s1, x);
            }
            System.out.println("================================");

    }
}