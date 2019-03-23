class Person{
    String name;
    int age;
    char sex;

    Person(String name,int age,char sex)
    {
        this.name=name;
        this.age=age;
        this.sex=sex;
    }

    String Show(){
        String personInfo=name+" "+age+" "+sex+" ";
        return personInfo;
    }
}

class Student extends Person{
    int id;
    Student(String name,int age,char sex,int id)
    {
        super(name,age,sex);
        this.id=id;
    }

    String Show(){
        String studentInfo=super.Show();
        return studentInfo+id;
    }

}

class Teacher extends Person{
    String course;
    Teacher(String name,int age,char sex,String course)
    {
        super(name,age,sex);
        this.course=course;
    }

    String Show(){
        String teacherInfo=super.Show();
        return teacherInfo+course;
    }

}

public class PersonApp {
    public static void main(String arc[]){
        String info;

        Person person=new Person("孙笑川",28,'男');
        info=person.Show();
        System.out.println(info);

        Student student=new Student("明凯",25,'男',4396);
        info=student.Show();
        System.out.println(info);

        Teacher teacher=new Teacher("大司马",30,'男',"语文");
        info=teacher.Show();
        System.out.println(info);
    }

}
