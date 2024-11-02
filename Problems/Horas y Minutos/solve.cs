using System;
using System.Collections.Generic;

namespace DMOJ
{
    class Multiplo_de_2_3_y_5
    {
        static void Main(string[] args)
        {
            int[] integers = ReadIntegersFromInput();

            Console.Write(integers[0] * 60 + integers[1]);
        }

        /// <summary>
        /// Lee una línea de entrada del usuario y convierte los valores a un arreglo de enteros.
        /// </summary>
        /// <returns>Un arreglo de enteros con los valores ingresados.</returns>
        public static int[] ReadIntegersFromInput()
        {
            // Lee la línea de entrada y divide en partes
            ReadOnlySpan<string> inputParts = Console.ReadLine().Trim().Split();

            // Inicializa un arreglo para los enteros
            int[] integers = new int[inputParts.Length];

            // Convierte cada parte en un entero
            for (int i = 0; i < inputParts.Length; i++)
            {
                if (!int.TryParse(inputParts[i], out integers[i]))
                {
                    throw new FormatException($"'{inputParts[i]}' no es un número entero válido.");
                }
            }

            return integers;
        }
    }

}