#pragma once
#include "VECTOR2.h"

#define lpMap Map::getIns()

// �����鑤�̐l��
enum PLAYER
{
	PLAYER_1,
	PLAYER_2,
	PLAYER_3,
	PLAYER_MAX
};


// ��ݼޮ݂̕ǂ��ʘH��
enum PASSAGE
{
	PASSAGE_WAY,	// ��
	PASSAGE_WALL,	// ��
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
	// Map�̵�޼ު�Ă̕`��
	void Draw(void);

	// Map��Grid�̕\��(Ͻ�m�F�p)
	void MapDraw(void);

	// ϯ�߂̑S�̂��Ƃ肠����WALL(��)�ŏ�����
	bool MapInit(void)
	{
		
		return true;
	}

	// �e�ϐ��̏������֐�
	bool Init(void);

	// �e����޳(�ǐՂ���鑤)
	int Window1;
	int Window2;
	int Window3;

	// ϯ�ߐ�p�̳���޳
	int MapWindow;

	// �e��ڲ԰���ި���ڲ�̕`��֐�
	void IndividualsDraw(void);
	// ��ڲ԰�̐l���̊i�[�ϐ�
	PLAYER player;
private:
	Map();
	~Map();

	
};

