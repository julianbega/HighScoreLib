#pragma once

#include "Highscore.h"

namespace HighscoreBega
{
	void Highscore::resetHighScore()
	{
		for (int i = Size - 1; i != 0; i--)
		{
			Players[i] = "";
			Score[i] = 0;
		}
	}

	void Highscore::SetNewHighScore (string player, int score) 
	{
		int ScoreAux = score;
		string PlayerAux = player;
		
		for (int i = Size-1; i != 0; i--)
		{
			if (Score[i] < score)
			{
				if (i == Size - 1)
				{
					Score[i] = score;
					Players[i] = player;
				}
				else
				{
					ScoreAux = Score[i];
					PlayerAux = Players[i];
					Score[i] = score;
					Players[i] = player;
					Score[i+1] = ScoreAux;
					Players[i+1] = PlayerAux;
				}
			}
			
		}
	}
	int Highscore::GetScore(int pos) 
	{
		return Score[pos];
	}
	string Highscore::GetPlayer(int pos) 
	{
		return Players[pos];
	}
	string Highscore::GetMaxScorePlayer() 
	{
		return Players[0];
	}
	int Highscore::GetMaxScore()
	{
		return Score[0];
	}
}	