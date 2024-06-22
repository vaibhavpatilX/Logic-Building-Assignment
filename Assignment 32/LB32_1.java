import java.util.*;
/// assignment 31 question 1

class Program1
{
    public static void main(String ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array that you want to create ");
        int iSize = sobj.nextInt();

        ArrayX aobj = new ArrayX(iSize);

        aobj.Accept();

        aobj.Display();
        int diff=aobj.Difference();
        System.out.println("Difference is :"+diff);
    }
}

class ArrayX
{
    public int Arr[];

    public ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter "+Arr.length + " elements ");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println("Enter the element no : "+ (iCnt+1));
            Arr[iCnt] = sobj.nextInt();
        
        }
    }

    public void Display()
    {
        System.out.println("Elements of array are : ");

        for(int iCnt =0; iCnt < Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }

        System.out.println();
    }
    public int Difference(int Arr[])
    {
       for(int icnt1=0; icnt1<Arr.length; icnt1++)
       {
         if(Arr[icnt1]%2==0)
         {
           int eSum=eSum+icnt1;
         }
         else
         {
           int oddSum=oddSum+icnt1;
         }
       }
       return eSum-oddSum;
    }
}