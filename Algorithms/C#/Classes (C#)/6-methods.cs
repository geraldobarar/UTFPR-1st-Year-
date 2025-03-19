using System;

class Program
{
    static void Main()
    {

        // Solicita os n�meros ao usu�rio
        Console.Write("Enter the first number: ");
        double num1 = double.Parse(Console.ReadLine());

        Console.Write("Enter the second number: ");
        double num2 = double.Parse(Console.ReadLine());

        // Chama os m�todos para realizar as opera��es
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

    // M�todo para adi��o
    static double Add(double a, double b)
    {
        return a + b;
    }

    // M�todo para subtra��o
    static double Subtract(double a, double b)
    {
        return a - b;
    }

    // M�todo para multiplica��o
    static double Multiply(double a, double b)
    {
        return a * b;
    }

    // M�todo para divis�o
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