#pragma once

class CEntity;

class CFire
{
	bool m_bIsOngoing;
	bool m_bExists;
	bool m_bPropogationFlag;
	bool m_bAudioSet;
	CVector m_vecPos;
	CEntity *m_pEntity;
	CEntity *m_pSource;
	int m_nExtinguishTime;
	int m_nStartTime;
	int field_20;
	int field_24;
	int field_28;
	float field_2C;

public:
	void Extinguish(void);
};

class CFireManager
{
public:
	void StartFire(CEntity *entityOnFire, CEntity *culprit, float, uint32);
};
extern CFireManager &gFireManager;