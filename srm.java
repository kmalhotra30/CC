import system.util.*;
public class Istr
{
        int h[]=new int[200];
        int count(string s, int k)
        {
            for(int i='a';i<='z';i++)
                h[i]=0;
            /*for(int i=0;i<s.size();i++)
            {
                h[s[i]]++;
            }*/
            system.out.println(h['a'] + "\n" + h['b']);
            for(int i=0;i<k;i++)
            {
                int max=h[97],index=0;;
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
                calc+=pow(h[i],2);
            }
            return calc;

        }
        public static void main()
        {
               
        }
}

