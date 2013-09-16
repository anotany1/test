#pragma once
template <class Type> class TemplateExample
{
public:
	TemplateExample();
	void print(Type var);
};

template<class Type> 
TemplateExample<Type>::TemplateExample()
{
	std::cout<<"TemplateExample constructor\n";
}

template<class Type>
void TemplateExample<Type>::print( Type var )
{
	std::cout<<"TemplateExample function Print\n";
}
