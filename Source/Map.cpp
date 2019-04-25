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
	//	// Map�̉���
	//	DrawLine(0, y * CHARSIZE_Y,CHARSIZE_X * GRIDCNT_X, y * CHARSIZE_Y,0xffffff);
	//	for (int x = 0; x <= GRIDCNT_X; x++)
	//	{
	//		// Map�̏c��
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

	//// ���4����-----------------------------------
	//DrawLine(scr.x / 2, 0, scr.x / 2, scr.y, 0xffffff);
	//DrawLine(0, scr.y / 2, scr.x, scr.y / 2, 0xffffff);
	//// -------------------------------------------

	// ��ʕ���(player�l������)
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

	// ��ɔp�~�\��(Map������)----------
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

	// Map��ʕ\��
	if (player == PLAYER_1 || player == PLAYER_2 || player == PLAYER_3)
	{
		if (MapWindow >= 0)
		{
			MapWindow = MakeScreen(Scr.x / 3, Scr.y / 3 + 50, true);
			SetDrawScreen(MapWindow);
			DrawBox(0, 0, Scr.x / 3, Scr.y / 3 + 50, 0x0000ff, false);
			SetDrawScreen(DX_SCREEN_BACK);
		}
	}

	// player1�̉�ʕ\��
	if (player == PLAYER_1)
	{
		if (Window1 >= 0)
		{
			Window1 = MakeScreen(Scr.x, Scr.y, true);
			SetDrawScreen(Window1);
			DrawBox(0, 0, Scr.x, Scr.y, 0xffffff, false);
			SetDrawScreen(DX_SCREEN_BACK);
		}

		// ���ޯ�ޗp-----------------------------------
		DrawFormatString(50, 50, 0xffffff, "Player1");
		//---------------------------------------------

		DrawGraph(0, 0, Window1, true);

		// Map����ʉE���ɔz�u
		DrawGraph(Scr.x / 2 - 200, Scr.y - (Scr.y / 3) - 50, MapWindow, true);
		DrawFormatString(Scr.x / 2 - 150, Scr.y - (Scr.y / 3) + 50, 0xffffff, "Map");
	}

	// player2�̉�ʕ\��
	if (player == PLAYER_2)
	{
		if (Window2 >= 0)
		{
			Window2 = MakeScreen(Scr.x / 2,Scr.y, true);
			SetDrawScreen(Window2);
			DrawBox(0, 0, Scr.x / 2, Scr.y, 0xffffff, false);
			SetDrawScreen(DX_SCREEN_BACK);
		}

		// ���ޯ�ޗp--------------------------------------------------
		DrawFormatString(50, 50, 0xffffff, "Player1");
		DrawFormatString(Scr.x / 2 + 50, 50, 0xffffff, "Player2");
		//------------------------------------------------------------

		DrawGraph(0, 0, Window2, true);
		DrawGraph(Scr.x / 2, 0, Window2, true);

		// Map�̔z�u
		DrawGraph(Scr.x / 2 - 200, Scr.y - (Scr.y / 3) - 50, MapWindow, false);
		DrawFormatString(Scr.x / 2 - 150, Scr.y - (Scr.y / 3) + 50, 0xffffff, "Map");
	}

	// player3�̉�ʕ\��
	if (player == PLAYER_3)
	{
		if (Window3 >= 0)
		{
			Window3 = MakeScreen(Scr.x / 2, Scr.y / 2, true);
			SetDrawScreen(Window3);
			DrawBox(0, 0, Scr.x / 2, Scr.y / 2, 0xffffff, false);
			SetDrawScreen(DX_SCREEN_BACK);
		}

		// ���ޯ�ޗp------------------------------------------
		DrawFormatString(50, 50, 0xffffff, "Player1");
		DrawFormatString(Scr.x / 2 + 50, 50, 0xffffff, "Player2");
		DrawFormatString(50, Scr.y / 2 + 50, 0xffffff, "Player3");
		//----------------------------------------------------

		DrawGraph(0, 0, Window3, true);
		DrawGraph(Scr.x / 2,0,Window3, true);
		DrawGraph(0, Scr.y / 2, Window3, true);

		// Map�̔z�u
		DrawGraph(Scr.x / 2 + 110, Scr.y / 2 + (((Scr.y / 3) / 2) / 2) - 15, MapWindow, false);
		// ���ޯ�ޗp---------------------------------------------------------------------------
		DrawFormatString(Scr.x / 2 + 150, Scr.y / 2 + (((Scr.y / 3) / 2) / 2) + 50, 0xffffff, "Map");
		//-------------------------------------------------------------------------------------
	}
}

Map::Map()
{
	Init();
}


Map::~Map()
{
}
