#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template<typename T>
class Array
{

	public:

		Array()
		{
			//cree un array vide
			_array = NULL;
			_size = 0;
		};
		Array(unsigned int n){
			//crée un array de n éléments initialisés par défaut.
			if (n == 0)
				_array = NULL;
			else
				_array = new T[n]();
			_size = n;
			;
			// Essayez de compiler int * a = new int(); puis affichez *a.
		};
		Array( Array<T> const & src )
		{
			_array = new T[src.size()]();
			_size = src.size();
			for (unsigned int i = 0; i < _size; i++)
				_array[i] = src._array[i];
			// toute modification de l’array original ou de sa copie ne doit pas impacter l’autre array.
		};
		~Array()
		{
			delete[] _array;
		};
		unsigned int	size() const
		{
			return (_size);
		}

		Array<T> &		operator=( Array<T> const & rhs )
		{
			if (this != &rhs)
			{
				delete[] _array;
				_array = new T[rhs.size()]();
				_size = rhs.size();
				for (unsigned int i = 0; i < _size; i++)
					_array[i] = rhs._array[i];
			}
			return (*this);
		};
		T &		operator[]( unsigned int index )
		{
			if (index >= _size)
				throw std::overflow_error("index out of range");
			return (_array[index]);
		};

	private:
		T				*_array;
		unsigned int	_size;

};

// std::ostream &			operator<<( std::ostream & o, Array const & i );

#endif /* *********************************************************** ARRAY_H */