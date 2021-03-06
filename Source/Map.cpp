#include <DxLib.h>
#include "Map.h"
#include "Scene.h"
#include "Prey.h"
#include "Image.h"



void Map::Draw(void)
{
}

void Map::MapDraw(void)
{	
	// 画面分割(player人数毎に)
	switch (player)
	{
	case PLAYER_1:
		// ｸﾞﾘｯﾄﾞの表示
		for (int y = 0; y <= Scr.y; y += GRIDSIZE)
		{
			DrawLine(0, y, Scr.x, y, 0xffffff);
			for (int x = 0; x <= Scr.x; x += GRIDSIZE)
			{
				DrawLine(x, 0, x, Scr.y, 0xffffff);
			}
		}
		// Mapを画面右下に配置
		DrawGraph(Scr.x - (GRIDSIZE * 6), 0, MapWindow, false);
		DrawFormatString(Scr.x / 2 - 150, Scr.y - (Scr.y / 3) + 50, 0xffffff, "Map");
		break;
	case PLAYER_2:
		DrawLine(Scr.x / 2, 0, Scr.x / 2, Scr.y, 0xffffff);

		// Mapの配置
		DrawGraph(Scr.x / 2 - (MAPWINDOW_SIZE_X / 2), 0, MapWindow, false);
		DrawFormatString(Scr.x / 2 - 150, Scr.y - (Scr.y / 3) + 50, 0xffffff, "Map");
		break;

	case PLAYER_3:
		DrawLine(Scr.x / 2, 0, Scr.x / 2, Scr.y, 0xffffff);
		DrawLine(0, Scr.y / 2, Scr.x, Scr.y / 2, 0xffffff);

		// Mapの配置
		DrawGraph((Scr.x - (Scr.x / 4)) - (MAPWINDOW_SIZE_X / 2), (Scr.y - (Scr.y / 4)) - (MAPWINDOW_SIZE_Y / 2), MapWindow, false);
		DrawFormatString(Scr.x / 2 + 150, Scr.y / 2 + (((Scr.y / 3) / 2) / 2) + 50, 0xffffff, "Map");

		break;

	default:
		break;
	}
<<<<<<< HEAD
=======
<<<<<<< HEAD


<<<<<<< HEAD

	DrawLine(GRIDSIZE * 9, GRIDSIZE * 3,GRIDSIZE * 9,Scr.y, 0xffff00);
=======
	DrawLine(GRIDSIZE * 9, GRIDSIZE * 3,GRIDSIZE * 9,Scr.y, 0xffff00);
=======
>>>>>>> ab3f1c354d0df138eec15e036820ffc64cd1fd21
>>>>>>> ce496a41a0504782aa0a3e99fae297266b649b08
>>>>>>> 29afbd9b8d458a03a6ac79a9d07b7731e784573b
}

bool Map::Init(void)
{
	Scr = lpScene.GetScrSize();

	// 後に廃止予定(Map完成後)----------
	PreyWindow = 0;
	MapWindow = 0;

	mapPos = VECTOR2(0, 0);
	PlanningImage = LoadGraph("image/PlanningMap.png");

	//----------------------------------

	return true;
}

<<<<<<< HEAD
void Map::CreateIndividualsDisplay(void)
=======
<<<<<<< HEAD
void Map::CreateIndividualsDisplay(void)
=======
<<<<<<< HEAD
void Map::CreateIndividualsDisplay(void)
=======
<<<<<<< HEAD
void Map::CreateIndividualsDisplay(void)
=======
void Map::IndividualsDraw(WeakList weaklist)
>>>>>>> 4c5d2e3684f3a771ccd677b84e0240731c82b3b4
>>>>>>> ab3f1c354d0df138eec15e036820ffc64cd1fd21
>>>>>>> ce496a41a0504782aa0a3e99fae297266b649b08
>>>>>>> 29afbd9b8d458a03a6ac79a9d07b7731e784573b
{
	// 各ﾌﾟﾚｲ人数毎にﾃﾞｨｽﾌﾟﾚｲを生成
	switch (player)
	{
	case PLAYER_1:
		if (PreyWindow >= 0)
		{
			PreyWindow = MakeScreen(Scr.x, Scr.y, true);
			SetDrawScreen(PreyWindow);
			DrawBox(0, 0, Scr.x, Scr.y, 0xffffff, false);
			SetDrawScreen(DX_SCREEN_BACK);
		}
		break;
<<<<<<< HEAD

=======
<<<<<<< HEAD

	case PLAYER_2:
		if (PreyWindow >= 0)
		{
			PreyWindow = MakeScreen(Scr.x / 2, Scr.y, true);
			SetDrawScreen(PreyWindow);
			DrawBox(0, 0, Scr.x / 2, Scr.y, 0xffffff, false);
			SetDrawScreen(DX_SCREEN_BACK);
		}
		break;

	case PLAYER_3:
		if (PreyWindow >= 0)
		{
			PreyWindow = MakeScreen(Scr.x / 2, Scr.y / 2, true);
			SetDrawScreen(PreyWindow);
			DrawBox(0, 0, Scr.x / 2, Scr.y / 2, 0xffffff, false);
			SetDrawScreen(DX_SCREEN_BACK);
		}
		break;
	default:

=======
<<<<<<< HEAD

	case PLAYER_2:
		if (PreyWindow >= 0)
		{
			PreyWindow = MakeScreen(Scr.x / 2, Scr.y, true);
			SetDrawScreen(PreyWindow);
			DrawBox(0, 0, Scr.x / 2, Scr.y, 0xffffff, false);
			SetDrawScreen(DX_SCREEN_BACK);
		}
		break;

	case PLAYER_3:
		if (PreyWindow >= 0)
		{
			PreyWindow = MakeScreen(Scr.x / 2, Scr.y / 2, true);
			SetDrawScreen(PreyWindow);
			DrawBox(0, 0, Scr.x / 2, Scr.y / 2, 0xffffff, false);
			SetDrawScreen(DX_SCREEN_BACK);
		}
		break;
	default:

		break;
	}
}

=======

>>>>>>> 29afbd9b8d458a03a6ac79a9d07b7731e784573b
	case PLAYER_2:
		if (PreyWindow >= 0)
		{
			PreyWindow = MakeScreen(Scr.x / 2, Scr.y, true);
			SetDrawScreen(PreyWindow);
			DrawBox(0, 0, Scr.x / 2, Scr.y, 0xffffff, false);
			SetDrawScreen(DX_SCREEN_BACK);
		}
		break;

	case PLAYER_3:
		if (PreyWindow >= 0)
		{
			PreyWindow = MakeScreen(Scr.x / 2, Scr.y / 2, true);
			SetDrawScreen(PreyWindow);
			DrawBox(0, 0, Scr.x / 2, Scr.y / 2, 0xffffff, false);
			SetDrawScreen(DX_SCREEN_BACK);
		}
		break;
	default:

<<<<<<< HEAD
=======
>>>>>>> ce496a41a0504782aa0a3e99fae297266b649b08
>>>>>>> 29afbd9b8d458a03a6ac79a9d07b7731e784573b
		break;
	}
}

<<<<<<< HEAD
=======
<<<<<<< HEAD
=======
>>>>>>> ab3f1c354d0df138eec15e036820ffc64cd1fd21
>>>>>>> ce496a41a0504782aa0a3e99fae297266b649b08
>>>>>>> 29afbd9b8d458a03a6ac79a9d07b7731e784573b
void Map::IndividualsDraw(WeakList weaklist)
{
	// Map画面表示
	if (player == PLAYER_1 || player == PLAYER_2 || player == PLAYER_3)
	{
		if (MapWindow >= 0)
		{
			MapWindow = MakeScreen(MAPWINDOW_SIZE_X, MAPWINDOW_SIZE_Y, true);
			SetDrawScreen(MapWindow);
			DrawBox(0, 0, MAPWINDOW_SIZE_X, MAPWINDOW_SIZE_Y, 0x0000ff, false);
			SetDrawScreen(DX_SCREEN_BACK);
		}
	}

	// player1の画面表示
	if (player == PLAYER_1)
	{
		// ﾃﾞﾊﾞｯｸﾞ用-----------------------------------
		DrawFormatString(50, 50, 0xffffff, "Player1");
		//---------------------------------------------

<<<<<<< HEAD
		DrawGraph(0, 0, PreyWindow, true);

		// Map(仮)の表示
		DrawGraph(mapPos.x, mapPos.y, PlanningImage, true);

		// Prey(仮)の表示
		//DrawBox(GRIDSIZE * 4,(GRIDSIZE * 4) - 40,(GRIDSIZE * 4) + PREYSIZE_X,(GRIDSIZE * 5), 0xff0000, true);

		// Preyのｲﾝｽﾀﾝｽ
		AddList()(weaklist, std::make_unique<Prey>(VECTOR2((GRIDSIZE * 4) + PREYSIZE_X, GRIDSIZE * 5)));
=======
<<<<<<< HEAD
		DrawGraph(0, 0, PreyWindow, true);

		// Map(仮)の表示
		DrawGraph(mapPos.x, mapPos.y, PlanningImage, true);

		// Prey(仮)の表示
		//DrawBox(GRIDSIZE * 4,(GRIDSIZE * 4) - 40,(GRIDSIZE * 4) + PREYSIZE_X,(GRIDSIZE * 5), 0xff0000, true);

		// Preyのｲﾝｽﾀﾝｽ
		AddList()(weaklist, std::make_unique<Prey>(VECTOR2((GRIDSIZE * 4), GRIDSIZE * 5)));
=======
<<<<<<< HEAD
		DrawGraph(0, 0, PreyWindow, true);

		// Map(仮)の表示
		DrawGraph(mapPos.x, mapPos.y, PlanningImage, true);

		// Prey(仮)の表示
		//DrawBox(GRIDSIZE * 4,(GRIDSIZE * 4) - 40,(GRIDSIZE * 4) + PREYSIZE_X,(GRIDSIZE * 5), 0xff0000, true);

		// Preyのｲﾝｽﾀﾝｽ
		AddList()(weaklist, std::make_unique<Prey>(VECTOR2((GRIDSIZE * 4), GRIDSIZE * 5)));
=======
<<<<<<< HEAD
		DrawGraph(0, 0, PreyWindow, true);

		// Map(仮)の表示
		DrawGraph(mapPos.x, mapPos.y, PlanningImage, true);

		// Prey(仮)の表示
		//DrawBox(GRIDSIZE * 4,(GRIDSIZE * 4) - 40,(GRIDSIZE * 4) + PREYSIZE_X,(GRIDSIZE * 5), 0xff0000, true);

		// Preyのｲﾝｽﾀﾝｽ
		AddList()(weaklist, std::make_unique<Prey>(VECTOR2((GRIDSIZE * 4), GRIDSIZE * 5)));
=======
		DrawGraph(0, 0, Window1, true);

		// Map(仮)の表示
		DrawGraph(mapPos.x, mapPos.y, PlanningImage, true);
		// Prey(仮)の表示
		//DrawBox(GRIDSIZE * 4,(GRIDSIZE * 4) - 40,(GRIDSIZE * 4) + PREYSIZE_X,(GRIDSIZE * 5), 0xff0000, true);

		// Preyのｲﾝｽﾀﾝｽ
		AddList()(weaklist, std::make_unique<Prey>(VECTOR2((GRIDSIZE * 4) + PREYSIZE_X, GRIDSIZE * 5)));

		// ｸﾞﾘｯﾄﾞの表示
		for (int y = 0; y <= Scr.y; y += GRIDSIZE)
		{
			DrawLine(0, y, Scr.x, y, 0xffffff);
			for (int x = 0; x <= Scr.x; x += GRIDSIZE)
			{
				DrawLine(x, 0, x, Scr.y, 0xffffff);
			}
		}
		// Mapを画面右下に配置
		DrawGraph(Scr.x - (GRIDSIZE * 6),0, MapWindow, false);
		DrawFormatString(Scr.x / 2 - 150, Scr.y - (Scr.y / 3) + 50, 0xffffff, "Map");
>>>>>>> 4c5d2e3684f3a771ccd677b84e0240731c82b3b4
>>>>>>> ab3f1c354d0df138eec15e036820ffc64cd1fd21
>>>>>>> ce496a41a0504782aa0a3e99fae297266b649b08
>>>>>>> 29afbd9b8d458a03a6ac79a9d07b7731e784573b
	}

	// player2の画面表示
	if (player == PLAYER_2)
	{
		DrawGraph(0, 0, PreyWindow, true);
		DrawGraph(Scr.x / 2, 0, PreyWindow, true);

		// ﾃﾞﾊﾞｯｸﾞ用--------------------------------------------------
		DrawFormatString(50, 50, 0xffffff, "Player1");
		DrawFormatString(Scr.x / 2 + 50, 50, 0xffffff, "Player2");
		//------------------------------------------------------------
	}

	// player3の画面表示
	if (player == PLAYER_3)
	{
		DrawGraph(0, 0, PreyWindow, true);
		DrawGraph(Scr.x / 2, 0, PreyWindow, true);
		DrawGraph(0, Scr.y / 2, PreyWindow, true);

		// ﾃﾞﾊﾞｯｸﾞ用------------------------------------------
		DrawFormatString(50, 50, 0xffffff, "Player1");
		DrawFormatString(Scr.x / 2 + 50, 50, 0xffffff, "Player2");
		DrawFormatString(50, Scr.y / 2 + 50, 0xffffff, "Player3");
		//----------------------------------------------------
	}
}

Map::Map()
{
	Init();
}


Map::~Map()
{
}
