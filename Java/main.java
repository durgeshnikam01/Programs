
//import java.util.Scanner;

//public class main {
//    public static void main(String[] args) {
//     int a = 10;
//     int b = 5;
        
//     int result =(a*b) / (a-b);
//       System.out.println("(a*b)/(a-b) = " + result);

//  }   
//}
//question 1
//public class main{
//  public static void main(String[] args) {
//     int age = 20;
//  System.out.println("The age of rohan is ="+age +"years");

//    }
//}
// question 2

//import java.util.Scanner;
//public class main{
//  public static void main(String[] args) {
//        Scanner scanner= new Scanner(System.in);
//      System.out.print("Enter the radius of the circle: " );
//
 //   double redius  = scanner.nextDouble();

//      scanner.close();

        

//      double area = redius * redius;
//        System.out.println("Area of circle is="+area);
         
//   }
//}



//Question 3

//import java.util.Scanner;
//public class main{

//    public static void main(String[]args){
    
//    Scanner scanner= new Scanner(System.in);

//  System.out.println("Enter the number to print its multiplication table: ");
//    int number = scanner.nextInt();
     
//  scanner.close();
// System.out.println("Multiplication table of "+number+":");
//  for(int i =1;i<=10;i++) {
//       System.out.println(number + " x " + i + " = " + (number * i));
//   }
//  scanner .close();

//}

//}
//Question 4
import java.util.Scanner;
public class main{
    public static void main(String args[]) {
        System.out.println("Enter your age:");
        Scanner scanner = new Scanner(System.in);
        int age = scanner.nextInt();
       

        if(age>18){
            System.out.println("You are eligiable for voteing");
        }else{
            System.out.println("You are not eligiable for voteing");
    }
    System.out.println("Thank You!");
}
}