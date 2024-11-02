using System;
using System.Linq;

public class Program
{

    public static void Main(string[] args)
    {
        int repeticiones = int.Parse(Console.ReadLine());
        bool se_puede = false;
        while (repeticiones-- > 0)
        {

            int pollito = int.Parse(Console.ReadLine());
            Coge_Tu_KFC(pollito, ref se_puede);

            if (se_puede)
                Console.WriteLine("YES");
            else
                Console.WriteLine("NO");

            se_puede = false;
        }
    }

        public static void Coge_Tu_KFC(int pollito, ref bool se_puede)
        {
            if (pollito == 0)
                se_puede = true;

            if (pollito > 0 && !se_puede)
            {
                Coge_Tu_KFC(pollito - 7, ref se_puede);
                Coge_Tu_KFC(pollito - 3, ref se_puede);
            }
        }
}