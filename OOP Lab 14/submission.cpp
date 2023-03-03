
//Q1
template<class t1> 
t1 Power(t1 base, t1 exponent)
template<class t2>
t2 SquareRoot(t2 number)
template<class t3>
t3 cosine(t3 x)
template<class t4>
t4 sine(t4 x) {
template<class t5> 
t5 tangent(t5 x) 

//Q2

template<class T>
class Calculator {
public:
	T add(T x, T y);
	T sub(T x, T y);
	T mul(T x, T y);
	T div(T x, T y);
};

//Q3
template<typename T>
class Vector {
private:
	T* ptr;
	int size_;
	int c_index;
public:
	Vector();
	Vector(int size);
	Vector(int size, const T& iv);
	Vector(const Vector<T>& obj);
	~Vector();
	const T& operator=(const T& obj);
	T* begin();
	T* end();
	int size();
	void resize(int x);
	bool empty();
	void shrink_to_fit(int x);
	T& operator[](int index);
	T& front();
	T& back();
	void push_back(const T& value);
	void pop_back();
	void swap(Vector<T>& other);
	void clear();
	int capacity();
};
//Q5

class Person {
private:
	string firstName, lastName, phoneNo;
public:
	Person();
	Person(const Person&);
	const Person& operator=(const Person& obj);
	virtual ~Person();
	const string& getFirstName() const;
	void setFirstName();
	const string& getLastName() const;
	void setLastName();
	const string& getPhoneNo() const;
	void setPhoneNo();
	void strInput(string &a);
	const Person& input();
	void display();
};
