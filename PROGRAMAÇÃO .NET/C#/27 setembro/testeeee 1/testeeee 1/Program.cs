using System;
using System.IO;
using System.Xml.Linq;

class Program
{
    static void Main()
    {
        while (true)
        {
            Console.WriteLine("\n-------------------------");
            Console.WriteLine("1) Para inserir seu nome");
            Console.WriteLine("2) Ler o conteúdo do arquivo");
            Console.WriteLine("3) Para sair");
            string escolha = Console.ReadLine();
            string filePathNomes = @"C:\Users\borda\OneDrive\Área de Trabalho\Samanta\CURSO PROGRAMAÇÃO\IEFP\C#\27 setembro\testeeee 1\UserName.txt";
            if (escolha == "1")
            {
                Console.WriteLine("R: ");
                string nome = Console.ReadLine();

                // Salva o nome em um arquivo de texto no diretório especificado
                File.AppendAllText(filePathNomes, nome + Environment.NewLine);

                // Confirmação
                Console.WriteLine($"O nome '{nome}' foi salvo em '{filePathNomes}'.");
            }
            else if (escolha == "2")
            {
                if (File.Exists(filePathNomes))
                {
                    string[] conteudo = File.ReadAllLines(filePathNomes);
                    foreach (string linha in conteudo)
                    {
                        Console.WriteLine(linha);
                    }
                }
                else
                {
                    Console.WriteLine("Arquivo não existente");
                }
            }
            else if (escolha == "3")
            {
                break;
            }
        }
        
        
    }
}
