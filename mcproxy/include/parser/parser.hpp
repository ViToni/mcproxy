/*
 * This file is part of mcproxy.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 * written by Sebastian Woelke, in cooperation with:
 * INET group, Hamburg University of Applied Sciences,
 * Website: http://mcproxy.realmv6.org/
 */

#ifndef PARSER_HPP
#define PARSER_HPP

#include "include/parser/scanner.hpp"
#include "include/proxy/def.hpp"
#include "include/parser/token.hpp"


#include <string>
#include <list>
class interface;

enum parser_type {
    PT_PROTOCOL, PT_TABLE, PT_INSTANCE_DEFINITION, PT_INTERFACE_RULE_BINDING
};



class parser
{
private:
    scanner m_scanner;
    token m_current_token; 

public:
    parser_type get_parser_type();

    void parse_group_mem_proto(group_mem_protocol& gmp);
    void parse_table(void* table);
    void parse_instance_definition(std::pair<std::list<std::string>, std::list<std::string>>& instance);
    void parse_interface_rule_binding(interface& interf);

    parser(unsigned int current_line, const std::string& cmd);

    void accept(token_type type);
    void get_next_token();

    std::string to_string() const;
    friend std::ostream& operator<<(std::ostream& stream, const parser& scan);
};


#endif // PARSER_HPP