/*
 * Criar uma classe barco
 * 
 * com um metodo buzina - barco faz som
 * criar uma classe traineira - herda da classe barco 
 *  
 *  - traineira faz um som
 */

using System;
internal class Barco
{
    public virtual void Buzina()
    {
        Console.WriteLine("Barco faz som");
    }
}

internal class Traineira : Barco
{
    public override void Buzina()
    {
        Console.WriteLine("Traineira faz um som");
    }
}
internal class Program
{
    private static void Main(string[] args)
    {
        Barco barco = new Barco();
        Traineira traineira = new Traineira(); 

        barco.Buzina();
        traineira.Buzina();
    }
}