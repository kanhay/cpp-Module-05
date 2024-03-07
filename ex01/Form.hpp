/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 15:30:03 by khanhayf          #+#    #+#             */
/*   Updated: 2024/02/20 20:59:25 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

class Bureaucrat;
#include "Bureaucrat.hpp"

class Form{
    private:
        const std::string _name;
        bool _formStatus;
        const int _grade2sign;
        const int _grade2xec;
        Form();
    public:
        class GradeTooHighException : public std::exception{
            const char* what() const throw();
        };
        class GradeTooLowException : public std::exception{
            const char* what() const throw();
        };
    
        Form(const Form& ob);
        Form &operator=(const Form& ob);
        ~Form();
        Form(const std::string& n, const int g2s, const int g2x);
    
        const std::string& getName() const;
        bool getFormStatus() const;
        int getGrade2sign() const;
        int getGrade2xec() const;
    
        void    beSigned(Bureaucrat &ob);
};

std::ostream& operator<<(std::ostream& COUT, const Form& ob);
#endif