using System;
using System.Collections.Generic;

namespace DMOJ
{
    class Multiplo_de_2_3_y_5
    {
        static void Main(string[] args)
        {
            int N = int.Parse(Console.ReadLine());
            for (int i = 0; i < N; i++)
            {
                string[] input_string = Console.ReadLine().Split();
                Console.WriteLine(int.Parse(input_string[0]) + int.Parse(input_string[1]));
            }



        }
    }
}