/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 12:36:08 by khanhayf          #+#    #+#             */
/*   Updated: 2024/02/24 14:28:33 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try{
        Bureaucrat ob1("obj1", 2);
        Bureaucrat ob2("obj2", 150);

        std::cout << ob1 << std::endl;
        ob1.incBureaucratGrade();
        std::cout << ob1 << std::endl;
        ob1.decBureaucratGrade();
        std::cout << ob1 << std::endl;
    
        std::cout << ob2 << std::endl;
        ob2.decBureaucratGrade();
        std::cout << ob2 << std::endl;  
        ob2.incBureaucratGrade();
        std::cout << ob2 << std::endl;   
    }
    catch (std::exception &excp){
        std::cout << "Exception happend! " << excp.what() << "\n";
    }
}
