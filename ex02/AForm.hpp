/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 15:30:03 by khanhayf          #+#    #+#             */
/*   Updated: 2024/02/24 15:00:42 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

class Bureaucrat;
#include "Bureaucrat.hpp"

class AForm{
    private:
        const std::string _name;
        bool _aformStatus;
        const int _grade2sign;
        const int _grade2xec;
        std::string _target;

    public:
        class GradeTooHighException : public std::exception{
            const char* what() const throw();
        };
        class GradeTooLowException: public std::exception{
            const char* what() const throw();
        };

        AForm();
        AForm(const AForm& ob);
        AForm &operator=(const AForm& ob);
        AForm(const std::string& n, const int g2s, const int g2x, const std::string t);
        virtual~AForm();

        const std::string& getName() const;
        bool getAFormStatus() const;
        int getGrade2sign() const;
        int getGrade2xec() const;
        const std::string& getTarget() const;

        void    beSigned(Bureaucrat &ob);
        virtual void    execute(const Bureaucrat &executor) const = 0;
};

std::ostream& operator<<(std::ostream& COUT, const AForm& ob);
#endif