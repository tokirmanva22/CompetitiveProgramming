/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.BigInteger;


class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
        ArrayList<Integer> nums = new ArrayList<Integer>();
        while(sc.hasNext()) {
            int cur = sc.nextInt();
            if(cur == -999999) {
                BigInteger max = BigInteger.valueOf(cur);
                BigInteger prod = BigInteger.valueOf(0);
 
                for(int i = 0; i < nums.size(); i++) {
                    prod = BigInteger.valueOf(1);
                    for(int j = i; j < nums.size(); j++) {
                        prod = prod.multiply(BigInteger.valueOf(nums.get(j)));
                        if(prod.compareTo(max) == 1)
                            max = prod;
                    }
                }
                System.out.println(max.toString());
                nums.clear();
                continue;
            }
            nums.add(cur);
        }
	}
}
