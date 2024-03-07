/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 13:52:41 by khanhayf          #+#    #+#             */
/*   Updated: 2024/02/20 20:09:42 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm: public AForm{
    private:
        ShrubberyCreationForm();
    public:
        ShrubberyCreationForm(ShrubberyCreationForm &ob);
        ShrubberyCreationForm &operator=(ShrubberyCreationForm &ob);
        ~ShrubberyCreationForm();
        
        ShrubberyCreationForm(const std::string& target);
        
        void    execute(const Bureaucrat &executor) const;
};


#endif