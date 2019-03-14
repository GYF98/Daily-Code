import java.util.Scanner;

public class E08 {
    public static void main(String argc[]){
        int arr[]=new int [32];
        Scanner reader=new Scanner(System.in);

        int i=0;
        while(i!=7){
            System.out.print("请输入一个数：");
            arr[i]=reader.nextInt();
            i++;
        }

        for(int j:arr){
            System.out.print(j+" ");
        }
        System.out.println();

        for(int j=0;j<7;j++){//此处进行条件判定
            System.out.println("这是第 "+j+" 次循环，j的值没有超过7");
            System.out.println(arr[j]);
            System.out.println("这是此次循环的最后语句，j的值为"+j);
            //此处j增加1
        }

    }
}
