#pragma once

#include "Vec2.h"

class SceneMain;

class Player
{
public:
	Player();
	virtual ~Player();

	// SceneMainを設定
	void setMain(SceneMain* pMain) { m_pMain = pMain; }

	// グラフィックデータ設定
	void setHandle(int handle) { m_handle = handle; }

	// プレイヤーの初期化
	void init();

	// 処理
	void update();
	// 描画
	void draw();

	// 情報の取得
	Vec2 getPos() const { return m_pos; }

private:

	SceneMain* m_pMain;

	int m_handle;

	// ショット間隔
	int m_shotInterval;

	// 表示位置
	Vec2 m_pos;
	// 移動
	Vec2 m_vec;
};