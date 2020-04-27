# HighScoreLib
Liberia de HighScore para la materia de introducción a la programación de gráficos 

Dentro del HighScore.h en la clase Highscore se encuentra la variable Size que determina cuantos scores pueden guardarse

Funciones:
	void resetHighScore(); Setea todo el array de los Players en "" y todo el array de scores en 0
	void SetNewHighScore(string player, int score); Recibe un score nuevo y un string y posiciona segun que tan alto sea, los scores mas altos van a estar pas cerca de la pos 0, si el puntaje es mas bajo que el puntaje mas bajo del array entonces no se agrega
	int GetScore(int pos); Devuelve el puntaje de una posicion elegida del array
	string GetPlayer(int pos); Devuelve el nombre del player de una posicion elegida del array
	string GetMaxScorePlayer(); Devuelve el nombre del player de la posicion 0 del array
	int GetMaxScore(); Devuelve el puntaje la posicion 0 del array

