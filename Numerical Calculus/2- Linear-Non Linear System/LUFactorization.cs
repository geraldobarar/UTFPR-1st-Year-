/*
 * LU Factorization Method
 * 
 * LU Factorization (also known as LU decomposition) is a numerical method used to solve systems of linear equations. 
 * It decomposes a square matrix A into the product of two matrices: a lower triangular matrix (L) and an upper triangular matrix (U). 
 * Once the matrix A is decomposed into L and U, the system of equations Ax = b can be solved in two steps:
 *   1. Solve Ly = b for y using forward substitution.
 *   2. Solve Ux = y for x using backward substitution.
 * 
 * LU Factorization is particularly useful when solving multiple systems of equations with the same coefficient matrix but different 
 * right-hand sides, as the factorization step only needs to be performed once.
 * 
 * This program demonstrates LU Factorization to solve a system of linear equations.
 */

using System;

class LUFactorization
{
    // Perform LU decomposition of matrix A
    static void LUDecompose(double[,] A, int n, out double[,] L, out double[,] U)
    {
        L = new double[n, n];
        U = new double[n, n];

        // Initialize L as identity matrix and U as a copy of A
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                    L[i, j] = 1; // Diagonal of L is 1
                else
                    L[i, j] = 0;

                U[i, j] = A[i, j];
            }
        }

        // Perform Gaussian elimination to get L and U
        for (int k = 0; k < n; k++)
        {
            for (int i = k + 1; i < n; i++)
            {
                if (U[k, k] == 0)
                    throw new InvalidOperationException("Matrix is singular and cannot be decomposed.");

                L[i, k] = U[i, k] / U[k, k];
                for (int j = k; j < n; j++)
                {
                    U[i, j] -= L[i, k] * U[k, j];
                }
            }
        }
    }

    // Solve Ly = b using forward substitution
    static double[] ForwardSubstitution(double[,] L, double[] b, int n)
    {
        double[] y = new double[n];
        for (int i = 0; i < n; i++)
        {
            y[i] = b[i];
            for (int j = 0; j < i; j++)
            {
                y[i] -= L[i, j] * y[j];
            }
            y[i] /= L[i, i];
        }
        return y;
    }

    // Solve Ux = y using backward substitution
    static double[] BackwardSubstitution(double[,] U, double[] y, int n)
    {
        double[] x = new double[n];
        for (int i = n - 1; i >= 0; i--)
        {
            x[i] = y[i];
            for (int j = i + 1; j < n; j++)
            {
                x[i] -= U[i, j] * x[j];
            }
            x[i] /= U[i, i];
        }
        return x;
    }

    // Solve the system Ax = b using LU Factorization
    static double[] SolveUsingLU(double[,] A, double[] b, int n)
    {
        double[,] L, U;
        LUDecompose(A, n, out L, out U); // Perform LU decomposition

        double[] y = ForwardSubstitution(L, b, n); // Solve Ly = b
        double[] x = BackwardSubstitution(U, y, n); // Solve Ux = y

        return x;
    }

    static void Main(string[] args)
    {
        // Example system of linear equations:
        // 2x +  y +  z = 5
        // 4x - 6y + 0z = -2
        // -2x + 7y + 2z = 9
        double[,] A = {
            { 2, 1, 1 },
            { 4, -6, 0 },
            { -2, 7, 2 }
        };
        double[] b = { 5, -2, 9 };
        int n = 3; // Size of the system

        double[] x = SolveUsingLU(A, b, n);

        Console.WriteLine("Solution:");
        for (int i = 0; i < n; i++)
        {
            Console.WriteLine($"x[{i}] = {x[i]}");
        }
    }
}