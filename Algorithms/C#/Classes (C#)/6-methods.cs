using System;

class Program
{
    static void Main()
    {

        // Solicita os números ao usuário
        Console.Write("Enter the first number: ");
        double num1 = double.Parse(Console.ReadLine());

        Console.Write("Enter the second number: ");
        double num2 = double.Parse(Console.ReadLine());

        // Chama os métodos para realizar as operações
        double sum = Add(num1, num2);
        double difference = Subtract(num1, num2);
        double product = Multiply(num1, num2);
        double quotient = Divide(num1, num2);

        // Exibe os resultados
        Console.WriteLine($"\nResults:");
        Console.WriteLine($"{num1} + {num2} = {sum}");
        Console.WriteLine($"{num1} - {num2} = {difference}");
        Console.WriteLine($"{num1} x {num2} = {product}");
        Console.WriteLine($"{num1} / {num2} = {quotient}");
    }

    // Método para adição
    static double Add(double a, double b)
    {
        return a + b;
    }

    // Método para subtração
    static double Subtract(double a, double b)
    {
        return a - b;
    }

    // Método para multiplicação
    static double Multiply(double a, double b)
    {
        return a * b;
    }

    // Método para divisão
    static double Divide(double a, double b)
    {
        if (b == 0)
        {
            Console.WriteLine("Error: Division by zero is not allowed.");
            return 0;
        }
        return a / b;
    }
}