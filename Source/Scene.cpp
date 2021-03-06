#include "Scene.h"
#include "TitleScene.h"


Scene* Scene::sceneins = nullptr;
std::once_flag Scene::onceflag;

void Scene::onceRun(void)
{
	sceneshift = std::make_unique<TitleScene>();
	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
	{
		sceneshift = sceneshift->Update(std::move(sceneshift), (*gamectl));
		gamectl->Update();
	}

}

Scene::Scene()
{
	SystemInit();
}


Scene::~Scene()
{

}

void Scene::Create(void)
{
	sceneins = new Scene();
}

void Scene::Destroy(void)
{
	if (sceneins != nullptr)
	{
		delete sceneins;
	}
	sceneins = nullptr;
}

bool Scene::SystemInit(void)
{
	SetGraphMode(SCREENSIZE_X, SCREENSIZE_Y, 16);		//65536色ﾓｰﾄﾞに設定

	ChangeWindowMode(false);								//true:window　false:ﾌﾙｽｸﾘｰﾝ
	SetWindowText("sample");
	if (DxLib_Init() == -1) return false;				//DXﾗｲﾌﾞﾗﾘ初期化処理
	SetDrawScreen(DX_SCREEN_BACK);

	gamectl = std::make_unique<Controller>();

	return true;
}