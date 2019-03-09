import java.util.Scanner;

public class E05 {
    public static void main(String argc[]){
        Scanner s=new Scanner(System.in);
        System.out.print("请输入一个整数:");
        int a = s.nextInt();

        int sum=0;
        while(a>0)
        {
            sum=sum+a%10;
            a=a/10;
        }

        System.out.println("这个整数的各位数字之和是："+sum);
    }
}
