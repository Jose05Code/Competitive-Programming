using System;

public class Program
{
    public static void Main(string[] args)
    {
        int count = int.Parse(Console.ReadLine());

        for (int i = 0; i < count; i++)
        {   
            ulong x = ulong.Parse(Console.ReadLine());
            ulong y = ((0 + (x-1) * 2) / 2) * x;
            Console.WriteLine(y);
        }
    }

}