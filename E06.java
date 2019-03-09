import java.util.Scanner;

public class E06 {
    public static void main(String argc[]){
        int arr[]=new int[255];
        Scanner s= new Scanner(System.in);
        System.out.print("请输入数组的组成元素，以0作为结束标志：");

        int temp,i;
        double sum=0.0;

        for(i=0;i<=255;i++)
        {
            if(i==255)
                System.out.println("输入数量超过最大值");

            temp=s.nextInt();

            if(temp!=0)
            {
                arr[i]=temp;
                sum=sum+temp;
            }

            else
                break;
        }

        System.out.println("数组元素的和为："+sum);
        System.out.println("数组元素的平均值为："+(sum/i));
    }
}
