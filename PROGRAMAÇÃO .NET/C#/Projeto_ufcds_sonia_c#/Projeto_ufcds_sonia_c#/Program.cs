using System;

internal class Program
{
    private static void Main(string[] args)
    {
        Console.WriteLine("\nHello, welcome to the IEFP Leiria UFCDs Enrollment Management Project");
        MainMenu();

    }
    static void MainMenu()
    {
        Console.WriteLine("---" + "\nWhich option do you want?\n" +
            "\n1) login" +
            "\n2) create account" +
            "\n3) ufcds" +
            "\n4) log out\n");
        string decision_main_menu = Console.ReadLine();
        if (decision_main_menu == "1")
        {
            LoginUser();
        }
        else if (decision_main_menu == "2")
        {
            CreateAccount();
        }
        else if (decision_main_menu == "3")
        {
            UfcdMenu();
        }
        else if (decision_main_menu == "4")
        {
            Console.WriteLine("Okay, Good By");
        }
        else
        {
            Console.WriteLine("Opção Inválida");
            MainMenu();
        }
    }
    static void LoginUser()
    {
        Console.WriteLine("\n---" +
            "\nOption chosen: login." +
            "\nAre you a 'student' or 'professor'?" +
            "\n\n1) student" +
            "\n2) professor");
        Console.WriteLine("3) return to main menu\n");
        string login_user = Console.ReadLine();
        if (login_user == "1")
        {
            UserStudent();
        }
        else if (login_user == "2")
        {
            UserProfessor();
        }
        else if (login_user == "3")
        {
            MainMenu();
        }
        else
        {
            Console.WriteLine("Opção inválida");
            LoginUser();
        }
    }
    static void UserStudent()
    {
        Console.WriteLine("\n---" + 
            "\nOption chosen: student." +
            "\nWhat do you need?" +
            "\n1) 'personal information'" +
            "\n2) 'my classes'" +
            "\n3) 'ufcds'" +
            "\n4) 'return to main menu' ");
        string ChoseUserStudent = Console.ReadLine();
        if (ChoseUserStudent == "1")
        {
            Console.WriteLine("Your personal informations: ");
            ListPersonalInformationStudent();
        }
        else if (ChoseUserStudent == "2")
        {
            Console.WriteLine("Your classes: ");
            ListClassesUser();
        }
        else if (ChoseUserStudent == "3")
        {
            Console.WriteLine("Your UFCDs: ");
            ListUFCDsUser();
        }
        else if (ChoseUserStudent == "4")
        {
            MainMenu();
        }
        else
        {
            Console.WriteLine("Opção inválida");
            UserStudent();
        }
    }

    static void UserProfessor()
    {
        Console.WriteLine("Option chosen: professor.");
        Console.WriteLine("What do you need?");
        Console.WriteLine("'personal information', 'my ufcds'?");
        Console.WriteLine("Or 'return to main menu'");
        string ChoseUserProfessor = Console.ReadLine();
        if (ChoseUserProfessor == "personal information")
        {
            Console.WriteLine("Your personal information: ");
            ListPersonalInformationProfessor();
        }
        else if (ChoseUserProfessor == "my ufcds")
        {
            Console.WriteLine("Your UFCDs: ");
            ListUFCDsProfessor();
        }
        else if (ChoseUserProfessor == "return to main menu")
        {
            MainMenu();
        }
        else
        {
            Console.WriteLine("Opção inválida");
            UserProfessor();
        }
    }

    static void PersonalInformationStudent()
    {

    }
    static void CreateAccount()
    {
        Console.WriteLine("Option chosen: Create Account. Are you 'student' or 'professor'?");
        string ChoseCreateAccount = Console.ReadLine();
        Console.WriteLine("Or 'return to main menu'");
        if (ChoseCreateAccount == "student")
        {

        }
    }
    static void ListPersonalInformationStudent()
    {

    }
    static void ListPersonalInformationProfessor()
    {

    }
    static void PersonalInformationProfessor()
    {

    }
    static void ListClassesUser()
    {

    }
    static void UfcdMenu()
    {

    }
    static void ListUFCDsUser()
    {

    }

    static void ListUFCDsProfessor()
    {

    }
}
