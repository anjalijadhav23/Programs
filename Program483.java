import java.util.*;

class Program483
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String ");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        System.out.println(str.length());
        System.out.println(Arr.length);

        int Count =0;

        for(int i = 0; i< Arr.length; i++)
        {
            if((Arr[i]>='A')&&(Arr[i]<='Z'))
            {
                Arr[i]= (char)(Arr[i]+32);
            }
        }

        String output = Arr.toString();

        System.out.println(output);

    }
}