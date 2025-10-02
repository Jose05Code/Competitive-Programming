using System;

public class Program
{
    public static void Main(string[] args)
    {
        int jugador = Convert.ToInt32(Console.ReadLine());
        string equipo1 = Console.ReadLine();
        string equipo2 = Console.ReadLine();

        string[] team1 = equipo1.Split(' ');
        string[] team2 = equipo2.Split(' ');
        int counter = 0;

        int player = Convert.ToInt32(team1[jugador - 1]);

        for (int i = 0; i < 11; i++)
        {
            int x = Convert.ToInt32(team2[i]);
            if (x < player)
            {
                counter++;
                if (counter == 2)
                {
                    Console.WriteLine("GOAL");
                    break;
                }
            }
            else
            {
                continue;
            }
        }

        if (counter < 2)
        {
            Console.WriteLine("OFFSIDE");
        }
    }
}