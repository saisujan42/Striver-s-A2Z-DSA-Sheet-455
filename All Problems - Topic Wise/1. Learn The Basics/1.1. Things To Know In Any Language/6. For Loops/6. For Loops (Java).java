import java.util.*;
public class Solution 
{
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		if(n == 1 || n == 2)
			System.out.println(1);
		else
		{
			int a = 1, b = 1, c = 2;
			for(int i = 3; i <= n; i++)
			{
				c = a + b;
				a = b;
				b = c;
			}
			System.out.println(c);
		}
	}

}
