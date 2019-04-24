#pragma once
#include "VECTOR2.h"

#define lpMap Map::getIns()

// 逃げる側の人数
enum PLAYER
{
	PLAYER_1,
	PLAYER_2,
	PLAYER_3,
	PLAYER_MAX
};


// ﾀﾞﾝｼﾞｮﾝの壁か通路か
enum PASSAGE
{
	PASSAGE_WAY,	// 道
	PASSAGE_WALL,	// 壁
	PASSAGE_MAX
};

class Map
{
public:
	static Map &getIns(void)
	{
		static Map mapins;
		return mapins;
	}
	// Mapのｵﾌﾞｼﾞｪｸﾄの描画
	void Draw(void);

	// MapのGridの表示(ﾏｽ確認用)
	void MapDraw(void);

	// ﾏｯﾌﾟの全体をとりあえずWALL(壁)で初期化
	bool MapInit(void)
	{
		
		return true;
	}

	// 各変数の初期化関数
	bool Init(void);

	// 各ｳｨﾝﾄﾞｳ(追跡される側)
	int Window1;
	int Window2;
	int Window3;

	// ﾏｯﾌﾟ専用のｳｨﾝﾄﾞｳ
	int MapWindow;

	// 各ﾌﾟﾚｲﾔｰのﾃﾞｨｽﾌﾟﾚｲの描画関数
	void IndividualsDraw(void);
	// ﾌﾟﾚｲﾔｰの人数の格納変数
	PLAYER player;
private:
	Map();
	~Map();

	
};

