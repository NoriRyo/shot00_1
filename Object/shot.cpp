#include "DxLib.h"
#include "shot.h"
#include "game.h"


Shot::Shot() : 
	m_handle(-1), 
	m_isExist(false),
	m_pos(100.0f, 100.0f),
	m_vec(8.0f,0.0f)
{	
}

Shot::~Shot()
{

}

void Shot::start(Vec2 pos)
{
	m_isExist = true;
	m_pos = pos;
	if (m_pos.x > Game::kScreenWidth)
	{
		m_isExist = false;
	}
}

void Shot::update()
{
	if (!m_isExist) return;

	m_pos += m_vec;
}
// •\Ž¦
void Shot::draw()
{
	if (!m_isExist) return;

	DrawGraphF(m_pos.x, m_pos.y, m_handle, true);
}
