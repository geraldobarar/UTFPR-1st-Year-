/*
 * Newton-Raphson Method vs Bisection Method
 * 
 * The Newton-Raphson method is an iterative numerical technique used to find the roots of a real-valued function. 
 * It uses the function's derivative to approximate the root, making it faster and more efficient than the Bisection method 
 * when the initial guess is close to the actual root. However, it requires the function to be differentiable, and it may 
 * fail to converge if the initial guess is not sufficiently close to the root or if the derivative is zero at any point.
 * 
 * The Bisection method, on the other hand, is a bracketing method that repeatedly bisects an interval and selects a subinterval 
 * in which a root must lie. It is slower but more robust, as it guarantees convergence as long as the function is continuous 
 * and changes sign over the interval.
 * 
 * This program demonstrates the Newton-Raphson method to find the root of a function.
 */

using System;

class NewtonRaphson
{
    // Define the function for which we want to find the root
    static double Function(double x)
    {
        return x * x - 2; // Example: f(x) = x^2 - 2 (root is sqrt(2) ~ 1.4142)
    }

    // Define the derivative of the function
    static double Derivative(double x)
    {
        return 2 * x; // Derivative of f(x) = x^2 - 2 is f'(x) = 2x
    }

    // Newton-Raphson method implementation
    static double NewtonRaphson(double initialGuess, double tolerance, int maxIterations)
    {
        double x = initialGuess;
        for (int i = 0; i < maxIterations; i++)
        {
            double fx = Function(x);
            double dfx = Derivative(x);

            if (Math.Abs(fx) < tolerance) // Check if the function value is close enough to zero
            {
                Console.WriteLine($"Converged after {i} iterations.");
                return x;
            }

            if (dfx == 0) // Avoid division by zero
            {
                Console.WriteLine("Derivative is zero. Cannot continue.");
                return double.NaN;
            }

            x = x - fx / dfx; // Newton-Raphson formula
        }

        Console.WriteLine("Maximum iterations reached. No convergence.");
        return double.NaN;
    }

    static void Main(string[] args)
    {
        double initialGuess = 1.0; // Initial guess for the root
        double tolerance = 1e-6;   // Tolerance for convergence
        int maxIterations = 100;   // Maximum number of iterations

        double root = NewtonRaphson(initialGuess, tolerance, maxIterations);

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