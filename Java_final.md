java�й���static��final�ؼ��ֵ���ʶ�ܽ�
��������д�κ����hashcode����ʱ������ѭ���¼��㣺
1����JavaӦ�õ�ͬһ��ִ�й����У�ͬһ���󱻶�ε��ã������ǵ�hashcodeֵ��Ȼ��ͬ��������ͬһ��Ӧ�õ����β�ͬ�ĵ��ã����ǵ�Hashcodeֵ������ͬ��Ҳ�п��ܲ�ͬ��
2����������������˵��������ǵ�equals�����ȽϷ���true����ô�����������hashcode��Ȼ��ͬ����Ҳ������ΪʲôString���У�������������equals������ͬ�������ǵ�hashcodeֵһ����ͬ��
3����������������˵�����ʹ��equals��������Ϊfalse�������ǵ�hashcode��ֵ�п������Ҳ���ܲ��ȣ��������ͬ��������ܣ���Ϊ�ڼ��������ж����������Ƿ���ȣ������hashcode���Ⱦ�ֱ�Ӳ����ж�equals�����ˣ�
4������Object������˵����ͬ��Object�����hashcode�ǲ�ͬ�ģ����Ƿ��ص��Ƕ���ĵ�ַ��equals���ص�Ҳ�Ƕ���ĵ�ַ���������Լ�������������Ҫ��ӵ����϶����У������Ҫ��дhashcode��equals��������Ȼ���Զ��̳���Object���е������������ݶ����ַ���жϡ�����д�Լ��������ʱ��ͨ���������еĸ���ĳ��ֵ��name.hashcode();�������жϡ�

������HashSet Ϊ����
������ʹ��HashSetʱ��hashCode()�����ͻᱻ�õ����ã��ж��Ѿ��洢�ڼ����еĶ����hashCodeֵ�Ƿ��������ӡ�
�����hashCodeֵһ�£��������һ�¡���ֱ�Ӽӽ�ȥ�����ñȽ�equals()���Ч�ʣ������һ�£������equals�����ıȽϣ��������true���������������Ѿ���������󣬲�����ӽ�ȥ�ˡ������false���Ǽ�������û�������������Լӽ�ȥ����������дhashcode()����equals() �������κ�һ������ʱ��������д����һ���� 
ʾ�����룺
/** 
 * People �ֹ���дhashcode������equals���� ����name���ж� ���������Ƿ���ȡ� 
 */ 
class People { 
    private String name; 
    public People(String name) { 
        this.name = name; 
    } 
    @Override 
    public boolean equals(Object obj) { 
        //������Լ�  
        if(this==obj){ 
            return true ; 
        } 
        //����ǿ�  
        if(obj==null ){ 
            return false; 
        } 
        //�Ƚ�����People�������Ƿ���ͬ  
        if(obj!=null && obj instanceof People){ 
            if(((People)obj).name.equals(this.name)) 
                return  true ; 
        } 
        return false; 
    } 
    @Override 
    public int hashCode() { 
        // String��hashcode�������������Ƚ������ַ��Ƿ����  
        return name.hashCode(); 
    } 
}
.;%JAVA_HOME%\lib\dt.jar;%JAVA_HOME%\lib\tools.jar;%JAVA_HOME%\lib\JHDL1_0.jar;
static����
?static�ؼ��������������εĳ�Ա�����ͳ�Ա������
?�������εĳ�Ա���������װ������ֱ��ʹ�ã�����Ҫ����ʵ�����������ڴ���ֻ��һ�����������ж�����
?��������εĳ�Ա�����γ�Աֻ���ڴ����˶���֮�����ʹ�ã�����ÿ���������Լ��ĸ���
?���Ƕ���Ϊstatic�͵ı������ڴ���ֻ��һ�������Լ��붨����һ��i������i������ֵȡ�������һ�ζ����Ĳ���......
?C 
[�ο�����]http://zhidao.baidu.com/link?url=cPdu2WY3zmKyoTzNnlJQcDPSf5mapNvuxbXAZMrIuTPKNVEgAQMAeyFaQsqKFcwMyf26JszZbDUcNgtnT0tJ0q [�ο��鼮]java������������ƣ���õ��������

http://blog.csdn.net/sweetanan888/article/details/8543537
final������

*final�������γ�Ա֮����ζ�ų�Ա���ɱ䣬������˵�� 
?1.�����final�������࣬ ����಻���������࣬�൱�ڸ���Ľ�����ֹ�ˣ�
?2.������η�������˷����������в��ܱ���д���˷���������ֹ��
?3.������α�����������ֵ�������޸ģ���������
?4.final�಻�ܱ��̳У����final��ĳ�Ա����û�л��ᱻ���ǣ�Ĭ�϶���final�ġ��������ʱ���������಻��Ҫ�����࣬���ʵ��ϸ�ڲ�����ı䣬����ȷ������಻���ر���չ����ô�����Ϊfinal�ࡣ
?5.���һ���಻���������า��ĳ������������԰������������Ϊfinal������
?6.ʹ��final������ԭ���ж���  ��һ���ѷ�����������ֹ�κμ̳����޸����������ʵ�֡�
  �ڶ�����Ч������������������final����ʱ���ת����Ƕ���ƣ�������ִ��Ч��

?C 
[���������������������������վ]http://lavasoft.blog.51cto.com/62575/18771/ Edit By MaHua Edit By MaHua

��edif�ļ���ص�.java�ļ������Ѿ��۳����ˣ��ҵ����ϴ���Ⱥ����ǿ�������������                  
 
����������Ҫ�����ǰ��ļ�������й�Xilinx��apps���ļ�ɾ��������Xilinx ��apps��ص�������ע�͵�����EdifParser   run����