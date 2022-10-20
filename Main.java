import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        SinglyLinkedList1 obj = new SinglyLinkedList1();
        while(true){
            System.out.println("press 1 for insert");
            System.out.println("press 2 for delete");
            System.out.println("press 3 for traverse");
            System.out.println("press 4 for search");
            System.out.println("press 5 for exit");

            System.out.println("Enter your choice");
            Scanner sc = new Scanner(System.in);
            int choose = sc.nextInt();
            switch(choose){
                case 1:
                    obj.addNode();
                    break;
                case 2:
                    obj.deleteNode();
                    break;
                    
            }

        }

    }}
