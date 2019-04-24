#include <DxLib.h>
#include "Map.h"
#include "Scene.h"



void Map::Draw(void)
{
}

void Map::MapDraw(void)
{
	auto scr = lpScene.GetScrSize();
	//for (int y = 0; y <= GRIDCNT_Y; y++)
	//{
	//	// Map‚Ì‰¡ü
	//	DrawLine(0, y * CHARSIZE_Y,CHARSIZE_X * GRIDCNT_X, y * CHARSIZE_Y,0xffffff);
	//	for (int x = 0; x <= GRIDCNT_X; x++)
	//	{
	//		// Map‚Ìcü
	//		DrawLine(x * CHARSIZE_X,0, x * CHARSIZE_X, GRIDCNT_Y * CHARSIZE_Y,0xffffff);
	//	}
	//}
	//for (int y = 0; y < GRIDCNT_Y; y++)
	//{
	//	for (int x = 0; x < GRIDCNT_X; x++)
	//	{
	//		DrawFormatString(x * CHARSIZE_X, y * CHARSIZE_Y, 0xffffff, "%d", MapFlag[y * x]);
	//	}
	//}

	//// ‰æ–Ê4•ªŠ„-----------------------------------
	//DrawLine(scr.x / 2, 0, scr.x / 2, scr.y, 0xffffff);
	//DrawLine(0, scr.y / 2, scr.x, scr.y / 2, 0xffffff);
	//// -------------------------------------------

	// ‰æ–Ê•ªŠ„(playerl”–ˆ‚É)
	switch (player)
	{
	case PLAYER_1:

		break;

	case PLAYER_2:
		DrawLine(scr.x / 2, 0, scr.x / 2, scr.y, 0xffffff);
		break;

	case PLAYER_3:
		DrawLine(scr.x / 2, 0, scr.x / 2, scr.y, 0xffffff);
		DrawLine(0, scr.y / 2, scr.x, scr.y / 2, 0xffffff);
		break;

	default:
		break;
	}

	//DrawBox(0, 0, scr.x / 2, scr.y / 2, 0xffffff,true);
}

bool Map::Init(void)
{

	// Œã‚É”pŽ~—\’è(MapŠ®¬Œã)----------
	Window1 = 0;
	Window2 = 0;
	Window3 = 0;
	MapWindow = 0;
	//----------------------------------

	return true;
}

void Map::IndividualsDraw(void)
{
	auto Scr = lpScene.GetScrSize();



	// player1‚Ì‰æ–Ê•\Ž¦
	if (Window1 >= 0)
	{
		Window1 = MakeScreen(Scr.x, Scr.y, true);
		SetDrawScreen(Window1);
		DrawBox(0, 0, Scr.x, Scr.y, 0x0000ff, true);
		SetDrawScreen(DX_SCREEN_BACK);
	}
	if (lpMap.player == PLAYER_1)
	{
		DrawGraph(0, 0, Window1, true);
	}

	// player2‚Ì‰æ–Ê•\Ž¦
	if (Window2 >= 0)
	{
		Window2 = MakeScreen(Scr.x / 2, Scr.y / 2, true);
		SetDrawScreen(Window2);
		DrawBox(0, 0, Scr.x / 2, Scr.y / 2, 0xff0000, true);
		SetDrawScreen(DX_SCREEN_BACK);
	}
	if (lpMap.player == PLAYER_2)
	{
		DrawGraph(0, 0, Window2, true);
		DrawGraph(Scr.x / 2, 0, Window2, true);
	}

	// player3‚Ì‰æ–Ê•\Ž¦
	if (Window3 >= 0)
	{
		Window3 = MakeScreen(Scr.x / 2, Scr.y / 2, true);
		SetDrawScreen(Window3);
		DrawBox(0, 0, Scr.x / 2, Scr.y / 2, 0x00ff00, true);
		SetDrawScreen(DX_SCREEN_BACK);
	}
	if (lpMap.player == PLAYER_3)
	{
		DrawGraph(0, Scr.y / 2, Window3, true);
	}

	// Map‰æ–Ê•\Ž¦
	if (MapWindow >= 0)
	{
		MapWindow = MakeScreen(Scr.x / 2, Scr.y / 2, true);
		SetDrawScreen(MapWindow);
		DrawBox(0, 0, Scr.x / 2, Scr.y / 2, 0xff00ff, true);
		SetDrawScreen(DX_SCREEN_BACK);
	}
	DrawGraph(Scr.x / 2, Scr.y / 2, MapWindow, true);

}

Map::Map()
{
	Init();
}


Map::~Map()
{
}
