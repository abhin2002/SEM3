import java.util.Scanner;

class DFA_email{

    public static int length;
    public static boolean notDead = true;
    public static int statePass = 1;
    public static int n = 1;
    public static boolean special = false;

    public static boolean isDigit(char c){
        try{
            int check_int = Integer.parseInt((""+c));
            return true;
        }
        catch(NumberFormatException e){
            return false;
        }
    }

    public static void get_elements(String s){
        length = s.length();
        System.out.print("        q0");
        for(int i=0;i<length;i++){
            if(notDead){
                check_id(s.charAt(i));
            }    
        }
        if(special){
            System.out.print("---->qd");
        }   
    }

    public static void check_id(char c){
        if('A' <= c && c <= 'Z' || 'a' <= c && c <= 'z' || c == '_' || isDigit(c)){
            if(statePass == 1 && n == 1){
                System.out.print("---->q1");
                n = n+1;
                special = true;
            }
            else if(statePass == 2 && n == 2){
                System.out.print("---->q3");
                n = n+1;
                special = true;
            }
            else if(statePass == 3 && n == 3){
                statePass = statePass+1;
                System.out.print("---->q5");
                special = false;
            }
        }
        else if(c =='@' && statePass == 1){
            statePass = statePass+1;
            System.out.print("---->q2");
            special = true;
        }
        else if(c == '.' && statePass == 2){
            statePass = statePass+1;
            System.out.print("---->q4");
            special = true;
        }
        else{
            System.out.print("---->qd");
            notDead = false;
        }
    }

    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the email id");
        String email_id = sc.nextLine();
        get_elements(email_id);
    }
}