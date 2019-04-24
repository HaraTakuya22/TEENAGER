#include <DxLib.h>
#include "GameScene.h"
#include "Map.h"


GameScene::GameScene()
{
	Init();
}


GameScene::~GameScene()
{
}

unique_Base GameScene::Update(unique_Base own, const Controller & Controller)
{
	

	ClsDrawScreen();
	Draw();
	ScreenFlip();


	return move(own);
}

int GameScene::Init(void)
{
	lpMap.MapInit();
	return 0;
}

void GameScene::Draw(void)
{
	DrawFormatString(600, 0, 0xffff00, "Main");
	lpMap.MapDraw();
	lpMap.IndividualsDraw();
}
