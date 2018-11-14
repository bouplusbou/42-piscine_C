/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 17:35:17 by bboucher          #+#    #+#             */
/*   Updated: 2018/09/08 19:26:54 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		estValide(Grid[][], position (position 0 au premier appel de la fonction) )
{
	1.Chcker si fin de la grid

		2.definir position x y via division/modulo par 9

		3.Checker si casse deja rempli
			Si deja rempli > Rappel de la fonction +1

		4.boucle de 1 a 9 qui servira de valeur a checker pour la case vue que case forcement vide

			5.checker si valeur absent de ligne/colonne/carre
				Si absent
					assigner valeur a case
						et checker avec un if recursif la suite avec position +1
							Si condition valide return true et fin du la fonction

		6.Si sortie de la boucle > reinitialiser valeur de la case a 0
		return false;
}

Liste des fonction necessaire:

1.Check si fin de grid
	if (position == 82)
		return true; donc fin de tableau

2.Definir position:
	x = position/9
	y = position%9;

3.Checker si case deja rempli
	if (grid[x][y] != 0)
		return (est valide +1);

4.Creer boucle avec compteur qui servira de valeur
	int i = 1;
		while (i <= 9)
			faire etape 5

	5.Creer condition avec fonction ligne col carre
		if (line/col/carre)
			TRUE
				grid[x][y] = i;
				if(est valide +1)
					return true;
			FALSE
				i++;

6.Si i > 9 donc sortie de boucle
	i = 0;
	return false;









relancer algo en reverse pour checker resultat possible
