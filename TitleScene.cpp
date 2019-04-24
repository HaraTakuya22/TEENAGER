#include <DxLib.h>
#include "Scene.h"
#include "TitleScene.h"
#include "GameScene.h"


TitleScene::TitleScene()
{
	Init();
}


TitleScene::~TitleScene()
{
}

unique_Base TitleScene::Update(unique_Base own, const Controller & Controller)
{
	if (CheckHitKey(KEY_INPUT_RETURN))
	{
		return std::make_unique<GameScene>();
	}

	ClsDrawScreen();
	Draw();

	ScreenFlip();


	return move(own);
}

int TitleScene::Init(void)
{

	return 0;
}

void TitleScene::Draw(void)
{
	auto scr = lpScene.GetScrSize();
	DrawFormatString(600, 0, 0xffff00, "title");

	// Titleﾛｺﾞの配置位置(仮)
	DrawBox((scr.x / 2) - 150, (scr.y / 2) - 200, (scr.x / 2) + 150, (scr.y / 2) - 150,  0x0000ff, false);

	// ｹﾞｰﾑ選択文字の配置位置(仮)
	for (int i = 20; i <= 80; i *= 4)
	{
		DrawBox((scr.x / 2) - 80, ((scr.y / 2) - 40) + i, (scr.x / 2) + 80, (scr.y / 2) + i, 0x00ff00, false);
	}
}
