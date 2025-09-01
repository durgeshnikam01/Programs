import java.util.Scanner;

public class ki {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter age of citizen: ");
        int age = sc.nextInt();

        if (age >= 0 && age <= 17) {
            System.out.println("Junior Citizen");
        } else if (age >= 18 && age <= 59) {
            System.out.println("Middle Citizen");
        } else if (age >= 60) {
            System.out.println("Senior Citizen");
        } else {
            System.out.println("Invalid age");
        }
    }
}