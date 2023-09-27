using System;

namespace MyApplication
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] cars = { "Volvo", "BMW", "Ford", "Mazda" };

            Console.WriteLine("Carros não ordenados:");
            for (int i = 0; i < cars.Length; i++)
            {
                Console.WriteLine(cars[i]);
            }
            Console.WriteLine();

            // Ordenar a array de carros em ordem alfabética
            Array.Sort(cars);

            Console.WriteLine("Carros ordenados:");
            foreach (string car in cars)
            {
                Console.WriteLine(car);
            }
            Console.WriteLine();

            string[] birds = { "Pomba", "Melro", "Pardal", "Gaivota" };

            Console.WriteLine("Pássaros não ordenados:");
            foreach (string i in birds)
            {
                Console.WriteLine(i);
            }
            Console.WriteLine();

            // Ordenar a array de pássaros em ordem alfabética
            Array.Sort(birds);

            Console.WriteLine("Pássaros ordenados:");
            foreach (string bird in birds)
            {
                Console.WriteLine(bird);
            }
        }
    }
}
