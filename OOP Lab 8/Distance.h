class Distance
{
	
	private: 
	int feet;
	int inches;
	public:
	Distance();
	Distance(int f,int i);
	bool setFeet(int f);
	int getFeet()const;
	bool setInches(int i);
	int getInches()const;
	Distance operator+(const Distance &obj);
	Distance operator-(const Distance &obj);
	bool operator>(const Distance &obj);
	bool operator<(const Distance &obj);
	const Distance operator=(const Distance &obj);

};





