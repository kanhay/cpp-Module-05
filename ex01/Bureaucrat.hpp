/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 12:36:28 by khanhayf          #+#    #+#             */
/*   Updated: 2024/02/20 18:31:07 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP


#include <iostream>
#include <string>
class Form;
#include "Form.hpp"

class Bureaucrat {
    private:
        const std::string _name;
        int _grade;
        Bureaucrat();
    public:
        class GradeTooHighException:public std::exception {
            public:
            const char* what() const throw();
        };
    
        class GradeTooLowException:public std::exception {
            public:
            const char* what() const throw();
        };

        Bureaucrat(const std::string& n, int g);
        Bureaucrat(const Bureaucrat &ob);
        Bureaucrat &operator=(const Bureaucrat &ob);
        ~Bureaucrat();
    
        const std::string& getName() const;
        int getGrade() const;
    
        void    incBureaucratGrade();
        void    decBureaucratGrade();
        
        void    signForm(Form& ob);
};

std::ostream &operator<<(std::ostream& COUT, const Bureaucrat &obj);


#endif