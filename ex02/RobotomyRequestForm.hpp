/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 16:30:54 by khanhayf          #+#    #+#             */
/*   Updated: 2024/02/20 20:09:04 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP


#include "AForm.hpp"

class RobotomyRequestForm: public AForm{
    private:
    static int counter;
    RobotomyRequestForm();
    public:
    RobotomyRequestForm(RobotomyRequestForm& ob);
    RobotomyRequestForm& operator=(RobotomyRequestForm& ob);
    ~RobotomyRequestForm();

    RobotomyRequestForm(const std::string& target);
    
    void    execute(const Bureaucrat &executor) const;
};
#endif