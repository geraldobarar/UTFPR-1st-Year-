/*
 * Gauss-Seidel Method
 * 
 * The Gauss-Seidel method is an iterative numerical technique used to solve a system of linear equations. 
 * It is an improvement over the Jacobi method and is particularly useful for large, diagonally dominant systems. 
 * The method works by iteratively updating the solution vector x using the most recently computed values at each step. 
 * Unlike the Jacobi method, which uses the values from the previous iteration for all updates, the Gauss-Seidel method 
 * uses the latest available values, which often leads to faster convergence.
 * 
 * The Gauss-Seidel method is defined by the formula:
 *   x_i^(k+1) = (1 / A_ii) * (b_i - Σ(A_ij * x_j^(k+1)) for j < i - Σ(A_ij * x_j^(k)) for j > i)
 * 
 * Key differences between Gauss-Seidel and Jacobi:
 * 1. Gauss-Seidel uses the most recent values of x during the iteration, while Jacobi uses only values from the previous iteration.
 * 2. Gauss-Seidel generally converges faster than Jacobi because it incorporates updated information immediately.
 * 3. Both methods require the matrix A to be diagonally dominant or symmetric and positive definite for guaranteed convergence.
 * 
 * This program demonstrates the Gauss-Seidel method to solve a system of linear equations.
 */

using System;

class GaussSeidelMethod
{
    // Solve the system Ax = b using the Gauss-Seidel method
    static double[] GaussSeidel(double[,] A, double[] b, double tolerance, int maxIterations)
    {
        int n = b.Length;
        double[] x = new double[n]; // Initial guess (can be zeros or any approximation)

        for (int iteration = 0; iteration < maxIterations; iteration++)
        {
            double error = 0.0;

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

                double xNew = (b[i] - sum) / A[i, i]; // Update the solution using the latest values
                error += Math.Abs(xNew - x[i]); // Calculate the error
                x[i] = xNew; // Update the solution immediately
            }

            if (error < tolerance) // Check for convergence
            {
                Console.WriteLine($"Converged after {iteration + 1} iterations.");
                return x;
            }
        }

        Console.WriteLine("Maximum iterations reached. No convergence.");
        return x;
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

        double[] x = GaussSeidel(A, b, tolerance, maxIterations);

        Console.WriteLine("Solution:");
        for (int i = 0; i < x.Length; i++)
        {
            Console.WriteLine($"x[{i}] = {x[i]}");
        }
    }
}