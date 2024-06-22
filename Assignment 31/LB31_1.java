import java.util.*;

class LB31_1
{
    public static void main(String a[]) 
    {
        Scanner sobj= new Scanner(System.in); 
    
        System.out.print("Enter a string: ");  
        String str= sobj.nextLine();              
        
        CountX dobj = new CountX();

        int iRet = dobj.CountCapital(str);

        System.out.print("Capital letters are: "+iRet); 
    }
};

class CountX
{
    public int CountCapital(String str) 
    {   
        int iCnt = 0;

        for(int i = 0; i < str.length(); i++)
        {
            if((str.charAt(i) >= 'A') && (str.charAt(i) <= 'Z'))
            {
                iCnt++;
            }
        }
        return iCnt;
    }
};