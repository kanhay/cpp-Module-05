/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 12:36:08 by khanhayf          #+#    #+#             */
/*   Updated: 2024/02/24 20:19:26 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Intern.hpp"
#include "AForm.hpp"

int main()
{
    AForm* rrf;
    try{
        Bureaucrat b("Nate",1);
        Intern someRandomIntern;

        rrf = someRandomIntern.makeForm("shrubbery creation", "garden");
        std::cout << std::endl;
        if (rrf){
            std::cout << *rrf << std::endl << std::endl;
            b.signForm(*rrf);
            std::cout << std::endl;
            rrf->execute(b);
        }
    }
    catch (std::exception& excp){
        std::cout << "Exception happend! " << excp.what();
    }
    if (rrf)
        delete rrf;
}
