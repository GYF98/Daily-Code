import java.util.Scanner;

interface AveCalc{
    double Calculate(int arr[],int n);
}

class GymMatchMark implements AveCalc{
    int max=0;
    int min=100;
    int sum=0;

    public double Calculate(int arr[],int n){
        for(int i=0;i<n;i++)
        {
            if (arr[i] > max)
                max = arr[i];
            if (arr[i] < min)
                min = arr[i];

            sum = sum + arr[i];
        }
        sum=sum-max-min;
        return (1.0*sum)/(n-2);
    }
}

class AverageMark implements AveCalc {
    int sum = 0;

    public double Calculate(int arr[], int n) {
        for(int i=0;i<n;i++)
        {
            sum = sum + arr[i];
        }
        return (1.0 * sum) / n;
    }
}
public class Java6_1 {
        public static void main(String argc[]){
            double avemark=0.0;
            int choose;
            Scanner reader=new Scanner(System.in);

            System.out.println("1.计算体操选手的成绩");
            System.out.println("2.计算班级平均成绩：");
            System.out.print("请按数字键选择计算平均成绩的方法：");
            choose=reader.nextInt();

            if(choose==1)
            {
                AveCalc ac;
                int arr[]=new int[32];
                int n;
                System.out.print("请输入裁判的人数：");
                n=reader.nextInt();
                System.out.print("\n请输入各位裁判的评分：");
                for(int i=0;i<n;i++)
                {
                    arr[i]=reader.nextInt();
                }

                ac=new GymMatchMark();
                avemark=ac.Calculate(arr,n);
                System.out.println("去掉一个最高分和最低分后"+n+"名评委给出的平均分为"+avemark);
            }

            else if(choose==2)
            {
                AveCalc ac;
                int arr[]=new int[128];
                int n;
                System.out.print("请输入班级的人数：");
                n=reader.nextInt();
                System.out.print("\n请输入各位同学的分数：");
                for(int i=0;i<n;i++)
                {
                    arr[i]=reader.nextInt();
                }

                ac=new AverageMark();
                avemark=ac.Calculate(arr,n);
                System.out.println(n+"名同学的平均分为"+avemark);
            }

            else
                System.out.println("输入有误！");
        }
}
