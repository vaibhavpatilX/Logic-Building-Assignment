//NE*
import java.util.*;

class LB31_4
{
    public static void main(String[ ] arg)
	{
		LB31_4 c=new LB31_4();
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter a character : ");
		char in=sc.next( ).charAt(0);	 		
		c.findVowelOrNot(in);
	}

	void findVowelOrNot(char ch)
	{
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
		{
		System.out.println("Entered character "+ch+" is  Vowel"); 
		}
		return;		
	}
};