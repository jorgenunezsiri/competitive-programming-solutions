// Copyright (c) Jorge Nunez Siri. All rights reserved.
// Problem URL: https://coj.uci.cu/24h/problem.xhtml?pid=2422

import java.io.*;
import java.math.*;
import java.lang.*;
import java.util.*;

/**
 *
 * @author Jorge
 */
class MultiplicationLargeNumbers {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws java.lang.Exception
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String n1 = null;
        int t = Integer.parseInt(br.readLine());
        BigInteger termino = new BigInteger("0");
        while(t-- > 0)
        {
            n1 = br.readLine();
            String[] splited = n1.split("\\s");
            n1 = splited[0];
            String n2;
            n2 = splited[1];

            BigInteger b1 = new BigInteger(n1);
            BigInteger b2 = new BigInteger(n2);

            BigInteger resp = expMod(b1, termino, b2, new BigInteger("1000000000"));
            System.out.println(resp);
        }
    }
    public static BigInteger expMod(BigInteger base, BigInteger cero, BigInteger exp, BigInteger mod1)
    {
        BigInteger uno = new BigInteger("1");
        if(exp.compareTo(cero) <= 0)
        {
            return uno;
        }
        BigInteger baseSiguiente = (base.multiply(base)).mod(mod1);
        BigInteger expSiguiente = exp.divide(new BigInteger("2"));
        BigInteger resultado = expMod(baseSiguiente, cero, expSiguiente, mod1);
        if(exp.and(new BigInteger("1")).equals(uno))
        {
            resultado = (resultado.multiply(base)).mod(mod1);
        }
        return resultado;
    }
}
