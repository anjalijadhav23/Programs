import java.util.*;

class MarvellousX
{
   public int CapCount(String s)
   {
      int iCnt=0;
      char Arr[]=s.toCharArray();

      for (int i = 0; i < s.length(); i++)
      {
         if((s.charAt(i)>='A')&&(s.charAt(i)<='Z'))
         {
            iCnt++;
         }
      }
      return iCnt;

   }
}
class Program276
{
   public static void main(String arg[])
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Please Enter String : ");
      String str=sobj.nextLine();

      MarvellousX obj=new MarvellousX();
      int iRet=obj.CapCount(str);
      System.out.println("Numberof Capital case letters are : "+iRet);
      
   }
}

