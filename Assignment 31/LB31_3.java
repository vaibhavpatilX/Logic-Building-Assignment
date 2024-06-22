import java.util.*;

class LB31_3
{
    public static void main(String a[]) 
    {
        Scanner sobj= new Scanner(System.in); 
    
        System.out.print("Enter a string: ");  
        String str= sobj.nextLine();              
        
        StringDemo dobj = new StringDemo();

        int iRet1 = dobj.CountCapital(str);
        int iRet2 = dobj.CountSmall(str);

        int Result = iRet2-iRet1;
        System.out.print("Count Difference are: "+Result); 
    }
};

class StringDemo
{
    public int CountCapital(String str) 
    {   
        int iCnt1 = 0;

        for(int i = 0; i < str.length(); i++)
        {
            if((str.charAt(i) >= 'A') && (str.charAt(i) <= 'Z'))
            {
                iCnt1++;
            }
        }
        return iCnt1;
    }
    public int CountSmall(String str) 
    {   
        int iCnt2 = 0;

        for(int i = 0; i < str.length(); i++)
        {
            if((str.charAt(i) >= 'a') && (str.charAt(i) <= 'z'))
            {
                iCnt2++;
            }
        }
        return iCnt2;
    }
};