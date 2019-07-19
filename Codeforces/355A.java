// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://codeforces.com/problemset/problem/355/A
 
import java.io.*;
import java.math.*;

public class Main {

    public static int contar(String cadena)
    {
        int sum = 0;
        for(int i = 0; i < cadena.length(); i++)
        {
            sum += (cadena.charAt(i) - '0');
        }
        return sum;
    }

    public static int rec(String cadena)
    {
        int sum = contar(cadena);
        if(sum < 10)
            return sum;
        return rec(Integer.toString(sum));
    }

    public static void main(String[] args) throws java.lang.Exception
    {
        int k, d;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String s = null, res = null;
        s = br.readLine();
        String[] splited = s.split("\\s");
        k = Integer.parseInt(splited[0]);
        d = Integer.parseInt(splited[1]);
        if(d == 0 && k == 1) System.out.println("0");
        else if(d == 0 && k > 1) System.out.println("No solution");
        else
        {
            BigInteger start = new BigInteger("0");
            BigInteger termino = new BigInteger("0");
            if(k == 1)
            {
                termino = termino.add(new BigInteger("10"));
            }
            else
            {
                start = start.add(new BigInteger("1"));
                termino = termino.add(new BigInteger("1"));
                int i = 1;
                while(i < k)
                {
                    start = start.multiply(new BigInteger("10"));
                    termino = termino.multiply(new BigInteger("10"));
                    i++;
                }
                termino = termino.multiply(new BigInteger("10")).subtract(new BigInteger("1"));
            }

            Boolean encontrar = false;
            while(!encontrar || start.compareTo(termino) == 1)
            {
                String te = start.toString();
                if(rec(te) == d)
                {
                    encontrar = true;
                }
                start = start.add(new BigInteger("1"));
                res = te;
            }
            if(!encontrar) System.out.println("No solution");
            else System.out.println(res);
        }
    }
}
