/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 15:29:49 by khanhayf          #+#    #+#             */
/*   Updated: 2024/02/24 13:47:47 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

const char* Form::GradeTooHighException::what() const throw(){
    return ("Grade too high");
}

const char* Form::GradeTooLowException::what() const throw(){
    return ("Grade too low");
}

Form::Form(const std::string& n, const int g2s, const int g2x)
:_name(n), _formStatus(false), _grade2sign(g2s), _grade2xec(g2x){
    if (g2s < 1 || g2x < 1)
        throw(GradeTooHighException());
    else if (g2s > 150 || g2x > 150)
         throw(GradeTooLowException());
}

Form::Form():_name("Default form"), _formStatus(false), _grade2sign(150), _grade2xec(150){
}

Form::Form(const Form& ob)
:_name(ob._name), _formStatus(ob._formStatus), _grade2sign(ob._grade2sign), _grade2xec(ob._grade2xec){
}

Form &Form::operator=(const Form& ob){
    if (this != &ob)
        _formStatus = ob.getFormStatus();
    return(*this);
}

Form::~Form(){}

const std::string& Form::getName() const{
    return(_name);
}

bool Form::getFormStatus() const{
    return (_formStatus);
}

int Form::getGrade2sign() const{
    return (_grade2sign);
}

int Form::getGrade2xec() const{
    return (_grade2xec);
}

void    Form::beSigned(Bureaucrat &ob){
    if (ob.getGrade() <= _grade2sign)
        _formStatus = true;
    else
        throw (GradeTooLowException());
}

std::ostream& operator<<(std::ostream& COUT, const Form& ob){
    return (COUT << "Name: " << ob.getName() << "\nSigned?: " << ob.getFormStatus() << "\nGrade2sign: " 
    << ob.getGrade2sign() << "\nGrade2xec: "  << ob.getGrade2xec() << "\n", COUT);
}