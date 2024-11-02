using System;
using System.Collections;
using System.Collections.Generic;
using System.Numerics;
using System.Linq;

namespace DMOJ
{
    class Teatro
    {
        static void Main(string[] args)
        {
            int personas = int.Parse(Console.ReadLine());
            string asientos = Console.ReadLine();
            //dos asientos L equivalen a un asientos S
            int asientos_L = asientos.Count(c => c == 'L');
            //Solo pueden haber dos tipos de asientos asi que el numero de asientos restantes siempre seran S
            int asientos_S = personas - asientos_L;

            int posa_vasos = 1 + asientos_L / 2 + asientos_S;

            if (posa_vasos > personas) Console.WriteLine(personas); // si el numero de personas es menor al numero de posa vasos todas tendran uno
            else Console.WriteLine(posa_vasos);

        }

    }
}