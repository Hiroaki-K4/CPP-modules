/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:27:50 by hkubo             #+#    #+#             */
/*   Updated: 2022/06/09 20:54:23 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

std::string ft_replace(std::string line, std::string s1, std::string s2)
{
    if (s1 == s2)
        return (line);
    int i = 0;
    while (line[i])
    {
        int pos = line.substr(i).find(s1);
        if (pos == -1)
            break;
        else
        {
            line.erase(i + pos, s1.size());
            line.insert(i + pos, s2);
            i = pos + s2.size();
        }
    }
    return (line);
}

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        std::cout << "[Arguments error] Please run the program like (./sed filename s1 s2)." << std::endl; 
        return (0);
    }
    std::ifstream ifs(argv[1]);
    if (ifs.fail())
    {
        std::cout << "Failed to open file." << std::endl;
        return (-1);
    }
    std::string str;
    std::string output = std::string(argv[1]) + ".replace";
    std::ofstream ofs(output.c_str());
    while (getline(ifs, str))
    {
        std::string result = ft_replace(str, argv[2], argv[3]);
        ofs << result << std::endl;
    }
    return (0);
}
