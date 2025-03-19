/*
 * Secant Method
 * 
 * The Secant method is an iterative numerical technique used to find the roots of a real-valued function. 
 * It is similar to the Newton-Raphson method but does not require the computation of the derivative of the function. 
 * Instead, it approximates the derivative using a finite difference based on two initial guesses. 
 * 
 * The method works by drawing a secant line between two points on the function and finding the intersection of this line 
 * with the x-axis. This intersection becomes the next approximation of the root. The process is repeated until the root is 
 * found within a specified tolerance or the maximum number of iterations is reached.
 * 
 * The Secant method is faster than the Bisection method but may not always converge if the initial guesses are not close 
 * to the actual root or if the function is not well-behaved.
 * 
 * This program demonstrates the Secant method to find the root of a function.
 */

using System;

class SecantMethod
{
    // Define the function for which we want to find the root
    static double Function(double x)
    {
        return x * x - 2; // Example: f(x) = x^2 - 2 (root is sqrt(2) ~ 1.4142)
    }

    // Secant method implementation
    static double Secant(double x0, double x1, double tolerance, int maxIterations)
    {
        double x2;
        for (int i = 0; i < maxIterations; i++)
        {
            double fx0 = Function(x0);
            double fx1 = Function(x1);

            if (Math.Abs(fx1) < tolerance) // Check if the function value is close enough to zero
            {
                Console.WriteLine($"Converged after {i} iterations.");
                return x1;
            }

            if (Math.Abs(fx1 - fx0) < tolerance) // Avoid division by a very small number
            {
                Console.WriteLine("Difference between function values is too small. Cannot continue.");
                return double.NaN;
            }

            x2 = x1 - fx1 * (x1 - x0) / (fx1 - fx0); // Secant formula
            x0 = x1;
            x1 = x2;
        }

        Console.WriteLine("Maximum iterations reached. No convergence.");
        return double.NaN;
    }

    static void Main(string[] args)
    {
        double x0 = 1.0; // First initial guess
        double x1 = 2.0; // Second initial guess
        double tolerance = 1e-6; // Tolerance for convergence
        int maxIterations = 100; // Maximum number of iterations

        double root = Secant(x0, x1, tolerance, maxIterations);

        if (!double.IsNaN(root))
        {
            Console.WriteLine($"Approximate root: {root}");
        }
        else
        {
            Console.WriteLine("Failed to find a root.");
        }
    }
}