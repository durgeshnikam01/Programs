import java.util.*;
public class subtract { 
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter First Number:");
        int num1 = scanner.nextInt();
        System.out.println("Enter Second Number:");
        int num2 = scanner.nextInt();
        int sub = num2 - num1;
        System.out.println("The Substraction is :"+sub);
    }
}