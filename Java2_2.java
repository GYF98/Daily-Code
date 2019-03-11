public class Java2_2 {
    public static void main(String argc[]){

        for(int i=101;i<=200;i=i+2){
            int j=2;
            for(j=2;j<=Math.sqrt(i);j++) {
                if (i % j == 0)
                    break;
            }
                if(j>Math.sqrt(i))
                    System.out.println("存在素数"+i);
        }
    }
}
