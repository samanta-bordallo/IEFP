using aula_Sergio_11_10.Models;
using Microsoft.AspNetCore.Mvc;
using System.Diagnostics;

namespace aula_Sergio_11_10.Controllers
{
    public class HomeController : Controller
    {
        private readonly ILogger<HomeController> _logger;

        public HomeController(ILogger<HomeController> logger)
        {
            _logger = logger;
        }

        public IActionResult Index()
        {
            HomeModel home = new HomeModel();

            home.Nome = "Samanta Bordallo";
            home.Email = "bordallo.samanta@gmail.com";
            home.NomeCurso = "Vaj + Dig - Programação .NET";
            home.Endereço = "Escadas de Santo Estevão, Leiria";
            home.Profissão = "Bióloga e Programadora";

            return View(home);
        }

        public IActionResult Privacy()
        {
            return View();
        }

        [ResponseCache(Duration = 0, Location = ResponseCacheLocation.None, NoStore = true)]
        public IActionResult Error()
        {
            return View(new ErrorViewModel { RequestId = Activity.Current?.Id ?? HttpContext.TraceIdentifier });
        }
    }
}