// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://www.spoj.com/problems/JULKA/

import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.*;

class Main
{
    public static void main (String[] args) throws java.lang.Exception
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = 10;
        for(int i = 0; i < t; i++)
        {
            String n1 = br.readLine();
            String n2 = br.readLine();

            BigInteger b1 = new BigInteger(n1);
            BigInteger b2 = new BigInteger(n2);

            BigInteger y = b1.subtract(b2).divide(new BigInteger("2"));
            BigInteger x = y.add(b2);
            System.out.println(x);
            System.out.println(y);
        }
    }
}
