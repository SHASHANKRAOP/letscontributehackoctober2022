import java.util.Scanner;

public class HelloWorld {

    public static void main(String[] args) {

        try (// Creates a reader instance which takes
                // input from standard input - keyboard
        Scanner r= new Scanner(System.in)) {
            System.out.println("Enter a number: ");

            // nextInt() reads the next integer from the keyboard
            int number = r.nextInt();

            // println() prints the following line to the output screen
            System.out.println("You entered: " + number);
        }
    }
}
