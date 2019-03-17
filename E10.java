class AAA{
    static{
        System.out.println("我是类AAA中的静态块！");
    }
}
public class E10 {
    static{
        System.out.println("我是最先被执行的静态块！");
    }
    public static void main(String argc[]){
        AAA a=new AAA();
        System.out.println("了解static静态块");
    }
}
