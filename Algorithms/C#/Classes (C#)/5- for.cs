using System;

class Program
{
    static void Main()
    {
        Console.Write("Enter a number to see its multiplication table: ");

        // Reads the number provided by the user
        int number = int.Parse(Console.ReadLine());

        Console.WriteLine($"\nMultiplication table of {number}:");

        // For loop to calculate and display the multiplication table
        for (int i = 1; i <= 10; i++)
        {
            int result = number * i;
            Console.WriteLine($"{number} x {i} = {result}");
        }

        Console.WriteLine("\nEnd of the multiplication table!");
    }
}