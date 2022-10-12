package ArrayList;

import java.util.ArrayList;

public class Contact {
    private String name;
    private String phoneNo;

    public Contact(String name, String phoneNo) {
        this.name = name;
        this.phoneNo = phoneNo;
    }

    private ArrayList<String> details = new ArrayList<>();

    public String getName() {
        return name;
    }

    public String getPhoneNo() {
        return phoneNo;
    }

    private void addNumber(String number){
        details.add(number);
    }
    public static Contact createContact(String name, String phoneNo){
        return new Contact(name, phoneNo);
    }
}
