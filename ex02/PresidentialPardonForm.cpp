/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 17:24:35 by khanhayf          #+#    #+#             */
/*   Updated: 2024/02/24 14:07:53 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(){
    
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& ob):AForm(ob){
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm& ob){
    return (AForm::operator=(ob), *this);
}

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
:AForm("PresidentialPardonForm", 25, 5, target){
}

void    PresidentialPardonForm::execute(const Bureaucrat &executor) const{
    if(getAFormStatus() && executor.getGrade() <= getGrade2xec()){
        std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox\n";
    }
    else
        throw(GradeTooLowException());
}
