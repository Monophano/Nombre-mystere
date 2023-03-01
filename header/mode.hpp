#ifndef MODE_HPP
	#define MODE_HPP

	class Mode
	{
		public : 
			void Facile();
			void Moyen();
			void Difficile();
			void Personnalisé();

			int nb_random;
			int nb_choisi;
			int nb_try;
			int borne_max;
			int borne_min;
	};

#endif