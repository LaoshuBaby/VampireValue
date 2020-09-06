//Vampire Test

#include<stdio.h>

#define zh_CN
//#define en_UK

#define NumSource 10
#define NumFeature 12


int main(int argc, char *argv[])
{
	#ifdef zh_CN
	    printf("本问卷分为三部分，分别从吸血鬼的起源、特性、外貌、思想等方面进行量化评判\n");
	    printf("并内建有相当多的不同作品中的吸血鬼特性数据库，方便计算您设定的吸血鬼与不同文艺作品中的差别\n");
	#endif // zh_CN

	#ifdef en_UK
		printf("本问卷分为三部分，分别从吸血鬼的起源、特性、外貌、思想等方面进行量化评判\n");
		printf("并内建有相当多的不同作品中的吸血鬼特性数据库，方便计算您设定的吸血鬼与不同文艺作品中的差别\n");
	#endif // en_UK

	int VectorSource[10];
	int VectorFeature[10];
	int VectorAppearence[10];
	int VectorMental[10];

	int index = 0;
	int jndex = 0;


	//input

	//value
	//在这一步对玩家输入的吸血鬼的设定分别从四个维度计算向量从远点到指定点的距离


	//compare
	//是直接读取对应的组的数据，还是读取对应历史材料已经算出来的评分，尚待评判

	//output

	return 0;
}