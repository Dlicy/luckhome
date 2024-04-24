#include "../luckyhome/PropsTraversal.h"

void PropsTraversal(vector<Thing*>* punchboardItem, vector<Props*>* playerScene, int* dailyMoney, int dailycount)
{
	size_t length = (*playerScene).size();
	
	for (int i = 1; i < 5; i++)
	{
		for(size_t j = 0; j < length; j++)
		{
			if ((*playerScene)[j] -> getPrice() == i)
			{
				*dailyMoney += (*playerScene)[j]-> calculateMoney(*punchboardItem);
				*dailyMoney += (*playerScene)[j]-> calculateMoney(dailycount);

				(*playerScene)[j]->calculateMoney(*punchboardItem);

			}
		}
	}
	return;
}