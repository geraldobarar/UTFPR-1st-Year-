using System;

class BisectionMethod
{
    // Define the function for which we want to find the root
    static double Function(double x)
    {
        // Example function: f(x) = x^3 - x - 2
        return Math.Pow(x, 3) - x - 2;
    }

    // Bisection method implementation
    static double Bisection(double a, double b, double tolerance)
    {
        // Check if the function has opposite signs at the endpoints
        if (Function(a) * Function(b) >= 0)
        {
            throw new ArgumentException("The function must have opposite signs at a and b.");
        }

        double c = a; // Initialize the midpoint

        // Iterate until the interval is smaller than the tolerance
        while ((b - a) >= tolerance)
        {
            // Find the midpoint
            c = (a + b) / 2;

            // Check if the midpoint is the root
            if (Function(c) == 0.0)
            {
                break;
            }
            // Decide the new interval based on the sign of the function at the midpoint
            else if (Function(c) * Function(a) < 0)
            {
                b = c;
            }
            else
            {
                a = c;
            }
        }

        // Return the approximate root
        return c;
    }

    static void Main(string[] args)
    {
        // Define the interval [a, b] and the tolerance
        double a = 1.0;
        double b = 2.0;
        double tolerance = 0.0001;

        try
        {
            // Call the bisection method to find the root
            double root = Bisection(a, b, tolerance);
            Console.WriteLine("The approximate root is: " + root);
        }
        catch (ArgumentException e)
        {
            Console.WriteLine(e.Message);
        }
    }
}