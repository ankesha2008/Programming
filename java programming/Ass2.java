import java.util.Scanner;
public class Ass2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        float a=sc.nextFloat();
        float b=sc.nextFloat();
        float Remainder=a%b;
        System.out.println(Remainder);
        float Quotient=a/b;
        System.out.println(Quotient);
    }
}
