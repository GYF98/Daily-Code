class CPU{
    private int speed;

    protected void setSpeed(int spd) {
        if(spd==2200)
        {
            speed=spd;
        }
        else
            System.out.println("Wrong Speed!");
    }

    public int getSpeed() {
        return speed;
    }
}

class HardDisk{
    private int amount;

    protected void setAmount(int amt){
        if(amt==200)
        {
            amount=amt;
        }
        else
            System.out.println("Wrong Disk Amount!");
    }

    public int getAmount(){
        return amount;
    }
}

class PC{
    private CPU cpu;
    private HardDisk HD;

    protected void setCPU(CPU c){
        cpu=c;
    }

    protected void setHardDisk(HardDisk h){
        HD=h;
    }

    public void show(){
        System.out.println("处理器速度："+cpu.getSpeed());
        System.out.println("硬盘容量："+HD.getAmount());
    }
}

public class E11 {
    static{
        System.out.println("设置PC中...");
    }
    public static void main(String argc[]){
        CPU cpu=new CPU();
        cpu.setSpeed(2200);
        HardDisk disk=new HardDisk();
        disk.setAmount(200);

        PC pc=new PC();
        pc.setCPU(cpu);
        pc.setHardDisk(disk);

        pc.show();

    }
}
