/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 15:29:49 by khanhayf          #+#    #+#             */
/*   Updated: 2024/02/24 20:19:48 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

const char* AForm::GradeTooHighException::what() const throw(){
    return ("Grade too high");
}

const char* AForm::GradeTooLowException::what() const throw(){
    return ("Grade too low");
}

AForm::AForm(const std::string& n, const int g2s, const int g2x, const std::string t)
:_name(n), _aformStatus(false), _grade2sign(g2s), _grade2xec(g2x), _target(t){
    if (g2s < 1 || g2x < 1)
        throw(GradeTooHighException());
    else if (g2s > 150 || g2x > 150)
         throw(GradeTooLowException());
}

AForm::AForm():_name("Default form"), _aformStatus(false), _grade2sign(150), _grade2xec(150), _target("Default target"){
}

AForm::AForm(const AForm& ob)
:_name(ob._name), _aformStatus(ob._aformStatus), _grade2sign(ob._grade2sign), _grade2xec(ob._grade2xec), _target(ob.getTarget()){
}

AForm &AForm::operator=(const AForm& ob){
    if (this != &ob){
        _aformStatus = ob.getAFormStatus();
        _target = ob.getTarget();
    }
    return(*this);
}

AForm::~AForm(){}

const std::string& AForm::getName() const{
    return(_name);
}

bool AForm::getAFormStatus() const{
    return (_aformStatus);
}

int AForm::getGrade2sign() const{
    return (_grade2sign);
}

int AForm::getGrade2xec() const{
    return (_grade2xec);
}

const std::string& AForm::getTarget() const{
    return (_target);
}

std::ostream& operator<<(std::ostream& COUT, const AForm& ob){
    return (COUT << "Name: " << ob.getName() << "\nSigned: " << ob.getAFormStatus() << "\nGrade2sign: " 
    << ob.getGrade2sign() << "\nGrade2xec: "  << ob.getGrade2xec()<< "\nTarget: " << ob.getTarget() << "\n", COUT);
}

void    AForm::beSigned(Bureaucrat &ob){
    if (ob.getGrade() <= _grade2sign)
        _aformStatus = true;
    else
        throw(GradeTooLowException());
}
