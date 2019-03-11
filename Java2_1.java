public class Java2_1 {
    public static void main(String argc[]){
        int n=1;
        int flag=1;
        double temp=0.0;

        while(n>0){
            temp=temp+flag*(1.0/n);

            if(Math.abs(flag*(1.0/n))<1e-6)
                break;

            flag=-1*flag;
            n=n+2;
        }

        System.out.println("PI的值为："+(4*temp));
    }
}
