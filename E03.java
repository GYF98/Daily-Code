public class E03 {
    public static void main(String argc[]){
        int a,b,c;//赋值时，integer类型向下兼容character类型
        a='你';
        b='我';
        c='他';
        System.out.println(a+"\t"+b+"\t"+c);
    }
}
