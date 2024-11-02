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
            Tuple<bool, bool> Cuadrante;
            Punto punto1 = Get_input();
            Punto punto2 = Get_input();

            if (punto1.x == punto2.x && punto1.y == punto2.y) Console.WriteLine("SI");
            else Console.WriteLine("NO");
        }
        
        static Punto Get_input()
        {
            string[] input = Console.ReadLine().Split();
            int[] result = new int[input.Length];
            for (int i = 0; i < result.Length; i++)
                result[i]= int.Parse(input[i]);

            Punto punto = new Punto(result[0], result[1]);

            return punto;
        }

        struct Punto 
        {
            //campos
            public bool x;
            public bool y;
            

            /// <summary>
            /// Constructor que toma como argumento las cordenadas en el eje x y el eje y
            /// </summary>
            /// <param name="_x"></param>
            /// <param name="_y"></param>
            /// Devuelve un par ordenado donde x o y son verdaderos si son positivos o falso si son negativos
            public Punto(int _x, int _y)
            {
                if (_x > 0) x = true;
                else x = false;

                if (_y > 0) y = true;
                else y = false;
            }
        }
    }
}