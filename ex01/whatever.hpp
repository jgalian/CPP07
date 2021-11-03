#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template < typename T >
void	increment(T & index)
{
	index += 1;
}

template < typename T >
void	print(T & index )
{
	std::cout << index << " ";
}

template < typename T >
void	iter(T * array, unsigned int const length, void (*f)(T & index))
{
	for (unsigned int i = 0; i < length; i++)
		f(array[i]);
}

#endif
