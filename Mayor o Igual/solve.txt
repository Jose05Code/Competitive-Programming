using System;
using System.Collections.Generic;

namespace DMOJ
{
    class Cuadrantes_Iguales
    {
        static void Main(string[] args)
        {
            // Input
            string[] input = Console.ReadLine().Split();
            int N = int.Parse(input[0]);
            int K = int.Parse(input[1]);
            string[] list_input = Console.ReadLine().Split();
            List<int> list = new List<int>(new int[N]);
            for (int i = 0; i < N; i++)
            {
                list[i] = int.Parse(list_input[i]);
            }

            list.Sort();
            if (K == N)
                Console.WriteLine(1000000000);
            else if (K == 0)
                Console.WriteLine(list[0] - 1);
            else if (list[K] == list[K - 1])
                Console.WriteLine(-1);
            else
                Console.WriteLine(list[K] - 1);
        }
    }
}