import java.util.Scanner;

public class Main {
    public static int Maximum(int x, int y) {
        return Math.max(x, y);
    }

    public static void Swap(int[] arr) {
        int temp = arr[0];
        arr[0] = arr[1];
        arr[1] = temp;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int test, a, b, r;
        test = scanner.nextInt();
        a = scanner.nextInt();
        b = scanner.nextInt();
        switch (test) {
            case 1:
                r = Maximum(a, b);
                System.out.println(r);
                break;
            case 2:
                int[] arr = {a, b};
                Swap(arr);
                System.out.println(arr[0] + " " + arr[1]);
                break;
            default:
                System.out.println("Invalid test option");
        }
    }
}

