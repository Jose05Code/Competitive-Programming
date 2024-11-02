using System;
using System.Linq;

public class Program
{
    public static void Main(string[] args)
    {
        int sit_num = 0;
        int favorite_Color = 0;
        int[] sits = null;
        get_input(ref sit_num, ref favorite_Color, ref sits);
        sit_num--;
        int sits_num = sits.Count(n => n == favorite_Color);

        if (sits_num <= 1) Console.WriteLine(-1);
        else
        {
            int index = Array.IndexOf(sits, favorite_Color);
            int aux = 0;
            int min = 99999999;
            while (sits_num > 1)
            {
                for(int i = index + 1; i <= sit_num; i++)
                {
                    aux++;
                    if (sits[i] == favorite_Color)
                    {
                        min = Math.Min(aux-1, min);
                        aux = 0;
                        index = i;
                        sits_num--;
                        break;
                    }
                }
            }

        Console.WriteLine(min);
        }

 
        
        
    }

    public static void get_input(ref int sit_num, ref int favorite_Color,ref int[] sits)
    {
        string[] input = Console.ReadLine().Split();
        sit_num = int.Parse(input[0]);
        favorite_Color = int.Parse(input[1]);
        sits = new int[sit_num];
        input = Console.ReadLine().Split();
        for (int i = 0; i < sit_num; i++)
        {
            sits[i] = int.Parse(input[i]);
        }
    }

}