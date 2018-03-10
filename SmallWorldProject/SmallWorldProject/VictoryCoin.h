#pragma once
class VictoryCoin {
	public:
		VictoryCoin();
		~VictoryCoin();
		//returns the current number of victory coins held
		int getNumofCoins();
		//modifies the number of victory coins held
		void setNumofCoins(int coins);
	private:
		int numOfCoins;
};