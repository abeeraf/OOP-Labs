class Counter 
{
	public:
	Counter();
	Counter(int c);
	~Counter();
	void setCount(int c);
	int getCount()const;
	int getSerialNo()const;
	static int getObjCount();
	static int IncrementObjCount();
	void operator=(Counter obj);
	Counter operator-(Counter obj);
	private:
	int count;
	static int objCount;
	int serialNo;
};
