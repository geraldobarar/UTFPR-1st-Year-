using System;

class matriz{
    
    static void Main(){
        
        int tam;
        Console.WriteLine("Qual a ordem da matriz:");
        tam = int.Parse(Console.ReadLine());
        
        
        int [,]matriz = new int[tam,tam];
        int []dp = new int[tam];
        int []ds = new int[tam];
        
        for (int i = 0; i< tam; i++){
            
            for (int j = 0; j< tam; j++){
                
                Console.WriteLine("Qual é o elemento {0}{1}:", i, j);
                matriz[i,j] = int.Parse(Console.ReadLine());
                
            }
        }
        
        Console.WriteLine("Matriz\n");
        
        for (int i = 0; i < tam; i++){
            
            for (int j=0; j<tam; j++){
                
                Console.Write("{0}\t", matriz[i, j]);
                
            }
            
            Console.WriteLine("\n");
            
        }
        
        Console.WriteLine("Diagona Principal");
        
        for (int i=0; i< tam; i++){
            
            for (int j=0; j< tam; j++){
                
                if (i == j){
                    
                    dp[i] = matriz[i, j];
                    Console.WriteLine("{0}", dp[i]);
                }
                
            }
        }
        
        Console.WriteLine("Diagonal Secundária");
        
        for (int i = 0; i < tam; i++){
            
            for (int j = tam - 1; j >= 0; j--){
                
                if (i + j == tam - 1){

                    ds[i] = matriz[i, j];
                    Console.WriteLine("{0}", ds[i]);                    
                    
                }
            }
        }
    }
}