using System;
using System.Collections;
using System.Collections.Generic;
using System.Numerics;

namespace DMOJ
{
    class Cuadrantes_Iguales
    {
        static void Main(string[] args)
        {
            //Input
            string[] input = Console.ReadLine().Split();
            int N = int.Parse(input[0]);
            int L = int.Parse(input[1]);
            int max = 0;
            for (int i = 1; i <= N; i++)
            {
                if (Tiene_L(i, L))
                    N++;
            }
            Console.WriteLine(N);
            
        }

        static bool Tiene_L(int i, int L)
        {
            while (i > 0)
            {
                if(i%10== L)
                    return true;
                i /= 10;
            }
            return false;
        }
    }
}