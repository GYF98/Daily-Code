import java.util.Scanner;

public class E13 {
    public static void main(String argc[]){
        int a;
        int sum=0;
        Scanner reader=new Scanner(System.in);
        System.out.print("请输入数字，以确定其是否为完数：");
        a=reader.nextInt();

        for(int i=1;i<a;i++)
        {
            if(a%i==0)
            {
                sum=sum+i;
                System.out.println("存在"+a+"的因数："+i);
            }
        }

        if(sum==a)
            System.out.print("\n"+a+"是完数！");
        else
            System.out.print("\n"+a+"不是完数！");
    }

}
