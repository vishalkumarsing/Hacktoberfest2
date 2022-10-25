package Methods;
import java.util.*;
public class Overloading
{
    public static int maxi(int first,int second){
        if(first>second)return first;
        else return second;
    }
    public static int maxi(int first,int second,int third){
        return (first>second&&first>third)?first:((second>third&&second>first)?second:third);
    }
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);

        int first=sc.nextInt();
        int second=sc.nextInt();
        int third= sc.nextInt();
        System.out.println(maxi(first,second));
        System.out.println(maxi(first,second,third));


    }

}
