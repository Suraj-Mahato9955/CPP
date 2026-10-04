import java.util.*;

public class Arrays {
    public static void main(String[] args) {
        int[] marks = new int[3]; // int marks[] = new int[3]
        marks[0] = 32;
        marks[1] = 54;
        marks[2] = 43;

        // System.out.println(marks[0]);

        for (int i = 0; i < 3; i++) {
            System.out.println(marks[i]);
        }
    }

}
/*
 * int marks[] = new int{32, 54, 43};
 * for(int i=0; i<3; i++) {
 * System.out.println(marks[i]);
 * }
 */

public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int size = sc.nextInt();
    int number[] = new int[size];

    // for(int i=0; i<size; i++) {
    // System.out.println(number[i]); //if i giving an input 10 they print the 0
    // value ten times
    // }

    // input
    for (int i = 0; i < size; i++) {
        number[i] = sc.nextInt();
    }
    // output
    for (int i = 0; i < size; i++) { 
        System.out.println(number[i]);
    }
}
