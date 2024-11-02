using System;
using System.Collections.Generic;

namespace DMOJ
{
    class Multiplo_de_2_3_y_5
    {
        static void Main(string[] args)
        {
            // Leer la cantidad de dígitos
            int n = Convert.ToInt32(Console.ReadLine()); // digitos

            // Leer los dígitos
            string[] problem_input = Console.ReadLine().Split(); // array de dígitos

            // Ordenar los dígitos en orden ascendente
            Array.Sort(problem_input);

            // Verificar si el dígito más pequeño es "0"
            if (problem_input[0] != "0")
            {
                Console.WriteLine("-1");
                return;
            }

            // Invertir el arreglo para obtener el número más grande posible
            Array.Reverse(problem_input);
            string result = Div3(problem_input);

            // Verificar que el resultado no esté vacío o solo contenga ceros
            if (result.Length == 0 || (result.Length == 1 && result[0] == '0'))
            {
                Console.WriteLine(0);
            }
            else
            {
                if (result[0] == '0')
                    Console.WriteLine(0);
                else
                    Console.WriteLine(result);
            }
        }

        static string Div3(string[] digits)
        {
            ulong sum = 0;

            // Calcular la suma de los dígitos
            foreach (var digit in digits)
            {
                sum += Convert.ToUInt32(digit);
            }

            // Verificar el residuo de la suma al dividir por 3
            byte remainder = Convert.ToByte(sum % 3);

            // Caso cuando la suma es divisible por 3
            if (remainder == 0)
            {
                return string.Join("", digits);
            }

            // Arreglos de casos para el residuo 1 y 2
            string[] Case_for_1 = { "1", "4", "7" };
            string[] Case_for_2 = { "2", "5", "8" };

            List<string> digitsList = new List<string>(digits);

            if (remainder == 1)
            {
                // Intentar eliminar un dígito con resto 1
                foreach (var caseDigit in Case_for_1)
                {
                    int index = digitsList.IndexOf(caseDigit);
                    if (index != -1)
                    {
                        digitsList.RemoveAt(index);
                        return string.Join("", digitsList);
                    }
                }

                // Intentar eliminar dos dígitos con resto 2
                int count = 0;
                foreach (var caseDigit in Case_for_2)
                {
                    while (digitsList.Remove(caseDigit) && ++count < 2)
                    {
                        // Continúa hasta eliminar dos dígitos
                    }
                    if (count == 2)
                    {
                        return string.Join("", digitsList);
                    }
                }
            }
            else if (remainder == 2)
            {
                // Intentar eliminar un dígito con resto 2
                foreach (var caseDigit in Case_for_2)
                {
                    int index = digitsList.IndexOf(caseDigit);
                    if (index != -1)
                    {
                        digitsList.RemoveAt(index);
                        return string.Join("", digitsList);
                    }
                }

                // Intentar eliminar dos dígitos con resto 1
                int count = 0;
                foreach (var caseDigit in Case_for_1)
                {
                    while (digitsList.Remove(caseDigit) && ++count < 2)
                    {
                        // Continúa hasta eliminar dos dígitos
                    }
                    if (count == 2)
                    {
                        return string.Join("", digitsList);
                    }
                }
            }

            // Si no se encontró una combinación adecuada para ajustar el resto, retornar -1
            return "-1";
        }
    }
}