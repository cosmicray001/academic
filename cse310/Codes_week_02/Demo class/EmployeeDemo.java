public class EmployeeDemo {
    public static void main(String[] args) {
        Employee e1 = new Employee();
        e1.name = "John";
        e1.ssn = "555-12-345";
        e1.emailAddress = "john@company.com";
        e1.yearOfBirth = 1994;
        
       // Mathod overloading
        e1.display();
        e1.display(20,10.0f);

        Employee e2 = new Employee();
        e2.name = "Tom";
        e2.ssn = "456-78-901";
        e2.emailAddress = "tom@gmail.com";
        e2.yearOfBirth = 1974;
        Employee e3=e2;
        System.out.println("Name: " + e1.name);
        System.out.println("SSN: " + e1.ssn);
        System.out.println("Email Address: " + e1.emailAddress);
        System.out.println("Year Of Birth: " + e1.yearOfBirth);
        
        System.out.println("\n");

        System.out.println("Name: " + e2.name);
        System.out.println("SSN: " + e2.ssn);
        System.out.println("Email Address: " + e2.emailAddress);
        System.out.println("Year Of Birth: " + e2.yearOfBirth);
        
        System.out.println("\n");

//        System.out.println("Name: " + e3.name);
//        System.out.println("SSN: " + e3.ssn);
//        System.out.println("Email Address: " + e3.emailAddress);
//        System.out.println("Year Of Birth: " + e3.yearOfBirth);
        
        

    }
}