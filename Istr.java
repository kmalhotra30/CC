import java.util.*;
public class Istr
{
        int h[]=new int[200];
        int count(String s, int k)
        {
            for(int i='a';i<='z';i++)
                h[i]=0;
            for(int i=0;i<s.length();i++)
            {
                char a=s.charAt(i);
                int b=(int)a;
                h[b]++;
            }
            //System.out.println(h['a'] + "\n" + h['b']);
            for(int i=0;i<k;i++)
            {
                int max=h['a'],index='a';;
                for(int j='a';j<='z';j++)
                {
                    if(h[j]>max)
                     {
                         max=h[j];
                         index=j;
                     }
                }
                h[index]--;

            }
            int calc=0;
            for(int i='a';i<='z';i++)
            {
                calc+=Math.pow(h[i],2);
            }
            return calc;

        }
        /*public static void main(String args[])
        {
               Istr i=new Istr();
               System.out.println(i.count("abacaba",0));
        } */
}

