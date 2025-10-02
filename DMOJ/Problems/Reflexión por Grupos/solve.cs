using System;
using System.Collections.Generic;
using System.Numerics;

namespace DMOJ
{
    class Reflexion_por_grupos
    {
        static void Main(string[] args)
        {
            int input;
            string cadena;
            string result;
            Get_input(out input, out cadena);
            while (input != 0)
            {
                result = "";
                int cut = cadena.Length/input;
                for (int i = 0; i < cadena.Length; i+= cut)
                {
                    for(int j = i + cut - 1; j >= i && j<=cadena.Length; j--)
                    {
                        result += cadena[j];
                    }
                }
                Console.WriteLine(result);
                Get_input(out input, out cadena);
            }

        }

        static void Get_input(out int _input, out string _cadena)
        {
            _cadena = "";
            string[] input = Console.ReadLine().Split();
            _input = int.Parse(input[0]);
            if (_input != 0)
            _cadena = input[1];
        }

    }
}