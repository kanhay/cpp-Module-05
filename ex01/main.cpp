/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 12:36:08 by khanhayf          #+#    #+#             */
/*   Updated: 2024/02/24 14:30:06 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

int main()
{
    try{
        Bureaucrat b1("bureaucrat1", 3);
        Form f1("form1", 3, 10);

        std::cout << b1 << std::endl;
        std::cout << f1 << std::endl;
        
        b1.signForm(f1);
        std::cout << f1 << std::endl;
    }
    catch (std::exception& excp){
        std::cout << "Exception happend; " << excp.what() << "\n";
    }
    
}
