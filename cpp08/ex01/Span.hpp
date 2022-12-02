/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhwang <nhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 14:39:38 by nhwang            #+#    #+#             */
/*   Updated: 2022/12/02 14:39:39 by nhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN
# define SPAN

#include <vector>
#include <exception>
#include <iostream>

class Span
{
private:
	unsigned int _capacity;
	std::vector<int> arr;
	Span();
public:
	Span(unsigned int nn);
	~Span();
	Span(const Span& cpy);
	unsigned int getCap() const;
	std::vector<int> getArr() const;
	Span& operator=(const Span& ass);
	void addNumber(int p);
	int shortestSpan();
	int longestSpan();
	void assignVec(Span _from);
};

# endif