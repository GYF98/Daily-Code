public class E09 {
    public static void main(String argc[]){
        add(1,2,3,5);
        add(7,-1,0);
        add(5,3,8,-1,4);
    }

    static void add(int...x){//这里的x类似一个数组
        for(int i=0;i<x.length;i++){
            System.out.println(x[i]);
        }
    }
}
