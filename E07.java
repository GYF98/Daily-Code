import java.util.Scanner;

public class E07 {
    public static void main(String argc[]){
        Scanner s = new Scanner(System.in);

        int num;
        System.out.print("请输入一个三位整数：");
        num=s.nextInt();

        int a,b,c,temp;

        a=num/100;
        b=(num/10)%10;
        c=num%10;

        temp=a*a*a+b*b*b+c*c*c;
        if (temp==num)
            System.out.println("结果为"+temp+",是水仙花数");
        else
            System.out.println("结果为"+temp+",不是水仙花数");
    }
}
