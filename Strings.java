import java.util.*;
import java.lang.*;

public class Strings
{
    public static void main(String[] args)
    {
        String str="Java";
        String str1="Java";
        String str2=new String("Java");
        char c[]={'a','b','c','d'};
        String str3=new String(c);
        System.out.println(str3);
        byte b[]={65,66,67,68};// javap java.lang this command tells about what is there inside the java.lang

        String str4=new String(b);
        System.out.println(str4);
        String str5=new String(b,2,2);
        System.out.println(str5);
        System.out.println(str==str1);

        System.out.println(str);
        System.out.println(str1);
        System.out.println(str2);
    }
}
