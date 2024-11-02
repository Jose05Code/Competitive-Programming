using System;

public class Program
{
    public static void Main(string[] args)
    {
        int count = Convert.ToInt32(Console.ReadLine());
        string varitas = Console.ReadLine();
        string cajas = Console.ReadLine();

        int[] varita = new int[count];
        int[] caja = new int[count];

        string[] VARITAS = varitas.Split();
        string[] CAJAS = cajas.Split();

        for (int j = 0; j < count; j++)
        {
            varita[j] = Convert.ToInt32(VARITAS[j]);
            caja[j] = Convert.ToInt32(CAJAS[j]);
        }

        Array.Sort(varita);
        Array.Sort(caja);

        int i = 0;

        for (i = 0; i < count; i++)
        {
            if (varita[i] <= caja[i])
            {
                continue;
            }
            else
            {
                Console.WriteLine("NE");
                break;
            }

        }

        if (i == count)
        {
            Console.WriteLine("DA");
        }
    }

}