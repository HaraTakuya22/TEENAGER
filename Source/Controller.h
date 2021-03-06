#pragma once
#include <array>

typedef std::array<char, 256> KEY_FLAG;

//ﾎﾞﾀﾝの押下情報のﾀｲﾌﾟ
enum KEY_TYPE {
	NOW,	//今押している
	OLD,	//前ﾌﾚｰﾑに押した
	KEY_MAX
};

class Controller
{
public:
	Controller();
	~Controller();
	//ﾎﾞﾀﾝ情報の更新
	bool Update(void);
	//ﾎﾞﾀﾝ情報の取得関数
	const KEY_FLAG &GetButtonInfo(KEY_TYPE type) const;

private:
	//ﾎﾞﾀﾝ情報の格納場所
	KEY_FLAG key;
	//前ﾌﾚｰﾑに押したﾎﾞﾀﾝ情報の格納場所
	KEY_FLAG keyOld;
};

