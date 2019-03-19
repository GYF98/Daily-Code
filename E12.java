import java.util.Scanner;

public class E12 {
    public static double calculateMaxNum(double arr[]){
        double max=0.0;
        for(int i=0;i<arr.length;i++)
        {
            if(arr[i]==0)
                break;
            else
            {
                if(arr[i]>max)
                    max=arr[i];
                else
                    continue;
            }
        }
        return max;

    }
    public static void main(String argc[]){
        double maxnum=0.0;
        double arr[]=new double[256];
        Scanner reader=new Scanner(System.in);
        System.out.print("请输入一些数并以0作为结束的信号，本程序将判断这些数的最大值：");
        for(int i=0;i<=256;i++)
        {
            double temp;
            temp=reader.nextDouble();
            if(temp==0)
                break;
            else
                arr[i]=temp;
        }

        maxnum=calculateMaxNum(arr);

        System.out.println("最大数为"+maxnum);
    }

}
