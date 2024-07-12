using System;

class Constantes{
    
    static void Main(){
        
        const int n1 = 10; //defini n1 como constante
        const string nome = "Geraldo";
        
        int n2 = 10;
        
        Console.WriteLine("Número:{0}\nNome:{1}", n1, nome);
        
        //n1 += 3;
        n2 += 3;
        Console.WriteLine("Número:{0}", n2);
        
    }
    
}