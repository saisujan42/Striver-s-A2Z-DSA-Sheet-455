import java.util.*;
public class Main 
{
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int Even = 0, Odd = 0;
		while(n != 0)
		{
			int k = n % 10;
			if(k % 2 == 0)
				Even += k;
			else
				Odd += k;
			n /= 10;
		}
		System.out.println(Even + " " + Odd);
	}
}
