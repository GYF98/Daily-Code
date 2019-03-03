public class E00 {
    public static void main(String args[]){
        long[] a ={1,2,3,4};
        long[] b ={100,200};
        b=a;//将b作为a的副本
        System.out.println("数组b的长度:"+b.length);
        System.out.println(a[1]);
        for(int i=0;i<4;i++)
        {
            System.out.println(b[i]);
        }
    }
}
