#pragma once

#include "player.h"
#include "shot.h"
#include "enemy.h"
#include<vector>

class SceneMain
{
public:
	SceneMain();
	virtual ~SceneMain();

	// 初期化
	void init();
	// 終了処理
	void end();

	// 毎フレームの処理
	void update();
	// 毎フレームの描画
	void draw();
	// ショットを撃つ
	bool createShot(Vec2 pos, bool isPlayer);
	//bool createPlayarShot(Vec2 pos);
	//bool createEnemyShot(Vec2 pos);
	
private:
	// ショットの最大数
	static constexpr int kShotMax = 64;

private:

	// プレイヤーのグラフィックハンドル
	int m_hPlayerGraphic;
	int m_hShotGraphic;
	// プレイヤー
	Player m_player;
	// 敵
	Enemy m_enemy;
	// ショット
	std::vector<Shot> m_shot;
};