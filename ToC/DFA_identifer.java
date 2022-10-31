import java.util.Scanner;


class DFA_identifer{

    public static int n=1;
    public static int length;
    public static boolean dead = true;

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
            if(dead){
                check_id(s.charAt(i));
            }    
        }    
    }

    public static void check_id(char c){
        if('A' <= c && c <= 'Z' && n==1 || 'a' <= c && c <= 'z' && n == 1 || c == '_' && n == 1){
            System.out.print("---->q1");
            n = n+1;
        }
        else if(('A' <= c && c == 'Z' || 'a' <= c && c <= 'z' || c == '_' || isDigit(c)) && n>1){
            n =n+1;
        }
        else{
            System.out.print("---->qd");
            dead = false;
        }
        
    }

    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the string : ");
        String id_check = sc.nextLine();
        System.out.println("           *****DFA*****\n");
        get_elements(id_check);
        sc.close();
    }
}