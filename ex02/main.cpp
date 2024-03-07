/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 12:36:08 by khanhayf          #+#    #+#             */
/*   Updated: 2024/02/24 14:34:45 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try{
        Bureaucrat b1("bureaucrat1", 1);
        ShrubberyCreationForm sh("house1");
        RobotomyRequestForm r("robot1");
        PresidentialPardonForm p("Nate");

        b1.signForm(sh);
        std::cout << std::endl;

        b1.signForm(r);
        std::cout << std::endl;

        b1.signForm(p);
        std::cout << std::endl;

        b1.executeForm(sh);
        std::cout << std::endl;
        b1.executeForm(r);
        std::cout << std::endl;
        b1.executeForm(r);
        std::cout << std::endl;
        b1.executeForm(p);
    }
    catch (std::exception& excp){
        std::cout << "Exception happend! " << excp.what() << "\n";
    }
    
}
