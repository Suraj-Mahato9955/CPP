import java.util.Scanner;

/*public class Strings {
    public static void main(String[] args) {        Output--- suraj mahato
                                                  Your name is : suraj mahato
        Scanner sc = new Scanner(System.in);
        String name = sc.nextLine();
        System.out.println("Your name is : " + name);
    }
} */

//------------------------------------------------------

/*public class Strings {
    public static void main(String[] args) {
                                                     //output---- Tony Stark
                                                        //       10
        // Concatenation
        String firstName = "Tony";
        String lastName = "Stark";
        String fullName = firstName + " " + lastName;
        System.out.println(fullName);
        System.out.println(fullName.length());

        //charAt
        for(int i=0; i<fullName.length(); i++) {            --- 10  
            System.out.println(fullName.charAt(i));             t o n y  s t a r k
        }
    }
}*/ 

//--------------Compare two strings-------------
public class Strings {     public static void main(String[] args) {
        // compare
        String name1 = "Tony";
        String name2 = "stark";

        //1 s1 > s2 : +ve value
        //2 s1 < s2 : 0
        //3 s1 == s2 : -ve value

        if(name1.compareTo(name2) == 0) {
            System.out.println("Strings are equal");

        } else {
            System.out.println("String are not equal");
        }
    }
}
