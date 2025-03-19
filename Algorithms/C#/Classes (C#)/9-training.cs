using System;

class Program
{
    static void Main()
    {
        // Simulate a login system
        Console.WriteLine("Welcome to the Multiplication Table Generator!");
        bool isLoggedIn = Login();

        // Check if the login was successful
        if (isLoggedIn)
        {
            Console.WriteLine("\nLogin successful! Let's generate some multiplication tables.");

            // Main loop to allow the user to generate multiple multiplication tables
            while (true)
            {
                Console.Write("\nEnter a number to generate its multiplication table (or type 'exit' to quit): ");
                string userInput = Console.ReadLine();

                // Check if the user wants to exit
                if (userInput.ToLower() == "exit")
                {
                    Console.WriteLine("Thank you for using the Multiplication Table Generator. Goodbye!");
                    break;
                }

                // Try to parse the input as a number
                if (int.TryParse(userInput, out int number))
                {
                    // Generate the multiplication table using a method
                    GenerateMultiplicationTable(number);
                }
                else
                {
                    Console.WriteLine("Invalid input. Please enter a valid number or type 'exit' to quit.");
                }
            }
        }
        else
        {
            Console.WriteLine("Login failed. Access denied.");
        }
    }

    // Method to simulate the login process
    static bool Login()
    {
        int maxAttempts = 3; // Maximum number of login attempts

        for (int attempt = maxAttempts; attempt > 0; attempt--)
        {
            Console.Write("Enter your username: ");
            string username = Console.ReadLine();

            Console.Write("Enter your password: ");
            string password = Console.ReadLine();

            // Check if the credentials are correct
            if (username == "geraldo" && password == "1234")
            {
                return true; // Successful login
            }
            else
            {
                Console.WriteLine($"Incorrect credentials. {attempt - 1} attempts remaining.");
            }
        }

        return false; // Login failed after all attempts
    }

    // Method to generate the multiplication table of a number
    static void GenerateMultiplicationTable(int number)
    {
        Console.WriteLine($"\nMultiplication table of {number}:");

        for (int multiplier = 1; multiplier <= 10; multiplier++)
        {
            int result = number * multiplier;
            Console.WriteLine($"{number} x {multiplier} = {result}");
        }
    }
}