/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 14:07:02 by khanhayf          #+#    #+#             */
/*   Updated: 2024/02/24 14:41:34 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(){}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &ob):AForm(ob){
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &ob){
    AForm::operator=(ob);
    return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
:AForm("ShrubberyCreationForm", 145, 137, target){
}

void    ShrubberyCreationForm::execute(const Bureaucrat &executor) const{
    if(getAFormStatus() && executor.getGrade() <= getGrade2xec())
    {
        std::fstream myFile;
        myFile.open((getTarget() + "_shrubbery"), std::ios::out);
        if (myFile.is_open()){
            myFile << "           kkk kk \n"
                   << "        kkkkkkkkkkkk\n"
                   << "     kk kkkkkkkkkkkkkkk\n"
                   << "    kkkkkkkkkkkkkk kkkk\n"
                   << "   kkkkkkkkk kkkkkkkkkkkkk\n"
                   << " kkkkkkkkkkkkkkkkkkk kkkkkk\n"
                   << "  kkkkkkkkkkkkkkkkkkkkkkkkk\n"
                   << "   kkkkkkkk kkkkkkkkkkkkkk\n"
                   << "     kkkkkk kkkkkkkkkkkk\n"
                   << "       kkkkkkkkkkkkkkkk\n"
                   << "             ***\n"
                   << "             ***\n"
                   << "             ***\n"
                   << "             ***";
            myFile.close();
        }
        else
            std::cout << "Error openning file\n";
    }
    else
        throw (GradeTooLowException());
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}
