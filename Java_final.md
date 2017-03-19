java中关于static、final关键字的认识总结
二、在重写任何类得hashcode方法时必须遵循以下几点：
1、在Java应用的同一次执行过程中，同一对象被多次调用，则他们的hashcode值必然相同。而对于同一个应用的两次不同的调用，它们的Hashcode值可以相同，也有可能不同。
2、对于两个对象来说，如果他们的equals方法比较返回true，那么这两个对象的hashcode必然相同。这也解释了为什么String类中，如果两个对象的equals方法相同，则他们的hashcode值一定相同。
3、对于两个对象来说，如果使用equals方法返回为false，则他们的hashcode的值有可能相等也可能不等，（如果不同会提高性能，因为在集合中类判断两个对象是否相等，如果其hashcode不等就直接不用判断equals方法了）
4、对于Object对象来说，不同的Object对象的hashcode是不同的，它们返回的是对象的地址，equals返回的也是对象的地址。所以在自己定义的类中如果要添加到集合对象中，最好是要重写hashcode和equals方法，不然会自动继承自Object类中的两个方法根据对象地址来判断。在重写自己定义的类时，通常是在类中的根据某个值如name.hashcode();来进行判断。

三、以HashSet 为例：
当我们使用HashSet时，hashCode()方法就会被得到调用，判断已经存储在集合中的对象的hashCode值是否与所增加。
对象的hashCode值一致，如果“不一致”则直接加进去（不用比较equals()提高效率），如果一致，则进行equals方法的比较，如果返回true，表明集合里面已经有这个对象，不能添加进去了。如果是false表是集合里面没有这个对象，则可以加进去。所以在重写hashcode()或者equals() 方法的任何一个方法时，必须重写另外一个。 
示例代码：
/** 
 * People 手工重写hashcode方法和equals方法 根据name来判断 两个对象是否相等。 
 */ 
class People { 
    private String name; 
    public People(String name) { 
        this.name = name; 
    } 
    @Override 
    public boolean equals(Object obj) { 
        //如果是自己  
        if(this==obj){ 
            return true ; 
        } 
        //如果是空  
        if(obj==null ){ 
            return false; 
        } 
        //比较两个People的名字是否相同  
        if(obj!=null && obj instanceof People){ 
            if(((People)obj).name.equals(this.name)) 
                return  true ; 
        } 
        return false; 
    } 
    @Override 
    public int hashCode() { 
        // String的hashcode本来就是用来比较两个字符是否相等  
        return name.hashCode(); 
    } 
}
.;%JAVA_HOME%\lib\dt.jar;%JAVA_HOME%\lib\tools.jar;%JAVA_HOME%\lib\JHDL1_0.jar;
static作用
?static关键字用来定义类层次的成员变量和成员方法；
?这种类层次的成员被类加载器装入后可以直接使用，不需要创建实例对象并且在内存中只有一个副本，所有对象共享；
?相对于类层次的成员对象层次成员只有在创建了对象之后才能使用，并且每个对象都有自己的副本
?凡是定义为static型的变量在内存中只有一个，所以加入定义了一个i变量，i的最终值取决于最后一次对它的操作......
?C 
[参考资料]http://zhidao.baidu.com/link?url=cPdu2WY3zmKyoTzNnlJQcDPSf5mapNvuxbXAZMrIuTPKNVEgAQMAeyFaQsqKFcwMyf26JszZbDUcNgtnT0tJ0q [参考书籍]java面向对象程序设计（范玫马骏编著）

http://blog.csdn.net/sweetanan888/article/details/8543537
final的作用

*final用来修饰成员之后意味着成员不可变，具体来说： 
?1.如果用final来修饰类， 则此类不能派生子类，相当于该类的进化终止了；
?2.如果修饰方法，则此方法在子类中不能被重写，此方法进化终止；
?3.如果修饰变量，变量的值则不能再修改（常量）；
?4.final类不能被继承，因此final类的成员方法没有机会被覆盖，默认都是final的。在设计类时候，如果这个类不需要有子类，类的实现细节不允许改变，并且确信这个类不会载被扩展，那么就设计为final类。
?5.如果一个类不允许其子类覆盖某个方法，则可以把这个方法声明为final方法。
?6.使用final方法的原因有二：  第一、把方法锁定，防止任何继承类修改它的意义和实现。
  第二、高效。编译器在遇到调用final方法时候会转入内嵌机制，大大提高执行效率

?C 
[以上内容最后三条引用自以下网站]http://lavasoft.blog.51cto.com/62575/18771/ Edit By MaHua Edit By MaHua

与edif文件相关的.java文件基本已经扣出来了，我等下上传到群里，你们可以下下来看看                  
 
接下来我们要做的是把文件里面的有关Xilinx和apps的文件删除，把与Xilinx 和apps相关的命令行注释掉，让EdifParser   run起来