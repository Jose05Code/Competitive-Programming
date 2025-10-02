using System;
public class Program{
    public static void Main(string[]args){

	    int x = Convert.ToInt32(Console.ReadLine());
	    int two = x%10;
	 
		if(two == 2 || two == 4 || two == 6 || two == 8 || two == 0 || two == -2 || two == -4 || two == -6 || two == -8)
            Console.WriteLine("even");
        else 
        Console.WriteLine("odd");
	
}
}