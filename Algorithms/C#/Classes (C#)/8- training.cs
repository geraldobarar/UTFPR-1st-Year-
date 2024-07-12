using System;

class testando{
    
    static void Main (){
        
        bool res = 10<5;
        Console.WriteLine(res);
        
        int num1 = 5;
        int num2 = 3;
        bool res1 = num1>num2;
        Console.WriteLine(res1);
        
        bool res2 = num1!= num2;
        Console.WriteLine(res2);
        
        int num = 10;
        num = num+1;
        Console.WriteLine(num);
        
        int num3 = 10;
        num3 += 1;
        num3 ++;
        Console.WriteLine(num3);
        
        bool res3 = (num3 > num) | (10 < 5);
        Console.WriteLine(res3);
    }
    
}