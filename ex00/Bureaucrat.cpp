/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 12:36:47 by khanhayf          #+#    #+#             */
/*   Updated: 2024/02/24 13:43:06 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


const char* Bureaucrat::GradeTooHighException::what() const throw(){ 
    return ("Grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
    return ("Grade too low");
}

Bureaucrat::Bureaucrat():_name("Default bureaucrat"), _grade(150){
}

Bureaucrat::Bureaucrat(const Bureaucrat &ob){
    *this = ob;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &ob){
    if (this != &ob)
        _grade = ob.getGrade();
    return (*this);
}

Bureaucrat::~Bureaucrat(){}

Bureaucrat::Bureaucrat(const std::string& n, int g):_name(n), _grade(g){
    if (_grade < 1)
        throw (GradeTooHighException());
    else if (_grade > 150)
        throw (GradeTooLowException());
}

const std::string& Bureaucrat::getName() const{
    return (_name);
}

int Bureaucrat::getGrade() const{
    return (_grade);
}

void    Bureaucrat::incBureaucratGrade(){
    _grade = (_grade - 1 < 1) ? throw (GradeTooHighException()) : _grade - 1;
}

void    Bureaucrat::decBureaucratGrade(){
    _grade = (_grade + 1 > 150) ? throw (GradeTooLowException()) : _grade + 1;
}

std::ostream &operator<<(std::ostream& COUT, const Bureaucrat &obj){
    return (COUT << "Name: " << obj.getName() << "\nBureaucrat grade: " << obj.getGrade() << "\n", COUT);
}
