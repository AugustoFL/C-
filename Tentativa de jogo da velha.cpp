#include <stdio.h>
#include <iostream>
using namespace std;
main () {
	int x,o,col,col2;
	int lin,lin2;
	
	printf ("   1   2   3 \n");
	printf ("4 ___|___|___\n");
	printf ("5 ___|___|___\n");
	printf ("6    |   |   \n");
	
	while (x+o<9){
	printf ("Vez do X:\n");
	printf ("Selecione uma coluna\n");
	scanf  ("%d", &col);
	printf ("Selecione uma linha: \n");
	scanf  ("%d", &lin);
/////////////////////////////////////////////
	if ((col==1)&&(lin==4)){				
	printf ("   1   2   3 \n");			
	printf ("4 _X_|___|___\n");			
	printf ("5 ___|___|___\n");
	printf ("6    |   |   \n");				
	}

	else if ((col==1)&&(lin==5)){
	printf ("   1   2   3 \n");
	printf ("4 ___|___|___\n");
	printf ("5 _X_|___|___\n");
	printf ("6    |   |   \n");
}

    else if ((col==1)&&(lin==6)){
	printf ("   1   2   3 \n");
	printf ("4 ___|___|___\n");
	printf ("5 ___|___|___\n");
	printf ("6  X |   |   \n");
}
///////////||||||||||||||||||||||||||||||||||||||||||||||||||||||||||//////
	else if ((col==2)&&(lin==4)){
	printf ("   1   2   3 \n");
	printf ("4 ___|_X_|___\n");
	printf ("5 ___|___|___\n");
	printf ("6    |   |   \n");
	}

	else if ((col==2)&&(lin==5)){
	printf ("   1   2   3 \n");
	printf ("4 ___|___|___\n");
	printf ("5 ___|_X_|___\n");
	printf ("6    |   |   \n");
	}

else if ((col==2)&&(lin==6)){
	printf ("   1   2   3 \n");
	printf ("4 ___|___|___\n");
	printf ("5 ___|___|___\n");
	printf ("6    | X |   \n");
	}

///////////////////////////////////////////////////////	
	
	else if ((col==3)&&(lin==4)){
	printf ("   1   2   3 \n");
	printf ("4 ___|___|_X_\n");
	printf ("5 ___|___|___\n");
	printf ("6    |   |   \n");
	}
	
	else if ((col==3)&&(lin==5)){
	printf ("   1   2   3 \n");
	printf ("4 ___|___|___\n");
	printf ("5 ___|___|_X_\n");
	printf ("6    |   |   \n");
	}
	else if ((col==3)&&(lin==6)){
	printf ("   1   2   3 \n");
	printf ("4 ___|___|___\n");
	printf ("5 ___|___|___\n");
	printf ("6    |   | X \n");
	}
	x++;
//----------------------------------------------------------------------// 	
	printf ("Vez do O:\n");
	printf ("Selecione uma coluna\n");
	scanf  ("%d", &col2);
	printf ("Selecione uma linha: \n");
	scanf  ("%d", &lin2);
	
	if ((col2==1)&&(lin2==4)){				
	printf ("   1   2   3 \n");			
	printf ("4 _O_|___|___\n");			
	printf ("5 ___|___|___\n");
	printf ("6    |   |   \n");				
	}

	else if ((col2==1)&&(lin2==5)){
	printf ("   1   2   3 \n");
	printf ("4 ___|___|___\n");
	printf ("5 _O_|___|___\n");
	printf ("6    |   |   \n");
}

    else if ((col2==1)&&(lin2==6)){
	printf ("   1   2   3 \n");
	printf ("4 ___|___|___\n");
	printf ("5 ___|___|___\n");
	printf ("6  O |   |   \n");
}
///////////||||||||||||||||||||||||||||||||||||||||||||||||||||||||||//////
	else if ((col2==2)&&(lin2==4)){
	printf ("   1   2   3 \n");
	printf ("4 ___|_O_|___\n");
	printf ("5 ___|___|___\n");
	printf ("6    |   |   \n");
	}

	else if ((col2==2)&&(lin2==5)){
	printf ("   1   2   3 \n");
	printf ("4 ___|___|___\n");
	printf ("5 ___|_O_|___\n");
	printf ("6    |   |   \n");
	}

else if ((col2==2)&&(lin2==6)){
	printf ("   1   2   3 \n");
	printf ("4 ___|___|___\n");
	printf ("5 ___|___|___\n");
	printf ("6    | O |   \n");
	}

///////////////////////////////////////////////////////	
	
	else if ((col2==3)&&(lin2==4)){
	printf ("   1   2   3 \n");
	printf ("4 ___|___|_O_\n");
	printf ("5 ___|___|___\n");
	printf ("6    |   |   \n");
	}
	
	else if ((col2==3)&&(lin2==5)){
	printf ("   1   2   3 \n");
	printf ("4 ___|___|___\n");
	printf ("5 ___|___|_O_\n");
	printf ("6    |   |   \n");
	}
	else if ((col2==3)&&(lin2==6)){
	printf ("   1   2   3 \n");
	printf ("4 ___|___|___\n");
	printf ("5 ___|___|___\n");
	printf ("6    |   | O \n");
	}
	o++;
	}

}
