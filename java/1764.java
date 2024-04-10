import java.util.*;

class Main {
    
    private static final HashSet<String> s = new HashSet<>();
    private static final List<String> cc = new ArrayList<>();
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String ipt = scanner.nextLine();
        for(int i=0;i<Integer.parseInt(ipt.split(" ")[0]); i++) {
            s.add(scanner.nextLine());
        }
        
        for(int i=0;i<Integer.parseInt(ipt.split(" ")[1]);i++) {
            String ci = scanner.nextLine();
            if(s.contains(ci)) {
                cc.add(ci);
            }
        }
        Collections.sort(cc);
        System.out.println(cc.size());
        for(String l : cc) {
            System.out.println(l);
        }
    }
}
