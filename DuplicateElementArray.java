import java.util.Arrays;
import java.util.Scanner;
public class DuplicateElementArray
{
    public static void main(String[] args)
    {
        int k=0;
        int[] arr = new int[10];
        for(int i=0; i<=9; i++)
        {
            Scanner sc = new Scanner(System.in);
            System.out.println("Enter an integer:");
            int j = sc.nextInt();
            arr[i] = j;
        }
//        arr[0]=10;
//        arr[1]=20;
//        arr[2]=30;
//        arr[3]=40;
//        arr[4]=30;
//        arr[5]=20;
//        arr[6]=50;
//        arr[6]=60;
//        arr[7]=70;
//        arr[8]=80;
//        arr[9]=90;
        for(int i=0; (i<= 9) ;i++)
        {
            for(int j=i+1; j<= (9); j+=1)
            {
                if (arr[i] == arr[j])
                {
                    k=k+1;
                    System.out.println("Element " + arr[i] + " " + "Duplicated at location " + (j + 1));
                }
            }
        }
        if(k<1)
            System.out.println("No Duplicate element found...");
        System.out.println(Arrays.toString(arr));
    }
}
