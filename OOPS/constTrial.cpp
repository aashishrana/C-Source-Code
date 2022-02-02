class constTrial {
	public:
		int rollNumb;
	private:
		int age;
	public:
		
		// Default constructor 
	constTrial() {
		
		cout<<" Default constructor is called !"<<endl;
	}
	// parametrize constructor 
	constTrial(int r) {
		cout<<" constructor two is calles"<<endl;
		
		rollNumb = r;
	}
	
	void display() {
		cout<< age <<" "<<rollNumb;
	}	
		
		
};
