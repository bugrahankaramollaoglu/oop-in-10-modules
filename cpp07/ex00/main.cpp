/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaramol <bkaramol@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:23:11 by bkaramol          #+#    #+#             */
/*   Updated: 2023/09/14 13:35:08 by bkaramol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

/*
int main(void)
{
	int a = 2;
	int b = 3;

	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << min(a, b) << std::endl;
	std::cout << "max( a, b ) = " << max(a, b) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << min(c, d) << std::endl;
	std::cout << "max( c, d ) = " << max(c, d) << std::endl;
} */

/* ---------------------------- */

/* class Awesome
{
public:
	Awesome(void) : _n(0) {}
	Awesome(int n) : _n(n) {}

	Awesome &operator=(Awesome &a)
	{
		_n = a._n;
		return *this;
	}

	bool operator>(Awesome &a) { return this->_n > a.get_n(); }
	bool operator<(Awesome &a) { return this->_n < a.get_n(); }

	int get_n() const { return _n; }

private:
	int _n;
};

std::ostream &operator<<(std::ostream &o, const Awesome &a)
{
	o << a.get_n();
	return o;
}

int main()
{
	Awesome a(2), b(4);

	swap(a, b);
	std::cout << "a: " << a << " b: " << b << std::endl;
	std::cout << "max: " << max(a, b) << std::endl;
	std::cout << "min: " << min(a, b) << std::endl;
	return 0;
}
 */
