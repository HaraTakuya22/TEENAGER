#pragma once
#include "VECTOR2.h"
#include "AddList.h"


#define lpMap Map::getIns()

// 1ﾏｽのｻｲｽﾞ
#define GRIDSIZE 80


// Mapｳｨﾝﾄﾞｳのｻｲｽﾞ
#define MAPWINDOW_SIZE_X GRIDSIZE * 6
#define MAPWINDOW_SIZE_Y 214

// 逃げる側の人数
enum PLAYER
{
	PLAYER_1,		// 1人
	PLAYER_2,		// 2人
	PLAYER_3,		// 3人
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

	// 各ﾌﾟﾚｲﾔｰのﾃﾞｨｽﾌﾟﾚｲ生成関数
	void CreateIndividualsDisplay(void);

	// 各ﾌﾟﾚｲﾔｰのﾃﾞｨｽﾌﾟﾚｲの描画関数
	void IndividualsDraw(WeakList weaklist);
<<<<<<< HEAD

=======
<<<<<<< HEAD

=======
<<<<<<< HEAD

=======
<<<<<<< HEAD

=======
>>>>>>> 4c5d2e3684f3a771ccd677b84e0240731c82b3b4
>>>>>>> ab3f1c354d0df138eec15e036820ffc64cd1fd21
>>>>>>> ce496a41a0504782aa0a3e99fae297266b649b08
>>>>>>> 29afbd9b8d458a03a6ac79a9d07b7731e784573b
	// ﾌﾟﾚｲﾔｰの人数の格納変数
	PLAYER player;
private:
	Map();
	~Map();

	// ﾏｯﾌﾟの左上のﾎﾟｼﾞｼｮﾝ
	VECTOR2 mapPos;

	// ﾏｯﾌﾟの仮画像
	int PlanningImage;
<<<<<<< HEAD
=======
<<<<<<< HEAD
=======
<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> ab3f1c354d0df138eec15e036820ffc64cd1fd21
>>>>>>> ce496a41a0504782aa0a3e99fae297266b649b08
>>>>>>> 29afbd9b8d458a03a6ac79a9d07b7731e784573b

	// 各ｳｨﾝﾄﾞｳ(追跡される側)
	int PreyWindow;

	// ﾏｯﾌﾟ専用のｳｨﾝﾄﾞｳ
	int MapWindow;

	// ｽｸﾘｰﾝ全体のｻｲｽﾞ
	VECTOR2 Scr;
<<<<<<< HEAD
=======
<<<<<<< HEAD
=======
<<<<<<< HEAD
=======
=======
>>>>>>> 4c5d2e3684f3a771ccd677b84e0240731c82b3b4
>>>>>>> ab3f1c354d0df138eec15e036820ffc64cd1fd21
>>>>>>> ce496a41a0504782aa0a3e99fae297266b649b08
>>>>>>> 29afbd9b8d458a03a6ac79a9d07b7731e784573b
};

