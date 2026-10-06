/*import java.util.Scanner;
public class Practice {
    static float average(float a, float b, float c) {
        return (a + b + c)/3;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter three numbers:");
        float a = sc.nextFloat();
        float b = sc.nextFloat();
        float c = sc.nextFloat();

        float result = average(a, b, c);

        System.out.println("Average = " + result);

        sc.close();
    }
}*/
import java.util.Scanner;
public class Practice {
    static int sumOddNumbers(int n) {
        int sum = 0;
        for(int i=1; i<=n; i++) {
            if(i % 2 != 0){
                sum = sum + i;

            }
        }
        return sum;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number : ");
        int n = sc.nextInt();

        int result = sumOddNumbers(n);
        System.out.println("sum of odd numbers = " + result);

        sc.close();

    }
}
