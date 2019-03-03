public class E01 {
    public static void main(String args[]){
        int [] a ={10,20,30,40},b[]={{1,2},{4,5,6,7}};
        b[0]=a;//b是个二维数组，组成这个二维数组的第一个一维数组被克隆为a
        b[0][1]=b[1][3];//组成b这个二维数组的第一个一维数组的第二个数字(20)用第二个一维数组的第四个数字(7)替换
        System.out.println(b[0][3]);//40
        System.out.println(a[1]);//a[]=10，7，30，40
    }
}
