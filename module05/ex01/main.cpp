// #include "Form.hpp"

// int main(){

//     // CASE 1 : error -> instance avec un grade trop haut

//     // std::cout << GREEN << " ERROR INIT CASE: " << WHITE << std::endl;
//     // try
//     // {
//     //    Form a(155, 1, "Reverse Calvitie Form");
//     // }
//     // catch(const std::exception& e)
//     // {
//     //     std::cout << BRED << "ERROR: "<< e.what() << WHITE<< '\n';
//     // }
    
    
//     // try
//     // {
//     //    Form a(15, -1, "Reverse Calvitie Form");
//     // }
//     // catch(const std::exception& e)
//     // {
//     //     std::cout << BRED << "ERROR: "<< e.what() << WHITE<< '\n';
//     // }
//     //----------------------------------------------------//

//     // CASE 2: -> init, use des fonctions et cas derreur

//     Bureaucrat president("Adnan le bg", 1);
//     Bureaucrat noob("le ptit nouveau", 148);

//     Form a(5,2, "quadrillerLaZone");
//     Form quadrillerLaZone(a);

//     std::cout << '\n' << quadrillerLaZone << std::endl;

//     try {
//         quadrillerLaZone.beSigned(noob);
//     }
//     catch(const std::exception& e) {
//          std::cout <<  "ERROR: "<< e.what() << "\n\n";
//         try {
//             noob.signForm(quadrillerLaZone);
//             std::cout << '\n';
//         }
//         catch(const std::exception& e) {
//             std::cout <<  "ERROR: "<< e.what() << '\n';
//         }
//     }
//     std::cout << quadrillerLaZone << std::endl;
     

// }


#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	{
		std::cout << "===== Basic test =====" << std::endl;
		Form form = Form("Super form", 42, 41);
		std::cout << form << std::endl;
	}
	{
		std::cout << "===== Exceptions test =====" << std::endl;
		try
		{
			Form form = Form("Super form", 42, 42);
			std::cout << "\e[0;32mWorked !\e[0m" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
		}
		try
		{
			Form form = Form("Super form", 0, 42);
			std::cout << "\e[0;32mWorked !\e[0m" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
		}
		try
		{
			Form form = Form("Super form", 42, 0);
			std::cout << "\e[0;32mWorked !\e[0m" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
		}
		try
		{
			Form form = Form("Super form", 164, 42);
			std::cout << "\e[0;32mWorked !\e[0m" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
		}
		try
		{
			Form form = Form("Super form", 42, 164);
			std::cout << "\e[0;32mWorked !\e[0m" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
		}
	}
	{
		std::cout << "===== BeSigned test =====" << std::endl;
		{
			Form form = Form("Super form", 42, 42);
			std::cout << form << std::endl;
			Bureaucrat george = Bureaucrat("George", 40);
			std::cout << george << std::endl;
			try
			{
				form.beSigned(george);
			}
			catch(const std::exception& e)
			{
				std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
			}
			std::cout << form << std::endl;
		}
		std::cout << "----- Test 2 -----" << std::endl; 
		{
			Form form = Form("Super form", 42, 42);
			std::cout << form << std::endl;
			Bureaucrat george = Bureaucrat("George", 45);
			std::cout << george << std::endl;
			try
			{
				form.beSigned(george);
			}
			catch(const std::exception& e)
			{
				std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
			}
			std::cout << form << std::endl;
		}
		std::cout << "----- Test 3 -----" << std::endl; 
		{
			Form form = Form("Super form", 42, 42);
			std::cout << form << std::endl;
			Bureaucrat george = Bureaucrat("George", 40);
			std::cout << george << std::endl;
			try
			{
				form.beSigned(george);
			}
			catch(const std::exception& e)
			{
				std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
			}
			std::cout << form << std::endl;
			try
			{
				form.beSigned(george);
			}
			catch(const std::exception& e)
			{
				std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
			}
			std::cout << form << std::endl;
		}
	}
	{
		std::cout << "===== Sign test =====" << std::endl;
		{
			Form form = Form("Super form", 42, 42);
			std::cout << form << std::endl;
			Bureaucrat george = Bureaucrat("George", 40);
			std::cout << george << std::endl;
			george.signForm(form);
			std::cout << form << std::endl;
		}
		std::cout << "----- Test 2 -----" << std::endl; 
		{
			Form form = Form("Super form", 42, 42);
			std::cout << form << std::endl;
			Bureaucrat george = Bureaucrat("George", 45);
			george.signForm(form);
			std::cout << form << std::endl;
		}
		std::cout << "----- Test 3 -----" << std::endl; 
		{
			Form form = Form("Super form", 42, 42);
			std::cout << form << std::endl;
			Bureaucrat george = Bureaucrat("George", 40);
			std::cout << george << std::endl;
			george.signForm(form);
			std::cout << form << std::endl;
			george.signForm(form);
			std::cout << form << std::endl;
		}
	}
}