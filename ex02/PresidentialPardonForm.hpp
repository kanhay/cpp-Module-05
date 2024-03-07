/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 17:24:54 by khanhayf          #+#    #+#             */
/*   Updated: 2024/02/20 20:08:59 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm:public AForm{
    PresidentialPardonForm();
    public:
    PresidentialPardonForm(PresidentialPardonForm& ob);
    PresidentialPardonForm& operator=(PresidentialPardonForm& ob);
    ~PresidentialPardonForm();
    
    PresidentialPardonForm(const std::string& target);

    void    execute(const Bureaucrat &executor) const;
};

#endif