using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {

            {
                Start:
            Console.Write("First nr ");
                int FirstNr = Convert.ToInt32 (Console.ReadLine());
            Console.Write("Second nr ");
                int SecondNr = Convert.ToInt32(Console.ReadLine());
            Console.Write("Calculating... " + FirstNr + " + " + SecondNr);
            Console.ReadKey();
            Console.WriteLine("\nResult is: " + (FirstNr + SecondNr));
                Console.ReadKey();

                int Result = (FirstNr + SecondNr);

            if (Result <= 20)
                Console.WriteLine("Pick a bigger Nr.");
            else
                Console.WriteLine("Pick a smaller Nr.");
                goto Start;
            }

            
            Console.ReadKey();

        }
    }
}
