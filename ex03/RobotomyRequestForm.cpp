/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 16:28:50 by khanhayf          #+#    #+#             */
/*   Updated: 2024/02/24 14:41:43 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

int RobotomyRequestForm::counter = 0;

RobotomyRequestForm::RobotomyRequestForm(){}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& ob):AForm(ob){
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm& ob){
    return (AForm::operator=(ob), *this);
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
:AForm("RobotomyRequestForm", 72, 45, target){
}

void    RobotomyRequestForm::execute(const Bureaucrat &executor) const{
    if(getAFormStatus() && executor.getGrade() <= getGrade2xec()){
        std::cout << "errrrrrrrrr making some drilling noises\n";
        if (counter % 2){
            std::cout << getTarget() << " has been robotomized successfully.\n";
            counter++;
        }
        else{
            std::cout << "The robotomy failed for " << getTarget() << "\n";
            counter++;
        }
    }
    else
       throw(GradeTooLowException());
}

RobotomyRequestForm::~RobotomyRequestForm(){
}
