/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 12:36:28 by khanhayf          #+#    #+#             */
/*   Updated: 2024/02/24 14:02:10 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP


#include <iostream>
#include <string>
class AForm;
#include "AForm.hpp"

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
    
        Bureaucrat(const Bureaucrat &ob);
        Bureaucrat &operator=(const Bureaucrat &ob);
        Bureaucrat(const std::string& n, int g);
        ~Bureaucrat();
    
        const std::string& getName() const;
        int getGrade() const;
    
        void    incBureaucratGrade();
        void    decBureaucratGrade();
        
        void    signForm(AForm& ob);
        void    executeForm(AForm const & form);
};

std::ostream &operator<<(std::ostream& COUT, const Bureaucrat &obj);

#endif