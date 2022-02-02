class Product {
	
	public:
		int price;
		
	private:
		int BatchNo;
		
	public:
		void display() {
			cout << price << " "<<BatchNo;
		}
		
		int getBatchNo() {
			return BatchNo;
		}
		
		
};
