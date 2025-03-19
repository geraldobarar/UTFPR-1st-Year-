/*
 * Jacobi Method
 * 
 * The Jacobi method is an iterative numerical technique used to solve a system of linear equations. 
 * It is particularly useful for large, diagonally dominant systems. The method works by decomposing the coefficient matrix A 
 * into the sum of a diagonal matrix D and the remainder R (A = D + R). The system of equations Ax = b is then rewritten as:
 * 
 *   x = D^(-1) * (b - R * x)
 * 
 * Starting with an initial guess for x, the method iteratively updates the solution until convergence is achieved.
 * 
 * The Jacobi method is simple to implement but may converge slowly for some systems. It is guaranteed to converge if the matrix A 
 * is strictly diagonally dominant or symmetric and positive definite.
 * 
 * This program demonstrates the Jacobi method to solve a system of linear equations.
 */

using System;

class JacobiMethod
{
    // Solve the system Ax = b using the Jacobi method
    static double[] Jacobi(double[,] A, double[] b, double tolerance, int maxIterations)
    {
        int n = b.Length;
        double[] x = new double[n]; // Initial guess (can be zeros or any approximation)
        double[] xNew = new double[n]; // Stores the updated solution

        for (int iteration = 0; iteration < maxIterations; iteration++)
        {
            for (int i = 0; i < n; i++)
            {
                double sum = 0.0;
                for (int j = 0; j < n; j++)
                {
                    if (i != j)
                    {
                        sum += A[i, j] * x[j];
                    }
                }
                xNew[i] = (b[i] - sum) / A[i, i]; // Update the solution
            }

            // Check for convergence
            double error = 0.0;
            for (int i = 0; i < n; i++)
            {
                error += Math.Abs(xNew[i] - x[i]);
            }

            if (error < tolerance) // If the solution has converged
            {
                Console.WriteLine($"Converged after {iteration + 1} iterations.");
                return xNew;
            }

            // Update the solution for the next iteration
            for (int i = 0; i < n; i++)
            {
                x[i] = xNew[i];
            }
        }

        Console.WriteLine("Maximum iterations reached. No convergence.");
        return xNew;
    }

    static void Main(string[] args)
    {
        // Example system of linear equations:
        // 4x +  y +  z = 6
        //  x + 5y +  z = 12
        //  x +  y + 6z = 15
        double[,] A = {
            { 4, 1, 1 },
            { 1, 5, 1 },
            { 1, 1, 6 }
        };
        double[] b = { 6, 12, 15 };

        double tolerance = 1e-6; // Tolerance for convergence
        int maxIterations = 1000; // Maximum number of iterations

        double[] x = Jacobi(A, b, tolerance, maxIterations);

        Console.WriteLine("Solution:");
        for (int i = 0; i < x.Length; i++)
        {
            Console.WriteLine($"x[{i}] = {x[i]}");
        }
    }
}