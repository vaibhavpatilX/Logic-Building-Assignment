import java.util.*;

class LB31_2
{
    public static void main(String a[]) 
    {
        Scanner sobj= new Scanner(System.in); 
    
        System.out.print("Enter a string: ");  
        String str= sobj.nextLine();              
        
        CountX dobj = new CountX();

        int iRet = dobj.CountSmall(str);

        System.out.print("Small letters count are: "+iRet); 
    }
};

class CountX
{
    public int CountSmall(String str) 
    {   
        int iCnt = 0;

        for(int i = 0; i < str.length(); i++)
        {
            if((str.charAt(i) >= 'a') && (str.charAt(i) <= 'z'))
            {
                iCnt++;
            }
        }
        return iCnt;
    }
};