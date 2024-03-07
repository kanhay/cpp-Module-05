/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 19:20:53 by khanhayf          #+#    #+#             */
/*   Updated: 2024/02/18 19:20:53 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(){}

Intern::Intern(const Intern&){
}

Intern& Intern::operator=(const Intern&){
    return (*this);
}

Intern::~Intern(){}

int getIndex(const std::string &formName){
    std::string availableForms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    int i;
    for (i = 0; i < 3; i++){
        if (availableForms[i] == formName)
            return (i);
    }
    return (i);
}

AForm *Intern::makeForm(const std::string& formName, const std::string& target){
    switch (getIndex(formName))
    {
    case 0:
        std::cout << "Intern creates " << formName << " form\n";
        return new ShrubberyCreationForm(target);
        break;
    case 1:
        std::cout << "Intern creates " << formName << " form\n";
        return new RobotomyRequestForm(target);
        break;
    case 2:
        std::cout << "Intern creates " << formName << " form\n";
        return new PresidentialPardonForm(target);
        break;
    default:
        std::cout << formName << " is unavailable\n";
        return NULL;
    }
}
