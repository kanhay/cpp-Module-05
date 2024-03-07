/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 19:20:42 by khanhayf          #+#    #+#             */
/*   Updated: 2024/02/18 19:20:42 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP



#include <string>
#include "AForm.hpp"

class Intern{
    public:
        Intern();
        Intern(const Intern& ob);
        Intern& operator=(const Intern& ob);
        ~Intern();

        AForm *makeForm(const std::string& formName, const std::string& target);
};

#endif